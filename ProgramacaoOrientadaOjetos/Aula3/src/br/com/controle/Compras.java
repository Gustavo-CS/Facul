/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package br.com.controle;

/**
 *
 * @author gustavo.santos2023
 */
public class Compras {
    int valor, maior, soma;

    public void setValor(int v1) {
        this.valor = v1;
        if (this.valor > this.maior){
            this.maior = v1;
        }
        this.soma += this.valor;
    }
    
    public int getMaior() {
        return this.maior;
    }

    public int getSoma() {
        return this.soma;
    }
    
}
