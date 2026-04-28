num = int(input("Digite um número de 3 digitos: "))

c = num // 100
resto = num % 100
d= resto // 10
u= resto % 10

print(f"A centena de {num} é: {c}")
print(f"A centena de {num} é: {d}")
print(f"A centena de {num} é: {u}")