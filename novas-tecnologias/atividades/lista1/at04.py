def vogais(text: str):
    texto_minusculo = text.lower()
    num = 0
    vogais = ["a", "e", "i", "o", "u"]
    for i in texto_minusculo:
        if i in vogais:
            num+=1
    print(f"ha {num} vogais na palavra {text}")


vogais("subi no carro")
vogais("aaaaa")
vogais("bbbb")

