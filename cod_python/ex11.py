import math

# entrada de dados
h1 = float(input("Digite h1 (m): "))
h2 = float(input("Digite h2 (m): "))

v1 = 1  # m/s
g = 9.8

# cálculo
v2 = math.sqrt(v1**2 + 2*g*(h1 - h2))

print(f"A velocidade no segundo morro é: {v2:.2f} m/s")