import os; os.system('cls')

class Animal:
    dono = ''
    dataNasc = ''

    def __init__(self,dono,dataNasc):

        self.dono = dono
        self.dataNasc = dataNasc

    def exibir_dados(self):
        print(f"Dono(a) do animal {self.dono} data de nascimento: {self.dataNasc}")

class Gato(Animal):
    cor = ''
    manchas = ''
    vacinado = ''


    def __init__(self, dono, dataNasc,cor,manchas,vacinado):
        super().__init__(dono, dataNasc)
        self.cor = cor
        self.manchas = manchas
        self.vacinado = vacinado
    
    def descricao(self):
        print(f"\nDono(a) do animal:{self.dono} \ndata de nascimento:{self.dataNasc} \nCor: {self.cor} \nmanchas:{self.manchas} \nVacinado:{self.vacinado}")


if __name__ ==  '__main__':

    A1 = Animal("Orrico","02/10/2019")
    G1 = Gato("Orrico","02/10/2019","galego","sim","sim")
    G1.descricao()

        
        

        




