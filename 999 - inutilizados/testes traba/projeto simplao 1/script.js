

function escrever(valor) {
    document.getElementById("resultado").value += valor;
}

function apagar() {
    // Remove o último caractere do campo de texto
    let campoTexto = document.getElementById("resultado");
    campoTexto.value = campoTexto.value.slice(0, -1);
}

function apagarTudo() {
    // Remove o último caractere do campo de texto
    let campoTexto2 = document.getElementById("resultado");
    campoTexto2.value = campoTexto2.value.slice(1000, -1); // para remover o último caractere do valor atual no campo de texto, a sintaxe eh estranha, o slice seria .slice(qtd nums apagdos, quando vai parar) 
}

function toggleDropdown() {
    document.getElementById("dropdownMenu").classList.toggle("show"); //toggle é boole, sim ou nao, se "force" for aplicado (se clicar no botao) ele sera verdadeiro, se "force" for removido (clicar no botao novament), ele sera falso

    //classlist eh tipo o getElement, mas ele puxa direto a classe no css (eu acho)
}
        // Fechar o dropdown se o usuário clicar fora dele
        window.onclick = function(event) {
             if (!event.target.matches('button')) {
                 let dropdowns = document.getElementsByClassName("dropdown-content");

                 for (let i = 0; i < dropdowns.length; i++) {
                     let openDropdown = dropdowns[i];

                     if (openDropdown.classList.contains('show')) {
                         openDropdown.classList.remove('show');
                     }
                 }
             }
         }