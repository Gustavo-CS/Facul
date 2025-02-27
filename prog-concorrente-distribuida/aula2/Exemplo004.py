import threading
import time

def saudacao(nome, tempo):
    print(f"Ola {nome}")
    time.sleep(tempo)
    print(f"tchau, {nome}")

A = threading.Thread(target = saudacao, args = ("Ana", 2))
B = threading.Thread(target = saudacao, args = ("Maria", 3))
A.start()
B.start()
B.join()
A.join()
print("thread principal finalizada")
