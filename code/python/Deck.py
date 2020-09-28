from Card import Card
import random

class Deck:
    def makeDeck(self):
        self.pile=[]
        cards=[x for x in range(14)[1:]]
        suits=['s','h','c','d']
        for s in suits:
            for c in cards:
                tempCard=Card(val=c,suit=s)
                self.pile.append(tempCard) 
    
    def shuffleDeck(self):
        random.shuffle(self.pile)
    
    #if deck is empty will return a card valled "InvalidCardName_InvalideCardSuit"
    def deal(self)->Card:
        if len(self.pile)>0:
            return self.pile.pop(0)
        else:
            emptyDeckCard=Card(val=-1, suit="noSuit")
            return emptyDeckCard

    def __init__(self):
        #self.pile=list of cards 
        #self.makeDeck() will instantiate a deck in order (ace-king)(s,h,c,d)
        #self.shuffle() will randomize a deck
        #self.deal() pop one off self.deck and return it
        self.makeDeck()