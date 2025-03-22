def crip(num: int):
    list_crip=[]
    if num < 1000 or num > 9999:
        print("digite um número de 4 digitos")
    for i in range (4-1, -1, -1):
        temp=int(num/(10**(i)))
        list_crip.append(temp+7)
        num-=temp*(10**(i))
    print(list_crip)

crip(1234)