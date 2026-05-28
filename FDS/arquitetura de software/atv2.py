
class Cartucho:
    def __init__(self, codigo, titulo, plataforma, fabricante, preco):
        self.codigo = codigo
        self.titulo = titulo
        self.plataforma = plataforma
        self.fabricante = fabricante
        self.preco = float(preco)

    def __repr__(self):
        return (f"Cartucho(codigo={self.codigo!r}, titulo={self.titulo!r}, "
                f"plataforma={self.plataforma!r}, fabricante={self.fabricante!r}, "
                f"preco=R${self.preco:.2f})")
    

def ler_dados_cartucho():
    codigo = input("codigo:")
    titulo = input("codigo:")
    plataforma = input("codigo:")
    fabricante = input("codigo:")
    preco = input("codigo:")

    return(codigo,titulo,plataforma,fabricante,preco)

def filtro_validacao():
    codigo,titulo,plataforma,fabricante,preco = dado;

    if not codigo or not titulo or not plataforma or not fabricante:
        raise ValueError("Todos os campos são obrigatorios")
    if float(preco)<0:
        raise ValueError("preço precisa ser positivo")



def fabricar_cartucho(dado):              
    codigo, titulo, plataforma, fabricante, preco = dado

    return Cartucho(
        codigo=codigo,
        titulo=titulo,
        plataforma=plataforma,
        fabricante=fabricante,
        preco=float(preco),
    )

def armazenar():
    banco.append(cartucho)

