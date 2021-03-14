from tkinter import *
#from PIL import ImageTk,Image
import pymysql
from tkinter import messagebox
from Add import *
from Delete import *
from View import *
from Issue import *
from Return import *
# Add your own database name and password here to reflect in the code
mypass = "Prabhu@2000"
mydatabase="db"

con = pymysql.connect(host="localhost",user="root",password=mypass,database=mydatabase)
cur = con.cursor()

root = Tk()
root.title("Library Management System")
root.minsize(width=400,height=400)
root.geometry("600x500")
root.config(bg='cyan')
# Take n greater than 0.25 and less than 5
same=True
n=0.25

# Adding a background image
#background_image =Image.open("lib2.jpg")
#[imageSizeWidth, imageSizeHeight] = background_image.size

#newImageSizeWidth = int(imageSizeWidth*n)
#if same:
   # newImageSizeHeight = int(imageSizeHeight*n) 
#else:
   # newImageSizeHeight = int(imageSizeHeight/n) 
    
#background_image = background_image.resize((newImageSizeWidth,newImageSizeHeight),Image.ANTIALIAS)
#img = ImageTk.PhotoImage(background_image)

#Canvas1 = Canvas(root)

#Canvas1.create_image(400,440,image = img)      
#Canvas1.config(bg="white",width = newImageSizeWidth, height = newImageSizeHeight)
#Canvas1.pack(expand=True,fill=BOTH)

headingFrame1 = Frame(root,bg="red",bd=5)
headingFrame1.place(relx=0.2,rely=0.1,relwidth=0.6,relheight=0.16)

headingLabel = Label(headingFrame1, text="Book-Worms' Hub", bg='black', fg='green', font=('Comicssansms',15))
headingLabel.place(relx=0,rely=0, relwidth=1, relheight=1)

btn1 = Button(root,text="Add Book", bg='white', fg='black', command=addBook)
btn1.place(relx=0.28,rely=0.4, relwidth=0.45,relheight=0.1)
    
btn2 = Button(root,text="Delete Book", bg='white', fg='black', command=delete)
btn2.place(relx=0.28,rely=0.5, relwidth=0.45,relheight=0.1)
    
btn3 = Button(root,text="View Books", bg='white', fg='black', command=View)
btn3.place(relx=0.28,rely=0.6, relwidth=0.45,relheight=0.1)
    
btn4 = Button(root,text="Issue Book", bg='white', fg='black', command = issueBook)
btn4.place(relx=0.28,rely=0.7, relwidth=0.45,relheight=0.1)
    
btn5 = Button(root,text="Return Book", bg='white', fg='black', command = returnBook)
btn5.place(relx=0.28,rely=0.8, relwidth=0.45,relheight=0.1)

root.mainloop()
