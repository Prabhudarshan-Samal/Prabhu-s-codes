import re
print("#calculator#")
flag = 0
run = True
def CalcMath():
    global run
    global flag
    equation = ""
    if flag == 0:
        equation = input("Enter equation")
    else:
        equation = input(str(flag))

    if equation == 'Quit':
        print("Goodbye! have a good day")
        run = False
    else:
        equation = re.sub('[a-zA-Z],.:()" "]','',equation)

        if flag == 0:
            flag = eval(equation)
        else:
            flag = eval(str(flag) + equation)


while run:
    CalcMath()