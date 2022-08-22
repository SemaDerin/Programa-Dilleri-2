#include <stdio.h>
int main()
{
   int arr1[25], i,n;
   
   printf("\n\n\n");    
   printf(" index sayisini giriniz :");
   scanf("%d",&n);
   
   printf(" %d adet sayi giriniz \n",n);
   for(i=0;i<n;i++)
   {
	
	  printf(" eleman - %d : ",i);
	  scanf("%d",arr1+i);
	 
   }
   printf(" Girilen elemanlar : \n");
   
   for(i=0;i<n;i++)
   {
	  printf(" eleman - %d : %d \n",i,*(arr1+i));	
   }
	   return 0;
}
