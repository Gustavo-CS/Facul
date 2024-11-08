/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package entidade;

import controle.Aluno;
import controle.Vendas;
import java.sql.PreparedStatement;
import javax.swing.JOptionPane;


public class ManterVendas extends DAO{
  public void inserir(Vendas v) throws Exception {
    try {
    abrirBanco();
    String query = "INSERT INTO Vendas(Codigo_th,Nome_Vendedor,Valor_venda) "
            + "values(null,?,?)";
    pst=(PreparedStatement) con.prepareStatement(query);
    pst.setString(1, v.getNome_Vendedor());
    pst.setDouble(2,v.getValor_venda());
    pst.execute();
    fecharBanco();
    } catch (Exception e) {
        System.out.println("Erro " + e.getMessage());
    }  
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