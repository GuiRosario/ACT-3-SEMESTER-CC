import math
a = int(input("Digite a:"))
b = int(input("Digite b:"))
c = int(input("Digite c:"))

delta = (b*b) - (4*a*c)
if delta < 0:
    print("Nao possui raizes reais!")
else:
    delta = math.sqrt(delta)
    x1 = (-(b) + delta)/(2*a)
    x2 = (-(b) - delta)/(2*a)
    print("X1:",x1)
    print("X2:",x2)