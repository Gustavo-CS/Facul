/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package br.com.controle;

/**
 *
 * @author gustavo.santos2023
 */
public class Calculos {

    private double valor;

    private double valor2;

    public double getValor() {
        return valor;
    }

    public void setValor(double valor) {
        this.valor = valor;
    }

    public double getValor2() {
        return valor2;
    }

    public void setValor2(double valor2) {
        this.valor2 = valor2;
    }

    /*public void setValor(int valor) {
        this.valor = valor;
    }*/
    public double calcularDobro() {
        return this.valor * 2;
    }

    public double somar() {
        return this.valor + this.valor2;
    }

    public double subtrair() {
        return this.valor - this.valor2;
    }

    public double dividir() {
        return this.valor / this.valor2;
    }

    public double multiplicar() {
        return this.valor * this.valor2;
    }
}
