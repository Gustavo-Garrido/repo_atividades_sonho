from math import pi, sin

v0 = float(input("Digite o valor de V0: "))
rad = float(input("Digite o valor do ângulo (radianos): "))
g = 9.81

R = (v0**2 * sin(2*rad))/(g)

print(f"O alcance do projétil é {R:.2f}m")