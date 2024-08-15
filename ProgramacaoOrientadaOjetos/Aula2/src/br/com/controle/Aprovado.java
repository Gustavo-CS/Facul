/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package br.com.controle;

import javax.swing.JOptionPane;

/**
 *
 * @author gustavo.santos2023
 */
public class Aprovado {

    double nota1;
    double nota2;

    public double getNota1() {
        return nota1;
    }

    public void setNota1(double nota1) {
        this.nota1 = nota1;
    }

    public double getNota2() {
        return nota2;
    }

    public void setNota2(double nota2) {
        this.nota2 = nota2;
    }
    
    public String aprovado(){
        if((this.nota1 + this.nota2)/2 < 7){
            return "Reprovado com nota: ";
        } else {
            return "Aprovado com nota: ";
        }
    }
    public String getMedia() {
        return String.valueOf((this.nota1 + this.nota2)/2);
    }
    
    public void fodase(){
        this.nota1 = Double.valueOf(JOptionPane.showInputDialog("digite a nota 1: "));
        this.nota2 = Double.valueOf(JOptionPane.showInputDialog("digite a nota 2: "));
        JOptionPane.showMessageDialog(null, aprovado() + getMedia());
    }
}
