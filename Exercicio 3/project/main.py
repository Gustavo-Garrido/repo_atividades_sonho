from school import grades

p1 = float(input("Digite a nota da P1: "))
p2 = float(input("Digite a nota da P2: "))

try:
    media = grades.calculate_average(p1, p2)
    print(f"A média do aluno foi {media}")

except ValueError as erro:
    print(f"Erro: {erro}")
    
a = float(input("Digite o numerador: "))
b = float(input("Digite o denominador: "))
div = grades.divide_numbers(a,b)
print(f"A divisão é {div}")