var meuElemento = document.getElementById("paragrafo");
console.log(meuElemento);
console.log(meuElemento.textContent);

var paragrafo1 = document.getElementsByClassName("paragrafo1");
console.log(paragrafo1);
for (let i = 0; i < paragrafo1.length; i++){
    console.log(paragrafo1[i].textContent, " ", paragrafo1[i].className);
}

var paragrafo2 = document.getElementsByClassName("paragrafo2");
console.log(paragrafo2);
for (let i = 0; i < paragrafo2.length; i++){
    console.log(paragrafo2[i].textContent, " ", paragrafo2[i].className);
}

var ps = document.getElementsByTagName("p");
console.log(ps);
for (let i = 0; i < ps.length; i++){
    console.log(ps[i].textContent, " ", ps[i].className);
}

var ps2 = document.getElementsByTagName("p2");
console.log(ps2);
for (let i = 0; i < ps2.length; i++){
    console.log(ps2[i].textContent, " ", ps2[i].className);
}

var cabecalho1 = document.querySelector(".cabecalho");
console.log(cabecalho1.textContent);

var cabecalho2 = document.querySelectorAll(".cabecalho");
console.log(cabecalho2);

var nome = "Pedro";
// document.getElementById("paragrafo").textContent = "Texto por JS";
// document.getElementById("paragrafo").innerHTML = "<h2>Texto por JS</h2>";
document.getElementById("paragrafo").textContent = `Texto por JS - seja bem vindo: ${nome}`;

var botao1 = document.getElementById("botao1");
botao1.onclick = function(){
    alert("clicou!");
    botao1.textContent = "clicado";
}

var botao2 = document.getElementById("botao2");
botao2.addEventListener("mouseover", function(){
    botao2.style.backgroundColor = "purple";
})

botao2.addEventListener("mouseout", function(){
    botao2.style.backgroundColor = "";
})

botao2.addEventListener("click", function(){
    alert("clicou!");
})