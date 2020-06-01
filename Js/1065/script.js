var input = require("fs").readFileSync("stdin", "utf8");
var  valores = input.split("\n").map(item => parseInt(item));

var par = 0;


  for (var i=0; i<5; i++){

    if(valores[i] % 2 === 0){
    par ++;
    }

  }

console.log(par + " valores pares")