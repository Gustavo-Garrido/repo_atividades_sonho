import math

estimado = [(0,0), (1,1), (2,2), (3,3)]
real = [(0,0), (1,0.8), (2.2,2.1), (2.9,3.2)]
erros = []

for e, r in zip(estimado, real):

    x1, y1 = e
    x2, y2 = r
    
    dist = math.sqrt((x1 - x2)**2 + (y1 - y2)**2)

    erros.append(dist)
print(erros)