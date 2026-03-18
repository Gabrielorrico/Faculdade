import os; os.system('cls')

class Retangulo:
    base = 0
    altura = 0
    area = 0
    perimetro = 0

    def __init__(self, base, altura):
        self.base = base
        self.altura = altura
    
    def getArea(self):
        return self.base * self.altura 

    def getPerimetro(self):
        return 2 * (self.base + self.altura)

    def descricao(self):
        print("base = ", self.base, "altura = ", self.altura, "Área = ", self.getArea(), "Perimetro = ", self.getPerimetro() )

        
        

if __name__ ==  '__main__':

    r1 = Retangulo(10,5)
    r1.descricao()

    

        