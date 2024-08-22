/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package br.com.visao;

import br.com.controle.Notas;
import javax.swing.JOptionPane;

/**
 *
 * @author gustavo.santos2023
 */
public class SalaDeAula {

    public static void main(String[] args) {
        Notas notas = new Notas();
        for (int i = 1; i <= 10; i++) {
            notas.setNota1(Double.valueOf(JOptionPane.showInputDialog("digite a nota 1 do aluno " + i)));
            notas.setNota2(Double.valueOf(JOptionPane.showInputDialog("digite a nota 1 do aluno " + i)));
            notas.media();
        }
        JOptionPane.showMessageDialog(null, "A media geral e:"+notas.getMediaGeral());
        JOptionPane.showMessageDialog(null, "A maior media e:"+notas.getMediaMaior());
        JOptionPane.showMessageDialog(null, "A menor media e:"+notas.getMediaMenor());
    }
}
