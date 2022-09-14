#include <stdio.h>
#include <iostream>
using namespace std;

int n, i, soma, maior, menor=1000000;
float media;

int main()
{

    for(i=1; i<=10; i++)
    {

        cout<<"Informe o valor "<<i<<":";
        cin>>n;

        soma=soma+n;

        cout<<"\n";

        if(n>maior){
                maior=n;
        }
        if(n<menor){
                menor=n;
        }


    }

    media=soma/10.0;

    cout<<"A media eh: "<<media<<"\n";
    cout<<"O maior valor eh:"<<maior<<"\n";
    cout<<"O menor valor eh:"<<menor<<"\n";





    return 0;
}



