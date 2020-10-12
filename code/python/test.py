from gameState import GameState


game=GameState()

def handToString(hand):
    s=""
    for c in hand:
        s+=c.getName()+"  "
    return s

def printHands():
    print('P hand: ', handToString(game.playerHand))
    print('O hand: ', handToString(game.opponentHand))

def printMiddleFrame():
    if len(game.discardPile)>0:
        print('top discard card: ', game.discardPile[-1].getName())
    else:
        print('top discard card: EMPTY')

def labelToString(label):
    pieces=label.split("_")
    owner=pieces[0]
    pieces=pieces[1:]
    kind=pieces[0]
    ans=owner+": "
    if kind=="Run":
        ans+=kind+" "+pieces[1]+" of "+pieces[2]
    if kind=="3Kind":
        ans+=kind + " of "+pieces[1]
    return ans

def printMeld():
    meld=game.meld 
    print('MELD: ')
    if len(meld)>0:
        meldItems=meld.getItems()
        for i,j in meldItems:
            print(labelToString(i))
    else:
        print('EMPTY')

def printState():
    printHands()
    printMiddleFrame()
    printMeld()



####below is for player movement

def turnDraw()->bool:
    choice=int(input('Draw from deck: enter 1\nDraw from discard: enter 2\n'))
    if choice==1:
        game.deckDeal()
        return True
    if choice==2:
        if len(game.discardPile)>0:
            game.discardDeal()
            return True
        else:
            return False
    return False


def turnMiddle()->bool:
    choice =int( input('to output game state press 1\nto sort hand press 2\nto select cards to meld press 3\n to view meld options press 4\nto discard press 5\n'))
    #output game state: 1
    if choice==1:
        printState()
        return False
    # sort hand : 2
    elif choice == 2:
        game.sortHand()
        return False
    # select cards to meld: 3
    elif choice==3:
        return False##############################################  Card now has an isSelected attribute
    # view runs and 3kinds : 4
    elif choice==4:
        runs=game.checkForRun(game.playerHand)
        for h in runs:
            print("run: ",handToString(h))
        kinds=game.checkFor3kind(game.playerHand)
        for h in kinds:
            print('3kind: ', handToString(h))        
        return False

    # go to discard phase: 5
    elif choice == 5:
        return True
    else:
        print('invalid choice, pick again')
        return False

def turnEnd():
    handDict={}
    for i in range(len(game.playerHand)):
        handDict[i]=game.playerHand[i-1].getName()
    keys=handDict.keys()
    cards=handDict.values()
    for i, c in handDict.items():
        print('i: ', i, '\t\tcardname: ', c)
    choice =int( input('please enter the index of the card you would like to discard'))
    if isinstance(choice, int) and choice>0 and choice <= len(game.playerHand) : 
        game.discardCard(handDict[choice].getName())
        return True
    else:
        print('invalid input')
        return False

def playerMove():
    didPlayerDraw=turnDraw()
    while(not didPlayerDraw):
        print('invalid choice, pick again.')
        didPlayerDraw=turnDraw()
    didPlayerFinish=turnMiddle()
    while(not didPlayerFinish):
        didPlayerFinish=turnMiddle()
    end=turnEnd()
    didDiscard=turnEnd()
    while( not didDiscard):
        didDiscard=turnEnd()
    print('\n\nNow beginning AI turn')

    


#game has now officially started
playerMove()
