#include<stdio.h>


int f(int a){
	
	
	if(a < 1){
		return 0;
	}
	return (2*a)+f(a-1);
	


}


int main(){	


	int a;
	while(1){
		
		printf("Sayi Giriniz:");
		scanf("%d",&a);
		if(a > 2){
			break;	
		}
		
	}
	
	printf("Giriniz Sayýnýn Sonucu :  %d\n",f(a));
	

	
}
