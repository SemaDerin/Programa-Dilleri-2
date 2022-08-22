#include <stdio.h>
#include <stdlib.h>
int main()
{
 int firstno,secondno,*ptr1=&firstno,*ptr2=&secondno;
 
   printf("\n\n iki sayidan en buyugunu bulunuz :\n"); 
   printf("\n\n\n\n");   
 
   printf(" ilk sayiyi giriniz : ");
   scanf("%d", ptr1);
   printf(" ikinci sayiyi giriniz : ");
   scanf("%d", ptr2); 


 if(*ptr1>*ptr2)
 {
  printf("\n\n en buyuk sayi: %d \n\n",*ptr1);
 }
 else
 {
  printf("\n\n en buyuk sayi: %d \n\n",*ptr2);
 }

}
