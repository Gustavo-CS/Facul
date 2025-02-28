def pred(num):
    return num-1

def suc(num):
    return num+1

n1=0
n2=0
n1 = int(input("digite o primeiro numero: "))
n2 = int(input("digite o segundo numero: "))

def sum():
    global n1
    global n2
    while(n1 > 0):
        n1=pred(n1)
        n2=suc(n2)
        sum()

sum()
print(n2)