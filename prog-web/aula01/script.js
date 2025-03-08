//  console.log("Olá mundo");

//  var animal = "gato";
//  console.log(animal);
//  console.log(typeof animal);

//  animal = 15;
//  console.log(animal);
//  console.log(typeof animal);

// const valor = 10;
// //valor = 20;

// var nomeCompleto = window.prompt("nome: ");
// var idade = parseInt(window.prompt("idade: "));

// console.log(nomeCompleto);
// console.log(idade);
// console.log(typeof idade);

// console.log(`Voce se chama ${nomeCompleto} e tem ${idade} anos`);


// console.log(5 == "5");
// console.log(5 === "5");

var numero = parseInt(window.prompt("numero: "));

for (let i = 0; i < numero; i++) {
    let linha = "";
    for (let j = 0; j <= i; j++) {
        linha += "*";
    }
    console.log(linha);
}
