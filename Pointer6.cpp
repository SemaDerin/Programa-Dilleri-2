#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,n;
    float *element;

	printf("\n"); 	
    printf(" Girilecek eleman miktarini belirleyiniz (1 - 100 arasi): ");
    scanf("%d",&n);
    //n eleman icin memory ayrildi 
    element=(float*)calloc(n, sizeof(float));  
    if(element==NULL)
    {
        printf(" hata.");
        exit(0);
    }
    printf("\n");
    for(i=0;i<n;++i)  
    {
       printf(" sayi %d: ",i+1);
       scanf("%f",element+i);
    }
    for(i=1;i<n;++i)  
    {
       if(*element<*(element+i)) 
           *element=*(element+i);
    }
    printf(" En buyu sayi :  %.2f \n\n",*element);
    return 0;
}
