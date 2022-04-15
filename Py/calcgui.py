import tkinter
from tkinter import RIGHT, LEFT, END, DISABLED, NORMAL
from tkinter import *
import math
import numpy as np

root = tkinter.Tk()
root.title('shvorculator')
root.geometry('430x490')
root.resizable()

color3 = "#224870"
color2 = "#2a4494"
color1 = "#4ea5d9"
display_font = "Arial, 30"
button_font = "Arial, 30"
#button displays and burritos

display_frame = tkinter.LabelFrame(root)
button_frame = tkinter.LabelFrame(root)
display_frame.pack(padx=2, pady=(5, 20))
button_frame.pack(padx=2, pady=5)

display = tkinter.Entry(display_frame, width=50, font=display_font, bg=color2, borderwidth=5, justify=RIGHT)
display.pack(padx=5, pady=5)


def butt_press(input):

    display.insert(END, input)
    if "." in display.get():
        decimal_button.config(state=DISABLED)

def operating(operator):
    global num1
    global operation

    operation = operator
    num1 = display.get()
    display.delete(0,END)

    add_button.config(state=DISABLED)
    subtract_button.config(state=DISABLED)
    multiply_button.config(state=DISABLED)
    divide_button.config(state=DISABLED)
    exponent_button.config(state=DISABLED)
    inverse_button.config(state=DISABLED)
    square_button.config(state=DISABLED)
    decimal_button.config(state=NORMAL)

def clear():
    display.delete(0, END)

def delete():
    display.delete(END,0)

def equal():
        if operation == 'add':
            value = float(num1) + float(display.get())
        elif operation == 'subtract':
            value = float(num1) - float(display.get())
        elif operation == 'multiply':
            value = float(num1) * float(display.get())
        elif operation == 'divide':
            if display.get() == "0":
                value = "ERROR"
            else:
                value = float(num1) / float(display.get())
        elif operation == 'exponent':
            value = float(num1) ** float(display.get())

        display.delete(0, END)
        display.insert(0, value)

        # Return buttons to normal states
        enable_buttons()

def inverse():
    if display.get() == '0':
        value = 'ERROR'
    else:
        value = 1 / float(display.get())

    display.delete(0, END)
    display.insert(0, value)


def square():
    value = float(display.get()) ** 2

    display.delete(0, END)
    display.insert(0, value)


def negate():
    value = -1 * float(display.get())

    display.delete(0, END)
    display.insert(0, value)

def enable_buttons():
    decimal_button.config(state=NORMAL)
    add_button.config(state=NORMAL)
    subtract_button.config(state=NORMAL)
    multiply_button.config(state=NORMAL)
    divide_button.config(state=NORMAL)
    exponent_button.config(state=NORMAL)
    inverse_button.config(state=NORMAL)
    square_button.config(state=NORMAL)

def button_equal():
    global calc_operator
    temp_op = str(eval(calc_operator))
    display.insert(temp_op)
    calc_operator = temp_op

#BUTTONS

clear_button = tkinter.Button(button_frame, text="C", font=button_font, bg=color3, command=clear)
delete_button = tkinter.Button(button_frame, text="<--", font=button_font, bg=color3, command=delete)
lear_button = tkinter.Button(button_frame, text="Clear", font=button_font, bg=color3, command=clear)
quit_button = tkinter.Button(button_frame, text="Quit", font=button_font, bg=color3, command=root.destroy)

inverse_button = tkinter.Button(button_frame, text='1/x', font=button_font, bg=color2, command=inverse)
square_button = tkinter.Button(button_frame, text='x^2', font=button_font, bg=color2, command=square)
exponent_button = tkinter.Button(button_frame, text='x^n', font=button_font, bg=color2,
                                 command=lambda: operating('exponent'))
divide_button = tkinter.Button(button_frame, text=' ÷ ', font=button_font, bg=color2,
                               command=lambda: operating('divide'))
