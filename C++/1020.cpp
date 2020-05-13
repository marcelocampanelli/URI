#include<iostream>
using namespace std;

main(){
	int n,ano,mes,dia;
	
	cin>>n;	
	
	ano = n/365;
	n = n%365;
	mes = n/30;
	n = n%30;
	dia = n;
	
	
	
	
	cout<<ano<<" ano (s) "<<endl;
	cout<<mes<<" mes (es)"<<endl;
	cout<<dia<<" dia (s)"<<endl; 

	
}
