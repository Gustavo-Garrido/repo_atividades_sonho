import math

raio = 2
angulos = [
    math.radians(grau)
    for grau in range(0, 361, 10)
]

trajetoria = [(raio * math.cos(theta), raio * math.sin(theta)) for theta in angulos]

print("5 primeiros pontos:\n")

for ponto in trajetoria[:5]:
    print(ponto)

print("\n5 últimos pontos:\n")

for ponto in trajetoria[-5:]:
    print(ponto)