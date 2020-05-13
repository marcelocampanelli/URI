#include <iostream>
using namespace std;

int main()
{
    float renda = 0,imposto = 0, novaRenda = 0, soma = 0;

    cin>>renda;
    if (renda < 2000.00)
        cout<<"Isento"<<endl;

    if(renda > 2000.01 and renda < 3000)
    {
        novaRenda = renda - 2000;
        imposto = novaRenda * 0.08;
        soma = soma + imposto;

        if (renda > 3000.01 and renda < 4500.00)
        {
            novaRenda = renda-3000;
            imposto = novaRenda * 0.18;
            soma = soma + imposto;

            if (renda >4500.01)
            {
            novaRenda = renda - 4500;
            imposto = novaRenda * 0.18;
            soma = soma + imposto;
            }
            
            

        }
    
        
    }

        cout<<"R$ = "<<soma;

    return 0;
}