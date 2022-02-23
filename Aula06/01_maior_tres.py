# 1) Faça um script em Python que leia 3 números e ao final imprima o maior deles.
# Obs: utilizando a estrutura While.
cont = 2
num = float(input("1º número: "))
while cont < 4:
    new_num = float(input("{}º número: ".format(cont)))
    if new_num > num:
        num = new_num
    cont += 1
print("\nO maior número é:", num)
