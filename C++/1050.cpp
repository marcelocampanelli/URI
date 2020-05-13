#include<iostream>
using namespace std;

int main(){
	
	int brasilia,salvador,sp,rj,juiz,campinas,vit,bh,ddd;
	
	brasilia = 61;
	salvador = 71;
	sp = 11;
	rj = 21;
	juiz = 32;
	campinas = 19;
	vit = 27;
	bh = 31;
	
	cin>>ddd;
	
	if ( ddd == 61){
		cout<<"Brasilia"<<endl;
		}
	else if (ddd == 71){
		cout<<"Salvador"<<endl;
		}
	else if (ddd==11){
		cout<<"Sao Paulo"<<endl;
	}
	else if (ddd==21){
		cout<<"Rio de Janeiro"<<endl;
	}
	else if (ddd==32){
		cout<<"Juiz de Fora"<<endl;
	}
	else if (ddd==19){
		cout<<"Campinas"<<endl;
	}
	else if (ddd==27){
		cout<<"Vitoria"<<endl;
	}
	else if (ddd==31){
		cout<<"Belo Horizonte"<<endl;
	}
	else { cout<<"DDD nao cadastrado"<<endl;
	}
	return 0;
}
