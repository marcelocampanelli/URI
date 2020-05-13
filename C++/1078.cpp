#include<iostream>
using namespace std;

int main(){
	
	int n,x,calc;
	
	cin>>n;
	
	for (x = 1; x <= 10; x++){
		
		calc = x *n;
		
		cout<<x<<" x "<<n<<" = "<<calc<<endl;
		
		
	}
	
	return 0;
}
