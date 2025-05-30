import threading

contador = 0

def incrementar():
    global contador
    for _ in range(100000):
        contador += 1

threads = [threading.Thread(target=incrementar) for _ in range(10)]
for t in threads: t.start()
for t in threads: t.join()

print(f"Contador final: {contador}")