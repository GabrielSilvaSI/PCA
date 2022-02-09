# 2) Ler uma temperatura em Celsius e imprimir convertido para Fahrenheit.
# (°C × 9/5) + 32 = °F

celsius = float(input("Graus celsius: "))
fahrenheit = 32 + (celsius * 9 / 5)

print("Graus fahrenheit: {}".format(fahrenheit))
