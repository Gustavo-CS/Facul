import threading
import time

Contador = 0
lock = threading.Lock()

def incrementar():
    global Contador
    for _ in range(1000):
        lock.acquire() #adquire o acesso ao recurso(variavel)
        try:
            Contador = Contador + 1
            time.sleep(0)
            print(Contador)
        finally:
            lock.release() #libera o recurso(variavel)

threads = []

for i in range(10):
    thread = threading.Thread(target = incrementar)
    threads.append(thread)
    thread.start()

for thread in threads:
    thread.join()

print(f"Contador {Contador}")