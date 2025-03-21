def desenhar_caixa(largura=10, altura = 5):
    print("Caixa:")
    largura = largura
    altura = altura
    for i in range(altura):
        if i == 0 or i == altura - 1:
            print('*' * largura)
        else:
            print('*' + ' ' * (largura - 2) + '*')
    print()

def desenhar_oval():
    print("Oval:")
    altura = 5
    largura = 15
    for i in range(altura):
        espacos = abs((altura // 2) - i)
        linha = ' ' * espacos + '*' * (largura - 2 * espacos) + ' ' * espacos
        print(linha)
    print()

def desenhar_seta():
    print("Seta:")
    largura = 7
    altura = 5
    # Parte superior (triangular)
    for i in range(altura // 2 + 1):
        print(' ' * (altura // 2 - i) + '*' * (2 * i + 1))
    # Parte inferior (reta)
    for i in range(altura // 2, altura):
        print(' ' * (altura // 2) + '*' * largura)
    print()

def desenhar_losango():
    print("Losango:")
    largura = 7
    altura = 5
    # Parte superior (triangular)
    for i in range(altura // 2 + 1):
        print(' ' * (altura // 2 - i) + '*' * (2 * i + 1))
    # Parte inferior (invertida)
    for i in range(altura // 2, altura):
        print(' ' * (i - altura // 2) + '*' * (2 * (altura - 1 - i) + 1))
    print()

# Exibindo as formas
desenhar_caixa(20, 10)
desenhar_oval()
desenhar_seta()
desenhar_losango()
