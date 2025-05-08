function soma(num1, num2){
    //codigo da function
    return num1 + num2;
}

function subtrair(num1, num2){
    //codigo da function
    return num1 - num2;
}

function multiplicar(num1, num2){
    //codigo da function
    return num1 * num2;
}

function dividir(num1, num2){
    //codigo da function
    return num1 / num2;
}

let parametro1 = parseFloat(prompt("insira primeiro numero pra calcular"));
let parametro2 = parseFloat(prompt("insira segundo numero pra calcular"));
let operacao = prompt("escolha a operação, digite 1 pra soma, 2 pra subtrair, 3 para multiplicar e 4 para dividir")

if(operacao === "1"){
    alert(soma(parametro1, parametro2));
} 
else if(operacao === "2"){
    alert(subtrair(parametro1, parametro2));
}
else if(operacao === "3"){
    alert(multiplicar(parametro1, parametro2));
} 
else if(operacao === "4"){
    alert(dividir(parametro1,parametro2));
}
else{
    alert("operação digitada errada, tente denovo")
}