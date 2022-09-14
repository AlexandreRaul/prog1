#include <stdio.h>
#include <iostream>

using namespace std;

float nota1, nota2, media, exame, mf;

int main()
{
   cout<<"Informe a nota 1: \n";
   cin>>nota1;

   cout<<"Informe a nota 2: \n";
   cin>>nota2;
   media = (nota1 + nota2)/2.0;

   if(media >= 7.0){
        cout<<"O aluno esta aprovado! \n";
   }else if(media>=4){
        cout<<"O aluno esta de exame! \n\n";
        cout<<"Informe a nota do exame: \n";
        cin>>exame;
        mf=(media+exame)/2.0;
   }if(mf>=5){
        cout<<"O aluno esta aprovado com media final "<<mf<<".\n";
   }else{
        cout<<"O aluno esta reprovado com media final "<<mf<<". \n";
   }

        return 0;
}
