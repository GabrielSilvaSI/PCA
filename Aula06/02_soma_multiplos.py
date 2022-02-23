# 2) Desenvolver um algoritmo que efetue a soma de todos os números ímpares que são múltiplos de
# três e que se encontram no conjunto dos números de 1 até 500. Obs: utilizando a estrutura While.

cont = 1
soma = 0
while cont <= 500:
    if not cont % 2 == 0:
        if cont % 3 == 0:
            soma += cont
    cont += 1

print("Total:", soma)
