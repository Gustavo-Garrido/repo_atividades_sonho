leituras = [
("Lidar", 2.3),
("Ultrassom", 1.8),
("IR", 0.9)
]
menor = 99999
sensor_menor = 0
for sensor in leituras:
    print(f"\nSensor: {sensor[0]}, Distância: {sensor[1]}m")
    if(sensor[1] < menor):
        menor = sensor[1]
        sensor_menor = sensor[0]

print(f"\nA menor leitura foi {menor}m do sensor {sensor_menor}")