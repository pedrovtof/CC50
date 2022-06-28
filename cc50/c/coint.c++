#include <iostream>
#include <stdio.h>

using namespace std;

int main (void)
{ 

    int 
        m25 = 0,  m10 = 0,  m5 = 0, m1 = 0;

    float 
        i25 = 0.25, i10 = 0.10, i5 = 0.05, i1 = 0.01,
        i;

    cout<<"digite um valor : \n";

    cin>>i;

            do{
                cout<<"\n [ERROR] Invalido (*.*) \n";
            }
        while (i<=0);

    //dando valor a variavel

        while (i >= i25)
            {   
                i -= i25;
                m25 ++;
            }

        while (i >= i10)
            {  
                i -= i10;
                m10 ++;
            }

        while (i >= i5)
            {   
                i -= i5;
                m5 ++;
            }

        while (i >= i1)
            {   
                i -= i1;
                m1 ++;
            }

    cout<<"\n moedas \n";
    cout<<"\n 25 :"<<m25;
    cout<<"\n 10 :"<<m10;
    cout<<"\n 5 :"<<m5;
    cout<<"\n 1 :"<<m1;
    cout<<"\n";

return 0;

}
