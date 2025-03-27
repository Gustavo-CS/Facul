def crip(num: int):
    list_crip=[]
    if num < 1000 or num > 9999:
        print("digite um número de 4 digitos")
    for i in range (4-1, -1, -1):
        temp=int(num/(10**(i)))+7
        list_crip.append(temp%10)
        num-=(temp-7)*(10**(i))
    # print(list_crip)
    for i in range(2):
        temp=list_crip[i]
        list_crip[i]=list_crip[i+2]
        list_crip[i+2]=temp
    # print(list_crip)
    for i in range(4, 0, -1):
        num+=list_crip[-i]*10**(i-1)
    print(f"{num:0{4}}")
    
def decrip(num: int):
    list_decrip=[]
    if num < 1000 or num > 9999:
        print("digite um número de 4 digitos")
    
    for i in range (4-1, -1, -1):
        temp=int(num/(10**(i)))
        list_decrip.append(temp%10)
        num-=temp*(10**(i))
    # print(list_decrip)
    for i in range(2):
        temp=list_decrip[i]
        list_decrip[i]=list_decrip[i+2]
        list_decrip[i+2]=temp
    # print(list_decrip)
    for i in range(4, 0, -1):
        temp=(list_decrip[-i]-7)%10
        num+=temp*10**(i-1)
    print(f"{num:0{4}}")

crip(1254)
decrip(2189)