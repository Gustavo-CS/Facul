import threading
import time

Contador = 0

lock = threading.Lock()

def incrementar():
    global Contador
    for _ in range(5000):
        lock.acquire() #adquire o acesso ao recurso(variavel)
        try:
            v = Contador
            time.sleep(0.000000001)
            Contador = v + 1
        finally:
            lock.release() #libera o recurso(variavel)

threads = []

for i in range(50):
    t = threading.Thread(target = incrementar)
    threads.append(t)
    t.start()

for t in threads:
    t.join()

print(f"Valor final: {Contador}")