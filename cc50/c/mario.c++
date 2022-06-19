#include <iostream>
using namespace std;
int main (void)
{

int tamanho, i, j = 0;
string degrau = "#", espacamento = " ";
inicio:
cout<<"escolha quantos degraus [1-7] \n ";
cin>>tamanho;

if (tamanho < 1 || tamanho > 8)
    {
        cout<<"Erro! tente novamente :( \n";
        goto inicio;
    }
else
    {
      for 
        (i=1; i <= tamanho;i++)
            {
           for (int q=6;q>=i;q--)
                {
                    cout<<espacamento;
                }
                for (j=1;j<=i;j++)
                {

                   cout<<degrau;
                }
                    cout<<"\n";
            }
    }


return 0;
}