import tkinter
from tkinter import *
from tkinter import ttk

#CREATING THE WINDOW
root = tkinter.Tk()
root.title('Poop Counter')
root.geometry('700x600')
root.resizable()

timeofpoops = []
timebetweenpoops = 0
ratedpoops = []

#COLORS AND FONTS
color3 = "#33FFBD"
color2 = "#75FF33"
color1 = "#F133FF"
display_font = "Arial, 30"
button_font = "Arial, 30"

#FUNCTIONS

def save_poop():
	timeofpoops.append(display.get())
	display.delete(0, END)
	if avgptime_button['state'] == DISABLED and len(timeofpoops) >= 2:
		avgptime_button['state'] = NORMAL

def average_time_between_poops():
	if len(timeofpoops) > 0:
		timebetweenpoops = 0
		for i in range(len(timeofpoops) - 1):
			if (timeofpoops[i])[0] == "0":
				timebetweenpoops = timebetweenpoops + (int((timeofpoops[i+1])[0:2]) * 60 + int((timeofpoops[i+1])[3:5]) - ((int((timeofpoops[i])[1:2]) * 60) + int((timeofpoops[i])[3:5])))
			elif (timeofpoops[i+1])[0] == "0":
				timebetweenpoops = timebetweenpoops + (int((timeofpoops[i+1])[1:2]) * 60 + int((timeofpoops[i+1])[3:5]) - ((int((timeofpoops[i])[0:2]) * 60) + int((timeofpoops[i])[3:5])))
			elif (timeofpoops[i])[0] == "0" and (timeofpoops[i+1])[0] == "0":
				timebetweenpoops = timebetweenpoops + (int((timeofpoops[i+1])[1:2]) * 60 + int((timeofpoops[i+1])[3:5]) - ((int((timeofpoops[i])[1:2]) * 60) + int((timeofpoops[i])[3:5])))
			else:
				timebetweenpoops = timebetweenpoops + (int((timeofpoops[i+1])[0:2]) * 60 + int((timeofpoops[i+1])[3:5]) - ((int((timeofpoops[i])[0:2]) * 60) + int((timeofpoops[i])[3:5])))
		timebetweenpoops = timebetweenpoops / (len(timeofpoops) - 1)
		display.insert(0, str(timebetweenpoops) + " minutes")
		
		
def reset():
	timeofpoops.clear()
	display.delete(0, END)
	avgptime_button['state'] = DISABLED


#FRAMES
display_frame = tkinter.LabelFrame(root)
button_frame = tkinter.LabelFrame(root)
display_frame.pack(padx=2, pady=(5, 20))
button_frame.pack(padx=2, pady=5)
display = tkinter.Entry(display_frame, width=15, font=display_font, bg=color2, borderwidth=5, justify=RIGHT)
display.pack(padx=10, pady=10)

#BUTTONS

pooptimestorebutton = tkinter.Button(button_frame, text="Store Poop time in 24:00 format", font=button_font, bg=color3, command=save_poop)
pooptimestorebutton.grid(row=0, column=0, columnspan=2, pady=1, sticky="WE")

avgptime_button = tkinter.Button(button_frame, text="Get your average poop time", font=button_font, bg=color3,  state = DISABLED, command=average_time_between_poops)
avgptime_button.grid(row=1, column=0, columnspan=2, pady=1, sticky="WE")

reset_button = tkinter.Button(button_frame, text="Reset poops", font=button_font, bg=color3, command=reset)
reset_button.grid(row=2, column=0, columnspan=2, pady=1, sticky="WE")

#END
root.mainloop()
