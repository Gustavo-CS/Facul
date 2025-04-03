
let tabelaa = document.getElementById("tabelaItens");
console.log(tabelaa);

function adicionarItem() {
    let input = document.getElementById("nText");
    let tabela = document.getElementById("tabelaItens").getElementsByTagName("tbody")[0];
    let select = document.getElementById("itemSelect");
    let valor = input.value.trim();

    if (valor === "") {
        alert("Digite um item válido.");
        return;
    }

    let novaLinha = tabela.insertRow();
    let celula = novaLinha.insertCell(0);
    celula.textContent = valor;

    let option = document.createElement("option");
    option.value = valor;
    option.textContent = valor;
    select.appendChild(option);

    input.value = "";
}

nText.addEventListener("keydown", function (event) {
    if (event.key === "Enter") {
        adicionarItem();
    }
})
function marcarItem() {
    let select = document.getElementById("itemSelect");
    let valor = select.value;
    let linhas = document.getElementById("tabelaItens").getElementsByTagName("tbody")[0].getElementsByTagName("tr");

    for (let linha of linhas) {
        if (linha.cells[0].textContent === valor) {
            linha.classList.add("marcado");
            return;
        }
    }
}


function desmarcarItem() {
    let select = document.getElementById("itemSelect");
    let valor = select.value;
    let linhas = document.getElementById("tabelaItens").getElementsByTagName("tbody")[0].getElementsByTagName("tr");

    for (let linha of linhas) {
        if (linha.cells[0].textContent === valor) {
            if (!linha.classList.contains("marcado")) {
                alert("O item já está desmarcado.");
                return;
            }
            linha.classList.remove("marcado");
            return;
        }
    }
}

function removerItem() {
    let select = document.getElementById("itemSelect");
    let valor = select.value;
    let tabela = document.getElementById("tabelaItens").getElementsByTagName("tbody")[0];
    let opcoes = select.getElementsByTagName("option");

    for (let i = 0; i < tabela.rows.length; i++) {
        if (tabela.rows[i].cells[0].textContent === valor) {
            tabela.deleteRow(i);
            break;
        }
    }

    for (let i = 0; i < opcoes.length; i++) {
        if (opcoes[i].value === valor) {
            select.remove(i);
            break;
        }
    }
}

