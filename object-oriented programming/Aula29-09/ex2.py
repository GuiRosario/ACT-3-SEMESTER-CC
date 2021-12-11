nome = input("Digite o seu nome:")
dian = int (input("Digite o dia do seu nascimento:"))
mesn = int (input("Digite o mês do seu nascimento:"))
anon = int (input("Digite o ano do seu nascimento:"))
dia = int (input("Digite o dia:"))
mes = int (input("Digite o mês:"))
ano = int (input("Digite o ano:"))
idade = ano - anon
if mesn<=mes:
    if dian>=dia and mesn == mes:
        print("Idade:",idade-1)
    else:
        print("Idade:",idade)
else:
    print("Idade:",idade-1)


    

