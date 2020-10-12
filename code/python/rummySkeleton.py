from Card import Card 
from Deck import Deck 
from tkinter import * 
from tkinter.ttk import *
from PIL import ImageTk,Image
def makeCanvas(root, w=0, h=0, x=0, y=0, place=False, grid=False):
    #if place is true then use .place not .grid or .pack (.pack is the default)
        #if place then use x and y for placement
    #use w and h for size
    c=Canvas(root, width=w, height=h)
    if grid:
        c.grid(y,x)
    return c

def makeFrame(root, w=0, h=0, x=0, y=0, place=False, grid=False):

    f=Frame(root, width=w, height=h)
    if grid:
        f.grid(y,x)
    return f




def checkMove(move):
    #check game state in order to make sure all preconditions are met 
    #for some event to occur
    pass



root=Tk() 

windowHeight = root.winfo_screenheight() 
windowWidth = root.winfo_screenwidth() 
handHeight=int(windowHeight/6)
deckHeight = int(windowHeight / 3)
deckWidth=int(windowWidth / 5)
card_x=int(windowWidth/8)
card_y=int(handHeight*4/5)


################# main game components ####################
oppponentHandCanvas=makeCanvas(root, grid=True, w=windowWidth, h=handHeight, x=0,y=0)#need x and y as well?
middleFrame=makeFrame(root, grid=True, w=windowWidth, h=int(windowHeight/2), x=0,y=1)
playerHand=makeCanvas(root, grid=True, w=windowWidth, h=handHeight, x=0, y=2)
bottomFrame=makeFrame(root, grid=True, w=windowWidth, h=handHeight, x=0, y=4)


############################## opponentHand Components #######################

############################## middleFrame Components #######################
deckCanvas=makeCanvas(middleFrame, w=deckWidth, h=deckHeight, grid=True, x=0, y=0)
discardCanvas=makeCanvas(middleFrame, w=deckWidth, h=deckHeight, grid=True, x=1,y=0)
meldFrame=makeFrame(middleFrame, h=int(windowHeight/2),w=int(windowWidth/2), grid=True, x=2, y=0)

########## deck canvas components ##########


############################## playerHand components ######################

############################## bottomFrame components #######################
#if gin include knock and dont include meld
#if not gin includ emeld dont include knock

#need saveBtn, meldBtn, quitBtn, discardBtn, ??

