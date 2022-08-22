#include <stdio.h>
void findFactorial(int,int*);
int main()
{
        int fact;
        int num1;
        
		printf("\n");	
	printf(" Bir sayi giriniz : ");
	scanf("%d",&num1);		 

        findFactorial(num1,&fact);
        printf(" %d sayisinin faktoriyeli : %d \n\n",num1,fact);
        return 0;
}

void findFactorial(int n,int *f)
{
       int i;

       *f =1;
       for(i=1;i<=n;i++)
       *f=*f*i;
}
