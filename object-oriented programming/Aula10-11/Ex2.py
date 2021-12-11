nome = []
endereço = []
salario = []
continuar = "sim"
while continuar == "sim":
    nome.append(input("Digite o nome:"))
    endereço.append(input("Digite o endereço:"))
    salario.append(int(input("Digite o salario:")))
    continuar = input("Deseja continuar?(sim ou não)")
print(nome[0])
print(nome[1])

