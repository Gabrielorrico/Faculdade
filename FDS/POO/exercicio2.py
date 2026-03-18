import os; os.system('cls')

class Pessoa:
    nome = ""
    idade = 0
    altura = 0.0
    peso = 0.0

    def __init__(self,nome, idade, altura, peso):
        self.nome = nome
        self.idade = idade
        self.altura = altura
        self.peso = peso


    def getImc(self):
        return round(self.peso / (self.altura * self.altura))
    
    def getCategoria(self):
        if self.getImc() <= 18.5:
            return "abaixo do peso normal!"

        elif self.getImc() > 18.5 and self.getImc() < 25:
            return "peso normal!"

        elif self.getImc() > 25 and self.getImc() < 30:
            return "Acima do peso!"

        else:
            return "Obesidade."
        
    def descricao(self):
        print("Nome:", self.nome, "\nidade:", self.idade, "\naltura:", self.altura, "\nIMC:", self.getImc(), "\nCategoria:", self.getCategoria())

if __name__ ==  '__main__':

    p1 = Pessoa("Orrico", 19, 1.77,75)
    p1.descricao()

