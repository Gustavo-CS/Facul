# servidor_data_hora.py
import socket
from datetime import datetime

def iniciar_servidor():
    # Configuração do servidor
    HOST = '127.0.0.1' # Endereço local
    PORT = 65432 # Porta para comunicação
    # Criando o socket TCP/IP
    with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
        s.bind((HOST, PORT)) # Associa o socket ao endereço e porta
        s.listen() # Habilita o servidor para aceitar conexões
        print(f"Servidor ouvindo em {HOST}:{PORT}")
        while True:
            # Aguarda uma conexão
            conn, addr = s.accept()
            with conn:
                print(f"Conectado por {addr}")
                while True:
                    # Recebe dados do cliente
                    data = conn.recv(1024)
                    if not data:
                        break
                    # Verifica se o cliente pediu a data e hora
                    if data.decode().strip().lower() == "fatorial":
                        conn.sendall(b"Fatorial aceito")
                        while True:
                            # Recebe dados do cliente
                            data = conn.recv(1024)
                            if not data:
                                break
                            # Verifica se o cliente pediu a data e hora
                            try:
                                num = int(data.decode())
                                value = 1
                                for i in range(1, num+1):
                                    value*=i
                                resposta = f"o fatorial is: {value}"
                                conn.sendall(resposta.encode())
                            except:
                                conn.sendall(b"Numero invalido")
                    else:
                        conn.sendall(b"Fatorial invalido")

if __name__ == "__main__":
    iniciar_servidor()
