/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package br.com.controle;

/**
 *
 * @author gustavo.santos2023
 */
public class Acertos {
    private int numAcertos = 0;

    public int getNumAcertos() {
        return numAcertos;
    }
    
    public void acertou() {
        this.numAcertos++;
    }
    
    public void errou() {
        this.numAcertos--;
    }
    
}
