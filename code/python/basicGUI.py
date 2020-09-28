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
card_x=int(windowWidth/8)
card_y=int(handHeight*4/5)
  
# giving title to the main window 
root.title("(Gin) Rummy card game") 
aiHandCanvas=Canvas(root, width=windowWidth, height= handHeight)
#aiHandCanvas.pack()
middleFrame=Frame(root, width=windowWidth, height=int(windowHeight/2))
#middleFrame.pack()
pileCanvas=Canvas(middleFrame, width=int(windowWidth/4), height=int(windowHeight/2))

img = ImageTk.PhotoImage(Image.open("python/images/green_back.png").resize((card_x, card_y)))
aiHandCanvas.create_image(0,0, image=img)  
aiHandCanvas.pack()


################ methods for handling events ######################



#tell app to run
root.mainloop() 
