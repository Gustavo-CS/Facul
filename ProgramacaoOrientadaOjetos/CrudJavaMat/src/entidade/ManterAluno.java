/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package entidade;

import controle.Aluno;
import java.sql.PreparedStatement;
import java.util.ArrayList;
import javax.swing.JOptionPane;
import java.sql.ResultSet;

public class ManterAluno extends DAO{
  public void inserir(Aluno a) throws Exception {
    try {
    abrirBanco();
    String query = "INSERT INTO aluno(codigo,nome,email) "
            + "values(null,?,?)";
    pst=(PreparedStatement) con.prepareStatement(query);
    pst.setString(1, a.getNome());
    pst.setString(2,a.getEmail());
    pst.execute();
    fecharBanco();
    } catch (Exception e) {
        System.out.println("Erro " + e.getMessage());
    }  
}
  //selecionar alunos
 public ArrayList<Aluno> PesquisarAluno() throws Exception {
       ArrayList<Aluno> alunos = new ArrayList<Aluno>();
         try{
         abrirBanco();  
         String query = "select * FROM aluno order by codigo";
         pst = (PreparedStatement) con.prepareStatement(query);
         ResultSet tr = pst.executeQuery();
         Aluno a ;
         while (tr.next()){               
           a = new Aluno();
           a.setCodigo(tr.getInt("codigo"));
           a.setNome(tr.getString("nome"));
           a.setEmail(tr.getString("email"));
           alunos.add(a);
         } 
         fecharBanco();
       }catch (Exception e){
           System.out.println("Erro " + e.getMessage());
     } 
       return alunos;
     }

//metodo deletar aluno		
 public void deletarAluno(Aluno a) throws Exception{
	 abrirBanco();
	 String query = "delete from aluno where codigo=?";
	 pst=(PreparedStatement) con.prepareStatement(query);
	 pst.setInt(1, a.getCodigo());
	 pst.execute();
        JOptionPane.showMessageDialog(null, "Aluno deletado com sucesso!");
	fecharBanco();
     }
  
}