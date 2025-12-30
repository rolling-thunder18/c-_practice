#the string input is done here
x=input("enter ur string: ")
#question 1
if x.startswith("hi" or "HI"):
    print(True)
else:
    print(False)

#question 2
if x.endswith("end"):
    print(True)
else:
    print(False)

#question 3
y=x.lower()
print(y)