var input = require("fs").readFileSync("stdin", "utf8");

var valor = input.split('\n')

var A = valor.shift();

var x = 0;

  while(x<6){

    if(A % 2 !== 0){
      console.log(A)
      x++;
    }

    A++
  }


