#include<iostream>
#include<cstdio>
using namespace std;

int main (){
	float A,B,MEDIA;
	
	cin>>A;
	cin>>B;
	
	MEDIA = (A*3.5 + B*7.5)/(3.5 + 7.5);
	printf("MEDIA = %.5f\n",MEDIA);
}
