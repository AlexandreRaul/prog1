#include <stdio.h>
#include <iostream>
using namespace std;

int n, i, a1, a2, aux;

int main(){

        cout<<"Informe o valor de n:";
        cin>>n;

    for(i=1; i<=n; i++){

        if(i==1){
                cout<<"1 \n";
                a1=1;
        }
        else if(i==2){
                cout<<"1 \n";
                a2=1;
        }else{
            int aux=a1+a2;
            cout<<aux<<"\n";
            a2=a1;
            a1=aux;
        }
    }
    return 0;
}
