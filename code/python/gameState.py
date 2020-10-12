from Card import Card
from Deck import Deck

class GameState:
    def isRun(self, l)->bool:
        nums=[]
        l.sort(key=self.sortByNum)
        it=( c.getNum() for c in l )
        first = next(it)
        return all(a == b for a, b in enumerate(it, first + 1))
        
    def seperateHandByValue(self, hand:list):
        if len(hand)==1:
            return {hand[0].getValue() : hand}
        hand.sort(key=self.sortByVal)
        ans={}
        for c in hand:
            if not c.getValue() in ans:
                ans[c.getValue()]=[]
            ans[c.getValue()].append(c)
        return ans
    def seperateHandBySuit(self, hand:list)->dict:
        if len(hand)==1:
            return {hand[0].getSuit():hand}
        hand.sort(key=self.sortBySuit)
        ans={}
        for c in hand:
            if not c.getSuit() in ans:
                ans[c.getSuit()]=[]
            ans[c.getSuit()].append(c)
        return ans
    def compareHands(self, h1, h2)->bool:
        if not len(h1) == len(h2):
            return False
        else:
            #go through hands element by element and compare
            h1.sort(key=self.sortBySuit)
            h2.sort(key=self.sortBySuit)
            for i in range(len(h1)):
                if not h1[i].getName() == h2[i].getName():
                    return False
            return True
    def sortBySuit(self, card):
        return card.getSuit()
    def sortByNum(self, card):
        return card.getNum()
    def sortByVal(self, card):
        return card.getValue()
    def getSortedHand(self, suit=True):
        #will only be used for player
        temp=self.playerHand
        if suit:
            temp.sort(key=self.sortBySuit)
        else:
            temp.sort(key=self.sortByVal)
        return temp
    def sortHand(self):
        #only for player
        temp=self.getSortedHand()
        if self.compareHands(temp, self.playerHand):
            self.playerHand=self.getSortedHand(suit=False)
        else:
            self.playerHand=temp
    def removeCard(self, cardName):
        if self.playerTurn:
            for i in range(len(self.playerHand)):
                if self.playerHand[i].getName() == cardName:
                    temp=self.playerHand.pop(i)
        else:
            for i in range(len(self.opponentHand)):
                if self.opponentHand[i].getName() == cardName:
                    temp=self.opponentHand.pop(i)
        return temp

    def removeCards(self, cards:list):
        if isinstance(cards[0], Card):
            for c in cards:
                self.removeCard(c.getName())
        if isinstance(cards[0], str):
            for c in cards:
                self.removeCard(c)
        
    def discardCard(self,cardName):
        temp=self.removeCard(cardName)
        self.discardPile.append(temp)
        #at end of discard turn ends
        self.playerTurn=not self.playerTurn

    def deckDeal(self):
        if self.playerTurn:
            self.playerHand.append(self.deck.deal())
        else:
            self.opponentHand.append(self.deck.deal())
        
    def discardDeal(self):
        if self.playerTurn:
            self.playerHand.append(self.discardPile.pop(-1))
        else:
            self.opponentHand.append(self.discardPile.pop(-1))

    def checkMeld(self, cards):
        #if cards is a single card then check meld to see if it matches 3 of a kind for 4
            #or if it can go into a run
        if isinstance(cards, Card):
            #first check will be to try and find any melds with 3 of a kind of the same num
            #next step will be finding melds of same suit
            #final step will be going through melds of same suit to find a run

            #self.meld and be gone through by excluding "player" or "opponent" from the label
            #the rest of the label will be along the lines of "Run_123_Spades" or "3Kind_Ace" or "Run_456_Clubs"
            pass
        vals=[]
        suits=[]
        label=""
        if len(cards) < 3:
            return "invalid"
        #check if values are the same
        #then check if suits are same and values are in a row
        for c in cards:
            vals.append(c.getNum())
            suits.append(c.getSuit())
        sameKind=True
        for i in range(0,len(vals)-1):
            if not vals[i]==vals[i+1]:
                sameKind=False
        if sameKind:
            return "3Kind_"+vals[0]
        else: #if not same values then check if same suit
            sameSuit=True
            for i in range(0, len(suits)-1):
                if not suits[i] == suits[i+1]:
                    sameSuit=False
            if not sameSuit:
                return "invalid"
            else: #if same suit check if in a run
                vals.sort()
                label+=str(vals[0])
                for i in range(0, len(vals)-1):
                    if not vals[i+1] - vals[i] == 1:
                        return "invalid"
                    else:
                        label+=str(vals[i+1])
        return label+"_"+suits[0]

    def addToMeld(self, cards, label=""):
        if self.playerTurn:
            self.meld["player"+label] = cards
        else:
            self.meld["opponent"+label]=cards
 
#returns a list of lists, each inner list is a list of cards that make up at least 3 of a kind
    def checkFor3kind(self, hand)->list:
        if len(hand)<3:
            return []
        handDict=self.seperateHandByValue(hand)
        ans=[]
        for val, l in handDict.items():
            if len(l)>=3:
                ans.append(l)
        '''
        temp=hand
        temp.sort(key=self.sortByVal)
        pos3kind=[temp[0]]
        for i in range(1,len(temp)):
            if temp[i].getValue() == pos3kind[-1].getValue():
                pos3kind.append(temp[i])
            elif len(pos3kind)==3:
                return pos3kind
            else:
                pos3kind.clear()
                pos3kind.append(temp[i])
        #if this is reached then no 3 of a kinds were found
        return []
        '''
        return ans

#returns a list of lists, each inner list is a seperate run
    def checkForRun(self,hand):
        if len(hand)<3:
            return []
        handDict=self.seperateHandBySuit(hand)
        ans=[]
        for s, h in handDict.items():
            if len(h)<3:
                continue 
            else:
                if self.isRun(h):
                    ans.append(h)
        return ans

    ################# only ai will use this methods ##################
    def deckOrDiscard(self, hand):
        #will return "deck" if ai should draw from deck
        #returns "discard" if ai should draw from discard
        if len(self.discardPile)==0:
            return "deck"
        #should get discard pile top card and then see if a good move can be made
        #if good move cant be made then return "deck"

    def RummyTurn(self):
        #draw card from deck or discard pile
        choice=self.deckOrDiscard(self.opponentHand)
        #sort hand / look for runs/3Kind
        runs=self.checkForRun(self.opponentHand)
        kinds=self.checkFor3kind(self.opponentHand)
        print('AI found ', len(runs), ' runs and ', len(kinds), ' three of a kinds.')
        #meld cards if able to
        #discard (end turn)
        #how to pick a card to discard?
        self.discardCard(self.opponentHand[-1].getName())


    def GinTurn(self):
        #draw card from deck or discard pile
        #sort hand / calculate deadwood
        #decide if you should knock
        #discard (end turn)
        pass

    def saveData(self):
        #save data to text file??
        pass

    def __init__(self):
        #initializing gamestate will
            #create a deck
            #shuffle the deck
            #deal a card to playerHand and opponentHand one after another
            #set turn
            ############## theres def more attributes, add them when you get the sheet
        self.deck=Deck()
        self.deck.shuffleDeck()
        self.playerHand=[]
        self.opponentHand=[]
        for i in range(7):
            self.playerHand.append(self.deck.deal())
            self.opponentHand.append(self.deck.deal())
        self.playerTurn=True #player goes first? coin toss?
        self.discardPile=[]
        self.meld={}

