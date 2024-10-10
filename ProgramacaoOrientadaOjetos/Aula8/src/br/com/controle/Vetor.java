/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package br.com.controle;

import java.util.ArrayList;
import javax.swing.JOptionPane;

/**
 *
 * @author gustavo.santos2023
 */
public class Vetor {

    public static void main(String[] args) {
        int codigo;
        String nome = null;
        int idade = 5;
        int cont;
        ArrayList<String> cadastro = new ArrayList<>();
        for (cont = 0; cont < 3; cont++) {
            codigo = Integer.valueOf(JOptionPane.showInputDialog("digite o codigo"));
            nome = JOptionPane.showInputDialog("digite o nome");
            idade = Integer.valueOf(JOptionPane.showInputDialog("digite a idade"));
            cadastro.add(String.valueOf(codigo));
            cadastro.add(nome);
            cadastro.add(String.valueOf(idade));
        }
        
        JOptionPane.showMessageDialog(null, cadastro.toString());
    }
}
