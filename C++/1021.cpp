#include<iostream>
#include<math.h>
using namespace std;

 main(){
	
	int nota100,nota50,nota20,nota10,nota5,nota2,notas;
	int moeda1,moeda50,moeda25,moeda10,moeda05,moeda01,moedas,x;
	double n;

	cin>>n;
	x =  n;
	notas = floor(n);
	moedas = ( n - x ) * 100;
	
	
	nota100 = notas / 100;
	notas = notas % 100;
	nota50 = notas / 50;
	notas = notas % 50;
	nota20 = notas/20;
	notas = notas%20;
	nota10 = notas /10;
	notas = notas%10;
	nota5 = notas/5;
	notas = notas%5;
	nota2 = notas/2;
	notas = notas%2;
	moeda1 = notas/1;
	notas = notas%1;
	moeda50 = moedas/50;
	moedas = moedas% 50;
	moeda25 = moedas/25;
	moedas = moedas%25;
	moeda10 = moedas/10;
	moedas = moedas%10;
	moeda05 = moedas/5;
	moedas = moedas%5;
	moeda01 = moedas/1;
	
	cout<<nota100<<" nota(s) de R$ 100.00"<<endl;
	cout<<nota50<<" nota(s) de R$ 50.00"<<endl;
	cout<<nota20<<" nota(s) de R$ 20.00"<<endl;
	cout<<nota10<<" nota(s) de R$ 10.00"<<endl;
	cout<<nota5<<" nota(s) de R$ 5.00"<<endl;
	cout<<nota2<<" nota(s) de R$ 2.00"<<endl;
	cout<<moeda1<<" moeda(s) de R$ 1.00"<<endl;
	cout<<moeda50<<" moeda(s) de R$ 0.50"<<endl;
	cout<<moeda25<<" moeda(s) de R$ 0.25"<<endl;
	cout<<moeda10<<" moeda(s) de R$ 0.10"<<endl;
	cout<<moeda05<<" moeda(s) de R$ 0.05"<<endl;
	cout<<moeda01<<" moeda(s) de R$ 0.01"<<endl;
		
	return 0;
}
