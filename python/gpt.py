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
print(y[4])

#question 9 
# hmmm thats a tough one lemme try

def lol(x):
    y=x.split()
    y.sort()
    result=" ".join(y)
    return result

print(lol(x))

#question 10- wait i did that right