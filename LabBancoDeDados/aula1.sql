 create database vendas_veiculos;
 use vendas_veiculos;
 
 create table funcionarios
 (
	id int unsigned not null auto_increment,
    nome varchar(50) not null,
    salario double not null default '0',
    departamento varchar(50) not null,
    primary key (id)
 );