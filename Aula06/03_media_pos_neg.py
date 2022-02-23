# 3) Desenvolver um algoritmo que leia um número não determinado de valores e calcule e escreva a
# média aritmética dos valores lidos, a quantidade de valores positivos, a quantidade de valores
# negativos e o percentual de valores negativos e positivos. Obs: utilizando a estrutura While.

qtd = int(input("Quantidade de valores: "))
total = 0
positives = 0
negatives = 0
cont = 1
while cont <= qtd:
    num = float(input("{}ºNumero: ".format(cont)))
    total += num
    if num > 0:
        positives += 1
    elif num < 0:
        negatives += 1
    cont += 1

print("\nMédia aritmética:", (total / qtd))
print("Qtd de positivos: {}\nQtd de negativos: {}".format(positives, negatives))
print("Percentual positivo:", (positives * 100) / qtd, "%")
print("Percentual negativo:", (negatives * 100) / qtd, "%")
