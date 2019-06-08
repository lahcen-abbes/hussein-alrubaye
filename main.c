#include <stdio.h>
#include <conio.h>

void main()
{
    int a,b;
    double c=a/b;  //double accepte des nombres réels 15 nombres aprés la vergule
    char op;
    printf("\n\n\n entrez le nombre a et un opérateur (+,-,*,/,%) et le nombre b svp\n");
    scanf("%d",&a);
    scanf("%c",&op);
    scanf("%d",&b);
    switch (op)
    {
        case'+':printf("l'addition est :%d + %d = %d\n",a+b);break;
        case'-':printf("la sustraction est :%d - %d = %d\n",a-b);break;
        case'*':printf("l'addition est :%d * %d = %d\n",a*b);break;
         if(b==0) {
           printf("impossible diviser par 0 \n");
         }


        case'/':printf("la division est : %d / %d = %.10f\n",a,b,a/(double)b);break;
        case'%':printf("le reste de division est %d % %d = %d",a%b);break;
        default :printf("erore\n");break;
        }
        system("pause");
}
