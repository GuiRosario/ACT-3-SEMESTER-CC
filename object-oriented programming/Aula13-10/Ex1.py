temperatura = []
media = 0
for i in range(10):
    temperatura.append(float(input("Digite a temperatura:")))
    media = media + temperatura[i]
print("Media da temperaturas:",media/10)
ntemp = float(input("Digite a nova temperatura:"))
save = 0
for i in range(10):
    if(temperatura[i] == ntemp):
        print("Nova temperatura encontrada na lista!")
        save = 0
        break
    else:
        save = 1
if(save == 1):
    print("Nova temperatura não encontrada na lista!")

for i in range(10):
    u = i
    for u in range(10):
        if(temperatura[i] > temperatura[u]):
            aux = temperatura[i]
            temperatura[i] = temperatura[u]
            temperatura[u] = aux


for i in range(10):
    print("[",temperatura[i],"]")

print("Maior temperatura da Lista:",temperatura[9])
print("Menor temperatura da Lista:",temperatura[0])
temperatura.remove(9)
temperatura.remove(0)



