'''
NOW UNNEEDED, IT SERVED ITS PURPOSE BUT IM ATTACHED SO HERE IT SHAL REMAIN

import os
from pathlib import Path 
from PIL import Image

directory="/home/ubuntu/Downloads/school/software engineering/code/python/images/PNG"
finalDir="/home/ubuntu/Downloads/school/software engineering/code/python/images"

for filename in os.listdir(directory):
    if filename.endswith(".png"):
        #save file as image
        img=Image.open(r''+directory+'/'+filename)
        #parse name into value and suit
        temp=filename.split('.')
        name=temp[0]
        value=name[:-1]
        suit=name[-1]
        
        #make new filename that is same as cardname
        values={
            "A":"Ace",
            "2":"Two",
            "3":"Three",
            '4':"Four",
            '5':"Five",
            '6':"Six",
            '7':"Seven",
            '8':"Eight",
            '9':"Nine",
            '10':"Ten",
            'J':"Jack",
            'Q':"Queen",
            'K':"King"
        }
        suits={
            "H":"Hearts",
            "S":"Spades",
            "D":"Diamonds",
            "C":"Clubs"
        }
        if not (value in values):
            continue
        if not (suit in suits):
            continue
        newFileName=values[value]+"_"+suits[suit]
        print("new file name made: ", newFileName)
        #resave into finalDir 
        img.save(r''+finalDir+'/'+newFileName+".png")
        

'''