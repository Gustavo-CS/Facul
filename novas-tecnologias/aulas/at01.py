def funcao():
    tam = 0
    aux = 1
    try:
        num = int(input("digite um numero: "))
        # if num < 10000 or num > 99999:
        #     while (True):
        #         print("digite um número de 5 digitos")
        #         num = int(input("digite um numero: "))
        #         if not (num < 10000 or num > 99999):
        #             break
        while(aux!=0):
            tam+=1
            aux=num%10**(tam-1)
        for i in range (tam-1, -1, -1):
            temp=int(num/(10**(i)))
            print(temp, end="   ")
            num-=temp*(10**(i))
    except:
        print("erro recomece")
        funcao() 

funcao()