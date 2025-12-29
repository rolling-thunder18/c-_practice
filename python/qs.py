x=10
name="hii"
y=5

print(type(name))
print(x+y)
print(x-y)

print(x*y)
print(int(x/y))
print(x//y)
print(x**y)
if x>y:
    print("lol")
else:
    print("krezi")
print()
print()
print()




def fact(z):
    total=1
    for j in range(1,z+1):
      
        total*=j
    return total
    
def comb(x,y):
    total=1
    total=(fact(x))//(fact(y)*fact(x-y))
    return total
print(comb(x,y))

print()
n=10
for i in range(n,0,-1):
    print(i)
print()
max(x,y)
print(str(max(x,y)))

print()
print()
z=12345
print(int(str(z)[::-1]))
print(len(str(z)))
rev=0
sum=0
while z>0:
      x=z%10
      sum+=x
      rev=10*rev+x
      z=z//10
print(rev)
print(sum)
print()
print()
print()

def prime(x):
    if x<2:
        print("invalid number")
        return
    for i in range(2,int(x**0.5)+1):
        if x%(i)==0:
            
            return False
            
    
    return True
print()
print()


for i in range(0,101):
    if prime(i)==True:
        print(i)
    
print(len([1,23,4,2,3,2,2,1,3,1,1,]))
print(len("10"))
q="H,eL,.l,..o "
print(q.lower())
print(q.upper())
print(q)
print(q.strip())

print(q.split("."))


s=[1,4,2,6,3,23,12]

print(s)
s.append([2332,89])
print(s)
t="  my\nlol"
print(len(t.strip()))


