nome = input("Digite um nome: ")
idade = int(input("Digite sua idade: "))
altura = float(input("digite sua altura: "))
peso = float(input("digite seu peso: "))
print("Seu nome é",  nome  ,"e tem",  idade  ,"anos e seu imc é",  peso/altura**2)
print(f"Seu nome é {nome} e tem {idade:x^4} anos e seu imc é {peso/altura**2:.2f}")
