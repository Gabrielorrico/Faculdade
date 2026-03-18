import os; os.system('cls')

class Vetor2D:
    '''METODOS SÃO COMO FUNÇÕES'''
    '''PRECISAMOS UTILIZAR COMO CORDENADAS PARA REFERENCIAÇÃO'''
   
    def __init__(self,x,y):
        self.x = x
        self.y = y

    def adicionar(self,outro):
        soma_x = self.x + outro.x
        soma_y = self.y + outro.y  
        return Vetor2D(soma_x, soma_y)
    
    def subtrair(self,outro):
        sub_x = self.x - outro.x
        sub_y = self.y - outro.y 

        return Vetor2D(sub_x, sub_y)
    
    def produtoEscalar(self,outro):
        return self.x * outro.x + self.y * outro.y
        
    def descricao(self):
        print(f"Vetor: ({self.x},{self.y})")

    

if __name__ ==  '__main__':
    '''JEITO 2'''

    V = Vetor2D(1,3)
    W = Vetor2D(4,9)

    soma = V.adicionar(W)
    subtra = V.subtrair(W)
    prod_escalar = V.produtoEscalar(W)

    print("Soma:")
    soma.descricao()

    print("Subtrair: ")
    subtra.descricao()

    print("Produto Escalar: ")
    print(prod_escalar)
