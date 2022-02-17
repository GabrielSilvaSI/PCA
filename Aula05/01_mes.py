# 1) Escreva um programa utilizando o comando match que imprima um mês de acordo com o número digitado pelo usuário.

# get month function
def get_month(month_index):
    match month_index:
        case 1:
            month = "Janeiro"
        case 2:
            month = "Fevereiro"
        case 3:
            month = "Março"
        case 4:
            month = "Abril"
        case 5:
            month = "Maio"
        case 6:
            month = "Junho"
        case 7:
            month = "Julho"
        case 8:
            month = "Agosto"
        case 9:
            month = "Setembro"
        case 10:
            month = "Outubro"
        case 11:
            month = "Novembro"
        case 12:
            month = "Dezembro"
        case _:
            month = "Número inválido"
    return month


# main
month_num = int(input("Nº do mês: "))
print(get_month(month_num))
