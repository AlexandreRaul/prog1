#include <stdio.h>
#include <iostream>
#include <locale.h>
using namespace std;

int opcao, num1, num2, soma, sub, multi, divi;
float divisao;
bool continuar = true;

int main()
{
    cout<<"CALCULADORA \n\n";
    cout<<"Informe um valor: \n\n";
    cin>>num1;

    cout<<"Informe outro valor: \n\n";
    cin>>num2;

    while(continuar){

        setlocale(LC_ALL, "portuguese");
        cout<<"Escolha uma operação:\n";
        cout<<"| 1 - SOMA          |\n";
        cout<<"| 2 - SUBTRAÇÃO     |\n";
        cout<<"| 3 - MULTIPLICAÇÃO |\n";
        cout<<"| 4 - DIVISÃO       |\n";
        cout<<"| 5 - SAIR          |\n";
        cout<<"\nInforme uma opcao:  \n";
        cin>>opcao;

        switch(opcao){
        case 1:
            soma=num1+num2;
            cout<<"A soma é:" <<soma<< "\n";
            break;
        case 2:
            sub=num1-num2;
            cout<<"A subtração é:" <<sub<< "\n";
            break;
        case 3:
            multi=num1*num2;
            cout<<"A multiplicação é:" <<multi<< "\n";
            break;
        case 4:
            divi=num1/num2;
            cout<<"A divisão é:" <<divi<< "\n";
            break;
        case 5:
            cout<<"Programa finalizado! \n";
            continuar=false;
            break;
        default:
            cout<<"Opcao invalida! \n";
            break;
        }
    }


   return 0;
}
