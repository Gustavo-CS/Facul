import math

def distancia(x1: int, y1: int, x2: int, y2: int):
    result = math.sqrt((pow((x1 - x2), 2) +  pow((y1 - y2), 2)))
    print(f"a distancia entre {x1}, {y1} e {x2}, {y2} é {result:.2f}")


distancia(1,2,4,6)
#5
distancia(-5,2,3,-6)
