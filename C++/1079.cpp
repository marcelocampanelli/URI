#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	
	cout<<fixed<<setprecision(1);
	int n,i,i2;
	double a,b,c,media;
	
	cin>>n;
	for ( i = 0; i < n; i++){
		
		cin>>a>>b>>c;
		
		media =(a*2.0+b*3.0+c*5)/10;
		cout<<media<<endl;
}
	
	

	
	return 0;
}
