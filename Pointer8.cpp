#include <stdio.h>
int* findGreater(int*, int*);
int main()
{
 int numa=0;
 int numb=0;
 int *result;
 
 printf("\n");
 printf(" ilk sayiyi giriniz : ");
 scanf("%d", &numa);
 printf(" ikinci sayiyi giriniz : ");
 scanf("%d", &numb); 	

 result=findGreater(&numa, &numb);
 printf(" Buyuk olan sayi: %d \n\n",*result);
}

int* findGreater(int *n1, int *n2)
{
 if(*n1 > *n2)
  return n1;
 else
  return n2;
}
