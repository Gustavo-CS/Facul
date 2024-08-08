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
public class SomaMaior {
    public static void main(String[] args) {
        int v1, v2 = 0, v3 = 0;
        for (int i = 0; i < 5; i++) {
            v1 = Integer.valueOf(JOptionPane.showInputDialog("Digite um valor: "));
            v2 += v1;
            if(v3<v1){
                v3 = v1;
            }
        }
        JOptionPane.showMessageDialog(null, "A soma e : "+v2+"\nO maior numero e: "+v3);
        //programa recebe entrada 2 notas mostre media
    }
}


//5 int mostre: a)soma b)maior obs: n vetor and max 4 var