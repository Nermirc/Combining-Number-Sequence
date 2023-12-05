#include <stdio.h>
#include <stdlib.h>

int main()
{
   int emir[100],enver[100];
   int *sayi1,*sayi2;
   int n,m;
   int i;
   printf("Ilk dizimizin eleman sayisi (max 50) : \n");
   scanf("%d",&n);
   for(sayi1=emir;sayi1<emir+n;sayi1++)
   {
       printf("Eleman %d :",sayi1-emir);
       scanf("%d",sayi1);
   }
   printf("Ikinci dizimizin eleman sayisi (max 50) : \n");
   scanf("%d",&m);
   for(sayi2=enver;sayi2<enver+m;sayi2++)
   {
       printf("Eleman %d : ",sayi2-enver);
       scanf("%d",sayi2);
   }
   printf("Ilk dizimiz : \n ");
    for(i=0;i<n;i++)
    {
        printf("%4d",*(emir+i));
    }
        printf("\n");
    printf("Ikinci dizimiz : \n");

    for(i=0;i<m;i++)
    {
        printf("%4d",*(enver+i));
    }

    for(sayi1=emir+n,sayi2=enver;sayi2<enver+m;sayi1++,sayi2++)
    {
        *sayi1=*sayi2;
    }
    printf("\n");
    printf("Birlestirmeden sonra : \n");
    for(i=0;i<n+m;i++)
    {
        printf("%4d",*(emir+i));
    }
}
