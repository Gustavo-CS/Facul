create database db_venda_veiculo;
use db_venda_veiculo;

create table cliente
(
	id_cliente int unsigned not null auto_increment,
    nome varchar(45) not null,
    cnh varchar(25) null,
    tipo_cliente varchar(45) not null,
    check (tipo_cliente in ('Física', 'Jurídica')),
    cartao varchar(16),
    primary key(id_cliente)
);

create table funcionario
(
	id_funcionario int unsigned not null auto_increment,
    nome_funcionario varchar(45) not null,
    salario double not null default '0',
    departamento varchar(45),
    primary key(id_funcionario)
);

create table venda_veiculo
(
	id_venda int unsigned not null auto_increment,
    valor_venda double not null,
    data_venda date not null, 
    cliente_id int unsigned not null,
    funcionario_id int unsigned not null,
    primary key(id_venda),
    constraint fk_cliente_id foreign key (cliente_id) references cliente(id_cliente),
    constraint fk_funcionario_id foreign key (funcionario_id) references funcionario(id_funcionario)
);

create table veiculo
(
	id_veiculo int unsigned not null auto_increment,
    placa varchar(7) not null,
    marca varchar(45) not null,
    modelo varchar(45) not null,
    valor double not null,
    ano int unsigned not null,
    venda_id int unsigned null,
    primary key(id_veiculo),
    constraint fk_veiculo_venda_id foreign key(venda_id) references venda_veiculo(id_venda)
);

alter table cliente
add column nome varchar(45);
add column nome varchar(45);

insert into cliente (nome, cnh, tipo_cliente, cartao)
values ('João Silva', '1235435435431', 'Física', '15452342342343'),
('João Silva2', '1235435435432', 'Juridíca', '25452342342343'),
('João Silva3', '1235435435433', 'Física', '35452342342343'),
('João Silva4', '1235435435434', 'Física', '45452342342343');

select * from cliente;

