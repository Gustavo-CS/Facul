/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package br.com.visao;

import br.com.controle.Semestre;
import javax.swing.JOptionPane;

/**
 *
 * @author gustavo.santos2023
 */
public class MeuQueridoObjeto {

    public static void main(String[] args) {
        Semestre s = new Semestre();
        int cont = 0;
        for (cont = 0; cont < 3; cont++) {
            s.setValor(Double.valueOf(JOptionPane.showInputDialog("digite um valor")));
            JOptionPane.showMessageDialog(null, "valor: " + s.getValor());
            JOptionPane.showMessageDialog(null, "dobro: " + s.dobro());
        }
    }
}
