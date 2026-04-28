from math import pi

r = int(input("Digite o raio da esfera: "))

Volume = (4/3)*pi*(r**3)
Area = 4 * pi * (r**2)

print(f"O volume da esfera é {Volume:.3f}m³ ")
print(f"A área superficial da esfera é {Area:.3f}m² ")