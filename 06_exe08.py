x0 = 0
v0 = 1.0
a = 0.5
dt = 0.1
tempo_total = 2.0

tempos = [
    t * dt
    for t in range(int(tempo_total / dt) + 1)
]

posicoes = [
    x0 + v0 * t + (a * t**2) / 2
    for t in tempos
]

print("5 primeiras posições:\n")

for pos in posicoes[:5]:
    print(round(pos, 3))