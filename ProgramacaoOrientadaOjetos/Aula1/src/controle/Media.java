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

public class Media {
    public static void main(String[] args) {
        float v1, v2;
        v1 = Float.valueOf(JOptionPane.showInputDialog("Digite um valor: "));
        v2 = Float.valueOf(JOptionPane.showInputDialog("Digite um valor: "));
        JOptionPane.showMessageDialog(null, "A media e : "+(v1+v2)/2);
        //programa recebe entrada 2 notas mostre media
    }
}


//5 int mostre: a)soma b)maior obs: n vetor and max 4 var