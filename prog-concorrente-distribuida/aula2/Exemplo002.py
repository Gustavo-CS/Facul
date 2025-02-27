import threading
import time

def tarefa():
    print("Inicio...")
    time.sleep(3)
    print("Fim...")

def tarefa2():
    print("Inicio2...")
    time.sleep(3)
    print("Fim2...")

thread = threading.Thread(target = tarefa)
thread2 = threading.Thread(target = tarefa2)
thread2.start()
thread.start()
thread2.join()
print("thread principal finalizada")