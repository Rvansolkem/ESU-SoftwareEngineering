from Card import Card 
from Deck import Deck 
from tkinter import * 
from tkinter.ttk import *
from PIL import ImageTk,Image
#to make image that can be added to canvas
#img= ImageTk.PhotoImage(Image.open(path to image))
    
########################    setup   ######################

# main window object named root 
root = Tk() 

################### variables for GUI widgets ##########################
windowHeight = root.winfo_screenheight() 
windowWidth = root.winfo_screenwidth() 
handHeight=int(windowHeight/6)
deckHeight = int(windowHeight / 3)
deckWidth=int(windowWidth / 5)
card_x=int(windowWidth/8)
card_y=int(handHeight*4/5)

# giving title to the main window 
root.title("(Gin) Rummy card game") 


aiHandCanvas=Canvas(root, width= windowWidth, height= handHeight)
aiHandCanvas.place()#what are the parameters for here?

middleFrame=Frame(root, width=windowWidth, height=int(windowHeight/2))
middleFrame.place()#what are paraemteres
################ methods for handling events ######################
def create_frame(window, w=100, h=100):#add other parameters for specifics
    frame=Frame(window, width=w, height=h)
    #frame.config(bg="black")
    frame.pack()
    return frame
def create_canvas(window, w=100, h=100):
    canvas=Canvas(window, width=w, height=h)
    #canvas.config(bg="black")
    canvas.pack()
    return canvas
def add_img(canvas, filePath="python/images/green_back.png", x=20,y=20):
    img = ImageTk.PhotoImage(Image.open(filePath).resize((x,y)))
    canvas.create_image(0,0, image=img)  

#aiHandCanvas.pack()
middleFrame=create_frame(root, w=windowWidth, h=int(windowHeight/2))
#middleFrame.pack()
pileCanvas=create_canvas(middleFrame, w=int(windowWidth/4), h=int(windowHeight/2))

add_img(aiHandCanvas, x=card_x, y=card_y)




#tell app to run
root.mainloop() 
