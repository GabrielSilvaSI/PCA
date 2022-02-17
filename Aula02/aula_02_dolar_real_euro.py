# 5) Ler o preço de um produto em Dólar e imprimir o valor convertido para Real e Euro

dolar = float(input("Preço do produto (dolar): "))
real = dolar * 5.26
euro = dolar * 0.88

print("O produto que custa %.2f dolares se converte para" % dolar)
print("%.2f reais" % real)
print("%.2f euros" % euro)
