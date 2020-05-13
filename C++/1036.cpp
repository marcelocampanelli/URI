#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;

int main(){
	double a,b,c,x1,x2,delta;
	
	cin>>a;
	cin>>b;
	cin>>c;
	if ( a == 0 ){
		cout<<"Impossivel calcular\n";
		
		return 0;
	}
	delta =(b*b)-4*a*c;
	
	 if ( delta >= 0 ){
	
		
		x1 = (-b + sqrt(delta) ) / (2*a);
		x2 = (-b - sqrt (delta)) / (2*a);

	
		if (x1 >= x2){
			printf("R1 = %.5f\n", x1);
			printf("R2 = %.5f\n", x2);
		}
		else if (x1 < x2){
			printf("R1 = %.5f\n", x2);	
			printf("R2 = %.5f\n", x1);
		}
	}
	
	else {
		cout<<"Impossivel calcular\n";
	}

	
	return 0;
}
