#O se impar meio
#O se par ponta
#D se impar direita
#D se par esquerda
#A se impar meio
#A se par origem
#se igual pode ir pra diferente
#se diferente so pra igual

tam=9
TO=[9,8,7,6,5,4,3,2,1]
TD=[]
TA=[]

#TamO=6
#TamD=0
#TamA=0
#if (TamO % 2 == 0):
#    TA.append(TO.pop())
#else:
#    TD.append(TO.pop())
#numMov = 1

numMov=0

#def addMove():
#	global numMov
#	numMov += 1
#	torre_hanoi()

def torre_hanoi():
    global numMov
    if(len(TD) == tam):
    	a=0
    elif (len(TO) > 0 and (len(TO) % 2 == 0 and (len(TA) == 0 or (((TO[-1] % 2 == 0 and TA[-1] % 2 == 1) or (TO[-1] % 2 == 1 and TA[-1] % 2 == 0)) and TO[-1] < TA[-1] )))):
    	print(f"movido o {TO[-1]} da TO para a TA")
    	TA.append(TO.pop())
    	#addMove()
    	numMov += 1
    	torre_hanoi()

    elif (len(TO) > 0 and (len(TO) % 2 == 1 and (len(TD) == 0 or (((TO[-1] % 2 == 0 and TD[-1] % 2 == 1) or (TO[-1] % 2 == 1 and TD[-1] % 2 == 0)) and TO[-1] < TD[-1] )))):
    	print(f"movido o {TO[-1]} da TO para a TD")
    	TD.append(TO.pop())
    	#addMove()
    	numMov += 1
    	torre_hanoi()
    	
    elif (len(TD) > 0 and (len(TD) % 2 == 0 and (len(TO) == 0 or (((TD[-1] % 2 == 0 and TO[-1] % 2 == 1) or (TD[-1] % 2 == 1 and TO[-1] % 2 == 0)) and TD[-1] < TO[-1] ))) and (tam % 2 == 1 or TD[-1] != 1 or len(TO) > 0)):
    	print(f"movido o {TD[-1]} da TD para a TO")
    	TO.append(TD.pop())
    	#addMove()
    	numMov += 1
    	torre_hanoi()
    	
    elif (len(TD) > 0 and (len(TD) % 2 == 1 and (len(TA) == 0 or (((TD[-1] % 2 == 0 and TA[-1] % 2 == 1) or (TD[-1] % 2 == 1 and TA[-1] % 2 == 0)) and TD[-1] < TA[-1] )))):
    	print(f"movido o {TD[-1]} da TD para a TA")
    	TA.append(TD.pop())
    	#addMove()
    	numMov += 1
    	torre_hanoi()
    	
    elif (len(TA) > 0 and (len(TA) % 2 == 0 and (len(TO) == 0 or (((TA[-1] % 2 == 0 and TO[-1] % 2 == 1) or (TA[-1] % 2 == 1 and TO[-1] % 2 == 0)) and TA[-1] < TO[-1] )))):
    	print(f"movido o {TA[-1]} da TA para a TO")
    	TO.append(TA.pop())
    	#addMove()
    	numMov += 1
    	torre_hanoi()
    	
    elif (len(TA) > 0 and (len(TA) % 2 == 1 and (len(TD) == 0 or (((TA[-1] % 2 == 0 and TD[-1] % 2 == 1) or (TA[-1] % 2 == 1 and TD[-1] % 2 == 0)) and TA[-1] < TD[-1] )))):
    	print(f"movido o {TA[-1]} da TA para a TD")
    	TD.append(TA.pop())
    	#addMove()
    	numMov += 1
    	torre_hanoi()

torre_hanoi()
print("   ", numMov)
