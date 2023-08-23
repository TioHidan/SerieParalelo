#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r=0,res=0,aux=0;
    int i,b,ps=0,q1=1;

    printf("Digite o tipo de associacao: \n ");
    printf(" (1 para paralelo) \n");
    printf(" (2 para em serie) \n");
    scanf("%d",&ps);
    printf("Agora digite quantos resistores voce quer:  \n ");
    scanf("%d",&b);


    if(ps==1){

         for(i=0;i<b;i++){
         printf("Agora digite o resistor numero   %d   ",q1);
         scanf("%f",&r);
           if(r>0){
           res=res+(1/r);
           aux=1/res;
           q1=q1+1;
           }
                else{
                printf("Nao e possivel numero com valor 0 digite novamente:  ");
                scanf("%f",&r);
                res=res+(1/r);
                aux=1/res;
                q1=q1+1;
             }
         }


         printf("A resistencia equivalente na associaçao paralelo sera de:   %.2f(OHMs)  ",aux);
    }
    else if(ps==2){

         for(i=0;i<b;i++){
         printf("Agora digite o resistor numero   %d  ",q1);
         scanf("%f",&r);
           if(r>0){

           res=res+r;

           q1=q1+1;
         }
           else{
             printf("Nao e possivel numero com valor 0 digite novamente:  ");
             scanf("%f",&r);
             res=res+r;
             q1=q1+1;
           }

    }
     printf("A resistencia equivalente na associaçao em serie sera de:   %.2f(OHMs)",res);
    }
    return 0;
}
