# Recursive Python function to solve the tower of hanoi
mov=0

def TowerOfHanoi(n , source, destination, auxiliary):
    global mov
    if n==1:
        print ("Move disk 1 from source",source,"to destination",destination)
        mov+=1
        return
    TowerOfHanoi(n-1, source, auxiliary, destination)
    print ("Move disk",n,"from source",source,"to destination",destination)
    mov+=1
    TowerOfHanoi(n-1, auxiliary, destination, source)
        
# Driver code
n = 15
TowerOfHanoi(n,'A','B','C') 
print("num mov ", mov)
# A, C, B are the name of rods
