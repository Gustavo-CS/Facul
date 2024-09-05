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
    private double somaCompras;
    private int numCompra500_700;

    public double getSomaCompras() {
        return somaCompras;
    }

    public int getNumCompra500_700() {
        return numCompra500_700;
    }
    
    public void addCompra(double valor) {
        this.somaCompras += valor;
        if (valor <= 700 && valor >= 500){
            this.numCompra500_700+=1;
        }
    }
    
}
