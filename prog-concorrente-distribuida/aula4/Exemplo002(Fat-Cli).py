# cliente_data_hora.py
import socket

def iniciar_cliente():
    # Configuração do cliente
    HOST = '127.0.0.1' # Endereço do servidor
    PORT = 65432 # Porta do servidor
    # Criando o socket TCP/IP
    with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
        s.connect((HOST, PORT)) # Conecta ao servidor
        print("Conectado ao servidor. Solicitando fatorial...")
        # # Envia a solicitação ao servidor
        # mensage=input("entrada solicitada: ").encode('utf-8')
        # s.sendall(mensage)
        # Envia a solicitação ao servidor
        # s.sendall(b"fatorial")
        
        mensage=input("entrada fatorial: ").encode('utf-8')
        s.sendall(mensage)
        # Recebe a resposta do servidor
        data = s.recv(1024)
        # s.sendall(b"5")
        mensage=input("numero solicitada: ").encode('utf-8')
        s.sendall(mensage)
        data = s.recv(1024)
        # Exibe a resposta
        print(f"Resposta do servidor: {data.decode()}")

if __name__ == "__main__":
    iniciar_cliente()
