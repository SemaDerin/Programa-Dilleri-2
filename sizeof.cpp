#include<stdio.h>




int a, b, gecici;

void degerdegistir ( int a,  int b){
	gecici= a;
	a=b;
	b=gecici;
	
	printf("a: %d  b %d \n ",a,b);
}
int main (){
	
	
	int a=5, b=10;
	degerdegistir(a,b);
	printf("a %d  b %d",a,b);
	return 0;	
	
	
}
