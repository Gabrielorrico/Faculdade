import os; os.system('cls')

class Conta:

    codigo = 0
    saldo = 0.0

    def __init__(self,codigo,saldo=50):
        self.codigo = codigo
        self.saldo = saldo
    
    def imprimaSaldo(self):
        print("codigo: ", self.codigo,"saldo: ", self.saldo)

    #se o modulo foi importado, não é executado

if  __name__ == '__main__': 

    c1 = Conta(10,10000)
    c1.imprimaSaldo()
        