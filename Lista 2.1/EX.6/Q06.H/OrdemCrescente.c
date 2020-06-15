#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char **argv)
{
    int n1, n2, n3, n4; //entradas
    int m1,  //primeira menor nota
        m2,  //segunda menor nota
        m3,  //terceira menor nota
        m4;  //quarta menor nota


        printf("\nN1: ");
        scanf("%d",&n1);
        printf("\nN2: ");
        scanf("%d",&n2);
        printf("\nN3: ");
        scanf("%d",&n3);
        printf("\nN4: ");
        scanf("%d",&n4);


    printf("\nENTRADAS: %d %d %d %d\n",n1,n2,n3,n4);

    // iniciando as variaveis
    n1 == 0;
    n2 == 0;
    n3 == 0;
    n4 == 0;
   //desenvolva aqui o processamento


   // para encontrarmos o primeiro numero:

   if (n1 <= n2 && n1 <= n3 && n1 <= n4)
        m1 = n1;
    else {
        if (n2 <= n1 && n2 <= n3 && n2 <= n4)
            m1 = n2;
         else {
            if (n3 <= n1 && n3 <= n2 && n3 <= n4)
                m1 = n3;
         else {
           m1 = n4;
         }
     }
 }

  // para encontrarmos o segundo numero:

   if ((n1>=n2 && n1<=n3 && n1<=n4)||(n1<=n2 && n1>=n3 && n1<=n4)||(n1<=n2 && n1<=n3 && n1>=n4))
         m2 = n1;
    else {
         if ((n2>=n1 && n2<=n3 && n2<=n4)||(n2<=n1 && n2>=n3 && n2<=n4)||(n2<=n1 && n2<=n3 && n2>=n4))
            m2 = n2;
         else {
             if((n3>=n1 && n3<=n2 && n3<=n4)||(n3<=n1 && n3>=n2 && n3<=n4)||(n3<=n1 && n3<=n2 && n3>=n4))
                m2 = n3;
         else {
                m2 = n4;
        }
    }
   }

  // para encontrarmos terceiro numero:

   if ((n1>=n2 && n1>=n3 && n1<=n4)||(n1>=n2 && n1<=n3 && n1>=n4)||(n1<=n2 && n1>=n3 && n1>=n4))
        m3 = n1;
     else {
         if ((n2>=n1 && n2>=n3 && n2<=n4)||(n2>=n1 && n2<=n3 && n2>=n4)||(n2<=n1 && n2>=n3 && n2>=n4))
            m3 = n2;
         else {
           if ((n3>=n1 && n3>=n2 && n3<=n4)||(n3>=n1 && n3<=n2 && n3>=n4)||(n3<=n1 && n3>=n2 && n3>=n4))
                m3 = n3;
              else {
                  m3  = n4;
             }
         }
     }

   // para encontrarmos o quarto numero:

     if (n1>=n2 && n1>=n3 && n1>=n4)
         m4=n1;
        else {
             if (n2>=n1 && n2>=n3 && n2>=n4)
                 m4=n2;
            else {
              if (n3>=n1 && n3>=n2 && n3>=n4)
                 m4=n3;
                 else {
                        m4 = n4;
                 }
            }
        }

   // caso os quatro termos sejam iguais:
   if (n1 == n2 && n2 == n3 && n3 == n4) {
       printf("\n Os numeros inseridos sao todos equivalentes!");
   }


    printf("\n\nSAIDAS em ordem crescente: %d %d %d %d\n\n",m1, m2, m3, m4);
    system("pause");

    return 0;
}
