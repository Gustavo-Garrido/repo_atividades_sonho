distancia = [1.5, 2.0, 0.8, 3.2, 1.1]
menos = 0
for dist in distancia: 
    if dist < 1:
        menos += 1

print(f"Menor distância: {min(distancia)}")
print(f"Maior distância: {max(distancia)}")
print(f"Qtd de distância menor que 1m: {menos}")