altura = input("Digite a altura da parede:")
largura = input("Digite a largura da parede:")
custo = input("Digite o gasto de tinta (em litros) por metro quadrado:")
lata = input("Digite a quantidade de litros por lata de tinta:")
areap = float(altura)*float(largura)
gasto = int(custo)*(areap)/int(lata)

print("Latas de tinta gastos:",gasto)