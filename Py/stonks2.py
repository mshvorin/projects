import yfinance as yf
import time
import matplotlib.pyplot as plt
import datetime
import tkinter
from tkinter import *

#CREATING THE WINDOW

root = tkinter.Tk()
root.title('Stock Evaluator')
root.geometry('500x500')
root.resizable()

#COLORS AND FONTS

color3 = "#33FFBD" 
color2 = "#75FF33"
color1 = "#F133FF"
display_font = "Arial, 30"
button_font = "Arial, 30"

#FUNCTIONS

def get_info():
	stock_info = yf.Ticker(display.get()).info
	display.delete(0,END)

def output_52week():
	stock_info = yf.Ticker(display.get()).info
	market_price = stock_info['fiftyTwoWeekHigh']
	display.delete(0,END)
	display.insert(0, market_price)
	
#FRAME

display_frame = tkinter.LabelFrame(root)
button_frame = tkinter.LabelFrame(root)
display_frame.pack(padx=2, pady=(5, 20))
button_frame.pack(padx=2, pady=5)
display = tkinter.Entry(display_frame, width=10, font=display_font, bg=color2, borderwidth=5, justify=RIGHT)
display.pack(padx=5, pady=5)

#52weekhigh

fiftyweekhigh_button = tkinter.Button(button_frame, text="Get High", font=button_font, bg=color3, command=output_52week)
fiftyweekhigh_button.grid(row=1, column=0, columnspan=2, pady=1, sticky="WE")

#END

root.mainloop()
