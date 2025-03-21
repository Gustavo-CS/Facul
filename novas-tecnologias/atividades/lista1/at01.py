import math

def desenhar_caixa(largura = 10, altura = 10):
    print("Caixa: ")
    for i in range(altura):
        print(' *' * largura)
    print()

def desenhar_oval(altura = 10):
    print("Oval: ")
    temp1=altura//2
    espacos=math.ceil((math.log(altura-temp1,1.15)+2))
    for i in range(1,temp1+1):
        num1 = math.ceil((math.log(i,1.15)+2))
        print(' ' * (math.floor((espacos - num1)/2)) +'*' * num1)
    for i in range(altura-temp1,0,-1):
        num2 = math.ceil((math.log(i,1.15)+2))
        print(' ' * (math.floor((espacos - num2)/2)) +'*' * num2)
    print()

def desenhar_seta(altura = 10):
    print("Seta: ")
    temp=altura//2
    temp2=altura-temp
    
    for i in range(1,temp+1):
        print(' ' * (temp2 - i) + '*' * i *2)
    for i in range(temp2):
        print(' ' * (temp2 - 1) + '*')
    print()

def desenhar_losango(altura = 10):
    print("Losango: ")
    temp=altura//2
    temp2=altura-temp
    
    for i in range(1,temp+1):
        print('  ' * (temp2 - i) + ' *' * i * 2)

    for i in range(temp,0,-1):
        print('  ' * (temp2 - i) + ' *' * i * 2)

    print()



desenhar_caixa()
desenhar_oval()
desenhar_seta()
desenhar_losango()