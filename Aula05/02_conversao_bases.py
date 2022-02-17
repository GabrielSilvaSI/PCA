# 2) Faça um programa de conversão de base numérica. O programa deverá apresentar uma
# tela de entrada com as seguintes opções:

def dec_hex():
    dec = int(input("Decimal: "))
    print("Hexadecimal: ", format(dec, 'X'))


def hex_dec():
    hex_num = input("Hexadecimal: ")
    print("Decimal: ", int(hex_num, 16))


def dec_oct():
    dec = int(input("Decimal: "))
    print("Octal: ", format(dec, 'o'))


def oct_dec():
    oct_num = input("Octal: ")
    print("Decimal: ", int(oct_num, 8))


while 1:
    print("< Conversão de base >\n"
          "1: decimal para hexadecimal\n"
          "2: hexadecimal para decimal\n"
          "3: decimal para octal\n"
          "4: octal para decimal\n"
          "5: Encerra\n")
    choice = int(input("Escolha: "))

    match choice:
        case 1:
            dec_hex()
        case 2:
            hex_dec()
        case 3:
            dec_oct()
        case 4:
            oct_dec()
        case 5:
            exit()
        case _:
            print("Opção Inválida")

    choice = int(input("\n1 - Voltar ao menu\n"
                       "2 - Encerrar\n"
                       "Escolha: "))
    if choice == 2:
        exit()
