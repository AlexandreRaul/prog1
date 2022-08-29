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
        cout<<"O aluno nao esta aprovado! \n";
   }else{
        cout<<"Oaluno nao esta aprovado! \n";

        if(media >= 4.0){
                cout<<"O aluno esta de exame! \n";

         cout<<"Informe a sua media final! \n";
         cin>>media;

         cout<<"Informe a nota do exame! \n";
         cin>>exame;

         mf = (media + exame)/2.0;

        }else{
            cout<<"O aluno esta reprovado! \n";
        }



     }
        return 0;
}