multiply_button = tkinter.Button(button_frame, text='×', font=button_font, bg=color2,
                                 command=lambda: operating('multiply'))
subtract_button = tkinter.Button(button_frame, text='-', font=button_font, bg=color2,
                                 command=lambda: operating('subtract'))
add_button = tkinter.Button(button_frame, text='+', font=button_font, bg=color2, command=lambda: operating('add'))
equal_button = tkinter.Button(button_frame, text='=', font=button_font, bg=color3, command=equal)
decimal_button = tkinter.Button(button_frame, text='.', font=button_font, bg='black', fg='white',
                                command=lambda: butt_press("."))
negate_button = tkinter.Button(button_frame, text='+/-', font=button_font, bg='black', fg='white', command=negate)

nine_button = tkinter.Button(button_frame, text='9', font=button_font, bg='black', fg='white',
                                 command=lambda: butt_press(9))
eight_button = tkinter.Button(button_frame, text='8', font=button_font, bg='black', fg='white',
                              command=lambda: butt_press(8))
seven_button = tkinter.Button(button_frame, text='7', font=button_font, bg='black', fg='white',
                              command=lambda: butt_press(7))
six_button = tkinter.Button(button_frame, text='6', font=button_font, bg='black', fg='white',
                            command=lambda: butt_press(6))
five_button = tkinter.Button(button_frame, text='5', font=button_font, bg='black', fg='white',
                             command=lambda: butt_press(5))
four_button = tkinter.Button(button_frame, text='4', font=button_font, bg='black', fg='white',
                             command=lambda: butt_press(4))
three_button = tkinter.Button(button_frame, text='3', font=button_font, bg='black', fg='white',
                              command=lambda: butt_press(3))
two_button = tkinter.Button(button_frame, text='2', font=button_font, bg='black', fg='white',
                            command=lambda: butt_press(2))
one_button = tkinter.Button(button_frame, text='1', font=button_font, bg='black', fg='white',
                            command=lambda: butt_press(1))
zero_button = tkinter.Button(button_frame, text='0', font=button_font, bg='black', fg='white',
                             command=lambda: butt_press(0))
#griddin

clear_button.grid(row=0, column=0, columnspan=2, pady=1, sticky="WE")
quit_button.grid(row=0, column=2, columnspan=2, pady=1, sticky="WE")
# Second row
inverse_button.grid(row=1, column=0, pady=1, sticky="WE")
square_button.grid(row=1, column=1, pady=1, sticky="WE")
exponent_button.grid(row=1, column=2, pady=1, sticky="WE")
divide_button.grid(row=1, column=3, pady=1, sticky="WE")
# Third row (Add padding to create the size of the columns)
seven_button.grid(row=2, column=0, pady=1, sticky="WE", ipadx=20)
eight_button.grid(row=2, column=1, pady=1, sticky="WE", ipadx=20)
nine_button.grid(row=2, column=2, pady=1, sticky="WE", ipadx=20)
multiply_button.grid(row=2, column=3, pady=1, sticky="WE", ipadx=20)
# Fourth row
four_button.grid(row=3, column=0, pady=1, sticky="WE")
five_button.grid(row=3, column=1, pady=1, sticky="WE")
six_button.grid(row=3, column=2, pady=1, sticky="WE")
subtract_button.grid(row=3, column=3, pady=1, sticky="WE")
# Fifth row
one_button.grid(row=4, column=0, pady=1, sticky="WE")
two_button.grid(row=4, column=1, pady=1, sticky="WE")
three_button.grid(row=4, column=2, pady=1, sticky="WE")
add_button.grid(row=4, column=3, pady=1, sticky="WE")
# Sixth row
negate_button.grid(row=5, column=0, pady=1, sticky="NSWE")
zero_button.grid(row=5, column=1, pady=1, sticky="NSWE")
decimal_button.grid(row=5, column=2, pady=1, sticky="NSWE")
equal_button.grid(row=5, column=3, pady=1, sticky="NSWE")

root.mainloop()
