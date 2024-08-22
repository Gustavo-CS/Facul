/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package br.com.visao;

import br.com.controle.Compras;
import javax.swing.JOptionPane;

/**
 *
 * @author gustavo.santos2023
 */
public class ComprasMain {

    public static void main(String[] args) {
        Compras c = new Compras();
        for (int i = 0; i < 5; i++) {
            c.setValor(Integer.valueOf(JOptionPane.showInputDialog("Digite o valor da compra " + (i + 1) + ": ")));

        }
        JOptionPane.showMessageDialog(null, "A soma das compras e : " + c.getSoma() + "\nA compra de maior valor e: " + c.getMaior());
    }
}

//2 notas, 10 alunos; a)maior media da turma b)menor media c)media geral