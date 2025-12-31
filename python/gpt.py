#the string input is done here
x=input("enter ur string: ")
#question 1
if x.startswith("hi"):
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

#question 4
y=x.strip()
print(y)

#question 5
y=x.replace(" ","-")
print(y)

#question 6
y=x
count=0

#for loop method 
for i in y:
    if i=="a":
        count+=1

print(f"number of a is {count} times in the sentence")
#the method u meant me to do is it find?


#question 7
y=x.find("py")
print(y)
#well here i found out that .find() registers the last found element provided so every instance int stored

#question 8
y=x.split()
print(y[0])

#question 9 
# hmmm thats a tough one lemme try

def lol(x):
    y=x.split()
    y.sort()
    result=" ".join(y)
    return result

print(lol(x))

#question 10- wait i did that right

#question 11 the normal count way i did that already

#question 12
print()

y=x.replace(" ","_")

print(y)
if y[0]+y[1]=="hi":
    print(f"the sentence starts with hi")
print(y[3])

#question 13

y=x.replace(" ","_")
if y[-3]+y[-2]+y[-1]=="end":
    print("the string ends with end")
print(y[-1])
#weird method but i couldnt think of anything else and using manual method to do .replace hell nah 

#question 14

y=x
print(y[::-1])
#i know this method i dont know like how to write it in python 
print(y)
#question 15
#its the same as the previous on ejust check if original== reversed but the thing is i dont even know how to reverse manually so idk


#question 16

key="py"
y=x
for i in y:
    if key in i:
        print(i)
    else:
        print(False)

