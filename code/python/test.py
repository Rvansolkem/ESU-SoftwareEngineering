from Card import Card
from Deck import Deck

d=Deck()
for i in range(52):
    print(d.deal().getName())
del d 
print('\nShuffled Deck: ')
d=Deck()
d.shuffleDeck()
for i in range(52):
    print(d.deal().getName())