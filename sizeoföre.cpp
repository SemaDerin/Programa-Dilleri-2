#include <stdio.h>
#include <stdlib.h>


int main(){
	int *iptr ;
	int boyut;
	printf ("Dizinin boyutunu giriniz  ");
	scanf("%d",&boyut);
	
	
	
	iptr = (int *) malloc(boyut*sizeof(int));
	
	int i;
	
	for(i=0; i<boyut; i++){
		
		iptr[i]=i*5;
	}
	
	for (i=0; i<boyut; i++){
		printf("%d. eleman %d\n",i+1,iptr[i]);
	}
	
	
	
	free(iptr);
	
	
	
	
	
}
