// //capturando um elemento por id
// let titulo = document.getElementById("titulo1");

// //capturando por classe 
// let titulo2 = document.getElementsByClassName("titulo2");

// //capturando por tags 
// let tags = document.getElementsByTagName("h1");

// let msg = prompt("ver mensagem escondida? 1 pra sim 2 pra nao")

// if(msg === '1'){
//     let novoElemento = document.createElement("h2");
//     novoElemento.innerHTML = "ola sou um elemento novo";
//     document.body.appendChild(novoElemento);
// }

let removerNome = document.getElementById("nome");
removerNome.remove();    
