var cadena = "esto es una cadena de caracteres";
var entero = 5;
var decimal = 4.5;
var caracter = "C";
var booleano = true;
var arreglo = ["elemento1","elemento2","elemento3"];
console.log(cadena);
console.log(entero);
console.log(decimal);
console.log(caracter);
console.log(booleano);
console.log(arreglo);

if (booleano){
    alert("la exprecion del if es true")
}else{
    alert("no paso por aqui")
}

for (var i = 0; i < 10; i++){
    console.log("el valor de i es: " + i)
}

switch(caracter){
    case "A":
        alert("el valor de A es");
        break;
    case "B":
        alert("el valor de B es");
        break;
    case "C":
        alert("el valor de C es");
        break;
    case "D":
        alert("el valor de D es");
        break;
}

var contador = 1;
while  (contador <=5){
    console.log("en el cliclo While: " + contador);
    contador ++;
}

$(document).ready(function(){
    var texto = document.getElementById("boton_agregar").innerHTML
    console.log(texto);
    texto = $("#boton_agregar").html();
    console.log(texto);

    $(".btn-agregar").on("click", agregar_producto);
});