// for(inicializador; condicao-saida; expressao-final)[
//     //executar
// 

//exercicio

let notas = [2, 5, 10, 20, 100,2, 5, 10, 20, 100,2, 5, 10, 20, 100,2, 5, 10, 20, 100];
let total = 0;

for(let repeticoes = 0; repeticoes < notas.length; repeticoes++){
    total += notas[repeticoes]
}

console.log(`o total do seu dinheiro é ${total} reais`)