# 2) Escreva um algoritmo que leia o número de identificação, as 3 notas obtidas por um aluno nas
# 3 verificações e a média dos exercícios que fazem parte da avaliação, e calcule a média de aproveitamento,
# usando a fórmula:
#
# MA := (nota1 + nota2 * 2 + nota3 * 3 + ME)/7
#
# A atribuição dos conceitos obedece a tabela abaixo. O algoritmo deve escrever o número do aluno, suas notas,
# a média dos exercícios, a média de aproveitamento, o conceito correspondente e a mensagem 'Aprovado' se o conceito
# for A, B ou C, e 'Reprovado' se o conceito for D ou E.
#
# Média de aproveitamento Conceito
#
# >= 90 A
# >= 75 e < 90 B
# >= 60 e < 75 C

# >= 40 e < 60 D
# < 40 E

id_num = input("Número de identificação: ")
val_A = float(input("Nota 1: "))
val_B = float(input("Nota 2: "))
val_C = float(input("Nota 3: "))
med_ex = float(input("Média dos exercícios: "))

med_apv = (val_A + (val_B * 2) + (val_C * 3) + med_ex) / 7

print("ID:", id_num)
print("Nota 1: {}\nNota 2: {}\nNota 3: {}".format(val_A, val_B, val_C))
print("Media exercícios:", med_ex)
print("Media aproveitamento: %.2f" % med_apv)
if med_apv >= 90:
    print("Conceito A\nAprovado")
elif med_apv >= 75:
    print("Conceito B\nAprovado")
elif med_apv >= 60:
    print("Conceito C\nAprovado")
elif med_apv >= 40:
    print("Conceito D\nReprovado")
else:
    print("Conceito E\nReprovado")
