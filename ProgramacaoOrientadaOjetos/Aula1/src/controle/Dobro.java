/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package controle;

import javax.swing.JOptionPane;

/**
 *
 * @author gustavo.santos2023
 */
public class Dobro {
    public static void main(String[] args) {
        int v1;
        v1 = Integer.valueOf(JOptionPane.showInputDialog("Digite um valor: "));
        JOptionPane.showMessageDialog(null, "O dobro e : "+v1*2);
        
    }
}