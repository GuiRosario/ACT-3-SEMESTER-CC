import moduloq01

def pais_selecionado_menu(pais):
    print('pais', str(pais), 'selecionado com sucesso')

    while True:
        print('===================================== ', str(pais) ,' ===================================================')
        print(0, 'VOLTAR')
        print(1, 'ADD VIZINHO')
        print(2, 'LISTAR VIZINHOS')
        print(3, 'REMOVER VIZINHOS')
        print(4, 'ADICIONAR POPULACãO')
        print('======================================================================================================')
    
        op = int(input('>>'))

        if op == 0:
            return


def main_menu():
    paises = []

    while True:
        print('=====================================  Questão 01  ===================================================')
        print(0, 'LISTAR PAISES')
        print(1, 'ADD PAIS')
        print(2, 'REMOVE PAIS')
        print(3, 'SELECT PAIS')
        print(4, 'SAIR')
        print('======================================================================================================')

        op = int(input('>>'))

        if op == 0:
            if len(paises) == 0:
                print(' ------------  Paises --------')
                print('Não há paises na Lista')
                print(' -----------------------------')
                continue
            
            print(' ------------  Paises --------')
            for index, pais in enumerate(paises):
                print('   ', index, '. ', pais)
            print(' -----------------------------')

        if op == 1:
            code, nome, dim = input('Forneça os parâmetros nescessários (Ex: code nome dim) >>').split()
            paises.append(moduloq01.Pais(code, nome, dim))
            print('pais', str(paises[-1]), 'adicionado com sucesso.')

        if op == 2:
            index = moduloq01.Pais.find_pais_in_list(paises, input('Forneça o código do Pais >>').strip())
            if index == None:
                print('Pais não encontrado na lista')
                continue
            
            print('pais', str(paises.pop(index)), 'removido com sucesso')

        if op == 3:
            index = moduloq01.Pais.find_pais_in_list(paises, input('Forneça o código do Pais >>').strip())
            if index == None:
                print('Pais não encontrado na lista')
                continue
            pais_selecionado_menu(paises[index])

        if op == 4:
            print('====================================================================================')
            print('FECHANDO')
            print('====================================================================================')
            break

if __name__ == '__main__':
    main_menu()
