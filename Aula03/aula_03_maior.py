# 2) Faça um script
# em Python que leia dois números do teclado e imprima o maior deles
# usando o operador ternário.

num_a = int(input("Primeiro Numero: "))
num_b = int(input("Segundo Numero: "))
maior = num_a if (num_a >= num_b) else num_b
print("Maior numero:", maior)
