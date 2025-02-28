

TO=[6,5,4,3,2,1]
TD=[]
TA=[]
TamO=6
TamD=0
TamA=0
if (TamO % 2 == 0):
    TA.append(TO.pop())
    TamA+=1
    TamO-=1
else:
    TD.append(TO.pop())
    TamD+=1
    TamO-=1
def torre_hanoi():
    if (TamD == 0 or TamA == 0):
        if(TamD == 0):
            TD.append(TO.pop())
            TamD+=1
            TamO-=1
        else:
            TA.append(TO.pop())
            TamA+=1
            TamO-=1
        torre_hanoi()
    else: 
        if(() or (TD[-1] < TA[-1] and TD[-1] < TO[-1])):
            if(TamD == 1):
                if(TO[-1] < TA[-1]):

            else:
                TA.append(TD.pop())
                TamA+=1
                TamD-=1
        elif(TD[-1] > TA[-1] and TD[-1] < TO[-1]):

torre_hanoi()