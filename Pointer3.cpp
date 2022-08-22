#include <stdio.h>
int main()
{
   int firstno, secondno, *ptr, *qtr, sum;
   
   printf("\n\n iki sayiyi toplama :\n"); 
   printf("--------------------------------\n");   
 
   printf(" ilk sayiyi giriniz : ");
   scanf("%d", &firstno);
   printf(" ikinci sayiyi giriniz : ");
   scanf("%d", &secondno);   
 
   ptr = &firstno;
   qtr = &secondno;
 
   sum = *ptr + *qtr;
 
   printf(" Girilen sayilarin toplami : %d\n\n",sum);
 
   return 0;
}
