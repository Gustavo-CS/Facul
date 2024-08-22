/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package br.com.controle;

/**
 *
 * @author gustavo.santos2023
 */
public class Notas {
    double nota1, nota2, mediaAluno, mediaMaior = 0, mediaMenor = 10, somaNotas;
    

    public void setNota1(double nota) {
        this.nota1 = nota;
    }
    
    public void setNota2(double nota) {
        this.nota2 = nota;
        this.mediaAluno = (this.nota1 + this.nota2)/2;
    }
    
    public void media(){
        if(this.mediaMaior < this.mediaAluno){
            this.mediaMaior = this.mediaAluno;
        }
        if(this.mediaMenor > this.mediaAluno){
            this.mediaMenor = this.mediaAluno;
        }
        this.somaNotas+=this.mediaAluno;
    }

    public double getMediaMaior() {
        return mediaMaior;
    }

    public double getMediaMenor() {
        return mediaMenor;
    }

    public double getMediaGeral() {
        return this.somaNotas/10;
    }
    
    
}
