# 3) Construa um
# programa em Python que o usuário informe um valor e o programa
# retorne o mês correspondente ao valor. Caso o valor informado
# não corresponda a um mês retorne "Esse valor não corresponde a um mês".

num = int(input("Valor: "))
if num == 1:
    print("1 : Janeiro")
elif num == 2:
    print("2 : Fevereiro")
elif num == 3:
    print("3 : Março")
elif num == 4:
    print("4 : Abril")
elif num == 5:
    print("5 : Maio")
elif num == 6:
    print("6 : Junho")
elif num == 7:
    print("7 : Julho")
elif num == 8:
    print("8 : Agosto")
elif num == 9:
    print("9 : Setembro")
elif num == 10:
    print("10 : Outubro")
elif num == 11:
    print("11 : Novembro")
elif num == 12:
    print("12 : Dezembro")
else:
    print("Esse valor não corresponde a um mês")
