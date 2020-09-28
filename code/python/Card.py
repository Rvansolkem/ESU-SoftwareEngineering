class Card:
    def getSuit(self)->str:
        return self.suit
    def getValue(self)->str:
        return self.value
    def getName(self)->str:
        return self.getValue()+"_"+self.getSuit()
    def setSuit(self, s:str):
        if len(s)==1:
            suits={
                'c':"Clubs", 
                'h':"Hearts", 
                's':"Spades",
                'd':"Diamonds",
                'C':"Clubs",
                "H":"Hearts",
                "S":"Spades",
                "D":"Diamonds"
            }
            self.suit=suits.get(s, "InvalidCardSuit")
        else:
            #add error checking (suit should be in form Spades, Hearts...)
            self.suit=s
    
    def setValue(self, val):
        if isinstance(val, int):
            vals={
                1:"Ace", 
                2:"Two", 
                3:"Three", 
                4:"Four", 
                5:"Five", 
                6:"Six", 
                7:"Seven", 
                8:"Eight", 
                9:"Nine", 
                10:"Ten", 
                11:"Jack", 
                12:"Queen", 
                13:"King",
                14:"Ace"
            }
            self.value=vals.get(val, "InvalidCardValue")
        elif len(val)==1:
            #convert to full string
            pass
        elif isinstance(val, str):
            #add error checking
            self.value=val
        
    def __init__(self, val='', suit=''):
        self.setValue(val)
        self.setSuit(suit)
