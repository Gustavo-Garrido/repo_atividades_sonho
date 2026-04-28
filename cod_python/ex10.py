from math import pi

R = int(input("Digite o raio da esfera: "))
h = int(input("Digite a altura do corte na esfera: "))

r = h*(2*R-h)     # r -> r²
Area = pi*r
Volume = (pi/3)*(h**2)*(3*R-h)


print(f"O volume da calota é {Volume:.3f}m³ ")
print(f"A área superficial da calota é {Area:.3f}m² ")