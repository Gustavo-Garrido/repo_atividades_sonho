alpha = int(input("Digite o valor do ângulo Alpha: "))
teta = int(input("Digite o valor do ângulo Teta: "))
Beta = int(input("Digite o valor do ângulo Beta: "))

c = (alpha+teta+Beta) == 180
a = (alpha != 0)
b = (Beta != 0)
t = (teta != 0)
d = (a and b and c and t == True)

print(f"Esses ângulos podem formar um triângulo? R: {d}")
