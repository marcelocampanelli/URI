#include<iostream>
using namespace std;

int main (){
	int n1,n2,n3,n4,n5;
	int par,impar,positivo,negativo;
	par = 0; impar = 0;
	cin>>n1;
	cin>>n2;
	cin>>n3;
	cin>>n4;
	cin>>n5;
	
	if ( n1%2 == 0) 
		par++;
	if (n2%2 == 0)
		par++;
	if (n3%2 == 0)
		par++;
	if (n4%2 == 0)
		par++;
	if (n5%2 == 0)
		par++;
	if (n1%2 != 0)
		impar++;
	if (n2%2 != 0)
		impar++;
	if (n3%2 != 0)
		impar++;	
	if (n4%2 != 0)
		impar++;	
	if (n5%2 != 0)
		impar++;
	if (n1>0)
		positivo++;
	if (n2>0)
		positivo++;
	if (n3>0)
		positivo++;
	if (n4>0)
		positivo++;
	if (n5>0)
		positivo++;
	if (n1<0)
		negativo++;
	if (n2<0)
		negativo++;
	if (n3<0)
		negativo++;
	if (n4<0)
		negativo++;
	if (n5<0)
		negativo++;
	cout<<par<<" valor(es) par(es)"<<endl;
	cout<<impar<<" valor(es) impar(es)"<<endl;
	cout<<positivo<<" valor(es) positivo(s)"<<endl;
	cout<<negativo<<" valor(es) negativo(s)"<<endl;
	return 0;
}
