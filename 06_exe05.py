forcas = [
    ("FL", 120),
    ("FR", 110),
    ("RL", 130),
    ("RR", 115)
]

soma = 0

maior_forca = 0
perna_maior = ""

for perna, valor in forcas:

    soma += valor

    if valor > maior_forca:
        maior_forca = valor
        perna_maior = perna

media = soma / len(forcas)

print(f"Força média: {media}")
print(f"Perna com maior força: {perna_maior}")
print(f"Valor: {maior_forca}")