var numClick = 0;

var botaoIn = document.getElementById("botaoIn");
botaoIn.onclick = function () {
    numClick++;
    document.getElementById("contador").textContent = "Contador: " + numClick;
}

var botaoDe = document.getElementById("botaoDe");
botaoDe.onclick = function () {
    if (numClick < 1) {
        alert("Contador não pode ser menor que zero!");
    }
    else {
        numClick--;
        document.getElementById("contador").textContent = "Contador: " + numClick;
    }
}

var caracterNumber = 0;
var caracterCount = document.getElementById("caracterCount");
var nText = document.getElementById("nText");

var newDiv = document.createElement("div");
nText.addEventListener("keydown", function (event) {
    if (event.key === "Enter") {
        // event.preventDefault();
        caracterNumber = 0;
        document.getElementById("caracterCount").textContent = "numero de caracteres: " + caracterNumber;
        const newContent = document.createTextNode(nText.value);
        const intDiv = document.createElement("div");
        intDiv.appendChild(newContent);
        newDiv.appendChild(intDiv);
        const currentDiv = document.getElementById("final");
        document.body.insertBefore(newDiv, currentDiv);
        nText.value = "";
    }
    else if (event.key === "Backspace") {
        if (caracterNumber > 0) {
            nText = document.getElementById("nText");
            if (nText.value[nText.value.length - 1] !== " ") {
                caracterNumber--;
                document.getElementById("caracterCount").textContent = "numero de caracteres: " + caracterNumber;
            }
        }
    }
    else if (event.key !== " ") {
        caracterNumber++;
        document.getElementById("caracterCount").textContent = "numero de caracteres: " + caracterNumber;
    }
})

var botaoRe = document.getElementById("botaoRe");
botaoRe.onclick = function () {
    // newDiv.remove();
    newDiv.remove();
    newDiv = document.createElement("div");
    numDiv.remove();
    numDiv = document.createElement("div");
    lista = []
    numClick = 0;
    document.getElementById("contador").textContent = "Contador: " + numClick;
    caracterNumber = 0;
    document.getElementById("caracterCount").textContent = "numero de caracteres: " + caracterNumber;
    nText.value = "";
}

var lista = [];

var numDiv = document.createElement("div");

var botaoList = document.getElementById("botaoList");
botaoList.onclick = function () {
    var num = Math.floor(Math.random() * 10);
    lista.push(num);
    const numContent = document.createTextNode(num);
    const intDivNum = document.createElement("div");
    intDivNum.appendChild(numContent);
    numDiv.appendChild(intDivNum);
    const currentDiv = document.getElementById("final2");
    document.body.insertBefore(numDiv, currentDiv);
}

var botaoOr = document.getElementById("botaoOr");
botaoOr.onclick = function () {
    lista.sort();
    numDiv.remove();
    numDiv = document.createElement("div");
    for (let i = 0; i < lista.length; i++) {
        const numContent = document.createTextNode(lista[i]);
        const intDivNum = document.createElement("div");
        intDivNum.appendChild(numContent);
        numDiv.appendChild(intDivNum);
        const currentDiv = document.getElementById("final2");
        document.body.insertBefore(numDiv, currentDiv);
    }
}



// console.log(getElementById("body"));
// nText.ke = function() {
//     alert("aaaaaaa");
// }