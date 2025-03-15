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
console.log(nText);
nText.addEventListener("keypress", function(event){
    
    if(event.key !== " ") {
        caracterNumber++;
        document.getElementById("caracterCount").textContent = "numero de caracteres: " + caracterNumber;
    }
    if(event.key === "Enter") {
        // event.preventDefault();
        caracterNumber = 0;
        document.getElementById("caracterCount").textContent = "numero de caracteres: " + caracterNumber;
        const newDiv = document.createElement("div");
        const newContent =document.createTextNode(nText.value);
        newDiv.appendChild(newContent);
        const currentDiv = document.getElementById("caracterCount");
        document.body.insertBefore(newDiv, currentDiv);
        nText.value = "";
    }
})

// console.log(getElementById("body"));
// nText.ke = function() {
//     alert("aaaaaaa");
// }