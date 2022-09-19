#include <iostream>
using namespace std;

int main()
{
    int i, i_par=0, i_impar=0;
    int num[8], par[8], impar[8];

    for(i=0; i<8; i++)
    {
        cout<<"Informe o valor do indice "<<i<<": ";
        cin>>num[i];
    }

    for(i=0; i<8; i++)
    {
        if(num[i]%2==0)
        {
            par[i_par]=num[i];
            i_par++;
        }
        else
        {
            impar[i_impar]=num[i];
            i_impar++;
        }
    }
    cout<<"\n\nNumeros pares: ";
    for(i=0; i<i_par; i++)
    {
        cout<<par[i]<<"\n";
    }
    cout<<"Quantidade de numeros pares: "<<i_par;

    return 0;
}
