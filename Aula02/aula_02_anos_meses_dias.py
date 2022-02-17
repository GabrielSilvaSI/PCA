# 3) Ler um ano do teclado e imprimir a quantidade de horas, dias e meses correspondentes.

years = int(input("Anos: "))
meses = years * 12
days = years * 365
hours = days * 24

print("{} anos corresponde a:".format(years))
print("{} meses".format(meses))
print("{} dias".format(days))
print("{} horas".format(hours))
