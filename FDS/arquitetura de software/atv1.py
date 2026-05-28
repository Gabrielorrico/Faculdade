class Cliente:
    def __init__(self, ID, nome, email):
        self.ID = ID
        self.nome = nome
        self.email = email

    def __str__(self):
        # Sempre deve retornar uma string string
        return f"ID: {self.ID} nome: {self.nome} email: {self.email}"

class Repositorio:
    def __init__(self):
        self.Clientes = []

    
    def adcionar_cliente(self,Cliente):
        if any(Cliente.ID == Cliente.ID for Cliente in self.Clientes):
            print(f"Cliente com ID {Cliente.ID} já existe.")
            return
        
        self.Clientes.append(Cliente)
        print("Cliente adicionado com sucesso ")
    
    def imprimir(self):
        for Cliente in self.Clientes:
            print(Cliente)

Cliente1 = Cliente("002","Orrico","agbo@cesar.school")
Cliente2 = Cliente("003","Davi","dmcv@cesar.school")

repositorio = Repositorio()

repositorio.adcionar_cliente(Cliente1)
repositorio.adcionar_cliente(Cliente2)

repositorio.imprimir()
