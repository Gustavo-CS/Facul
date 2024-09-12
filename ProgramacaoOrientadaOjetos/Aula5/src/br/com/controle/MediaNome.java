/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package br.com.controle;

/**
 *
 * @author gustavo.santos2023
 */
//duas notas varios alunos A) maior media, nome B) quantos media 6.0 e 8.0 C) media turma
public class MediaNome {

    private double maiorMedia = 0;
    private double mediaGeral = 0;
    private String maiorNome;
    private int media6_8 = 0;

    public void somarMedia(String n1, String n2, String nome) {
        double media = (Double.valueOf(n1) + Double.valueOf(n2)) / 2;
        this.mediaGeral += media;
        if (media > this.maiorMedia) {
            this.maiorMedia = media;
        }
        if (media >= 6 && media <= 8) {
            this.media6_8 += 1;
        }
    }
}
