#include<iostream>
#include<math.h>
using namespace std;

int main (){
	
	int n,x;
	
	cin>>n;
	
	for (int i = 1; i <= n ; i++){
		
		if ( i%2 == 0){
			x = i*i;
			cout<<i<<"^2 = "<< x<<endl;		
		}
		
		
		
	}
		
	

	return 0;
}
