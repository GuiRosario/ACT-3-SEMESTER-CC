class Pais:
    __code = None
    __name = None
    __pop = None
    __dim = None

    def __init__(self,code,name,dim):
        self.__code = code
        self.__name = name
        self.__dim = dim
        self.__vizinhos = []

    def get_code(self):
        return self.__code

    def get_name(self):
        return self.__name

    def get_pop(self):
        return self.__pop

    def get_dim(self):
        return self.__dim

    def get_paisvizi(self):
        return self.__vizinhos

    def get_densidade(self):
        return self.__pop / self.__dim

    def set_code(self,new_code):
        self.__code = new_code

    def set_name(self,new_name):
        self.__name = new_name

    def set_pop(self,new_pop):
        self.__pop = new_pop

    def set_dim(self,new_dim):
        self.__dim = new_dim
    
    def add_vizi(self,vizi):
        self.__vizinhos.append(vizi)
        vizi.__vizinhos.append(self)

    def is_same_pais(self, new_pais):
        if(self.__code == new_pais.__code):
            return True
        else:
            return False

    # Verifica se o pais recebido é limitrofe do Objeto self
    def is_lim(self, lim_pais):
        encontrado = False
        for i in range(len(self.__vizinhos)):
            if lim_pais.__code == self.__vizinhos[i].__code:
                print("É limitrofe!")
                encontrado = True
        if not encontrado:
            print("Nao é limitrofe!")
    
    # retorna vizinhos em comum
    def comum_vizinhos(self,vizi_pais):
        listavizinhos = []
        for i in range (len(self.__vizinhos)):
            for z in range (len(vizi_pais.__vizinhos)):
                if self.__vizinhos[i].is_same_pais(vizi_pais.__vizinhos[z]):
                   listavizinhos.append(vizi_pais.__vizinhos[z])
        return listavizinhos

    @staticmethod
    def find_pais_in_list(lista, code):
        for index, pais in enumerate(lista):
            print(pais.__code, code)
            if pais.__code == code:
                return index
        return None
    
    @staticmethod
    def get_code_static(pais):
        return pais.get_code()
    @staticmethod    
    def pais_alfabe(pais):
        pais.sort(key=Pais.get_code_static)
        return pais

    def __str__(self):
        return self.__code
        
    def __repr__(self):
        return self.__str__()
