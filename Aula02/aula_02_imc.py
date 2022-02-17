# 4) Ler o peso e a altura de um usuário e imprimir o seu IMC.
# imc = weight / height²

weight = float(input("Peso(kg): "))
height = float(input("Altura(m): "))
imc = weight / (height * height)

print("IMC = %.1f" % imc)
