#include<iostream>
using namespace std;

int main (){
	
	int n,in,out,x;
	
	cin>>n;
	
	for (int i=0; i<n; i++){
		cin>>x;
		if( x > 10 and x < 20){
			in++;
		}
		else {
			out++;
		}
		
	}
		cout<<in<<" in"<<endl;
		cout<<out<<" out"<<endl;
	return 0;
}
