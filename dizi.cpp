#include <stdio.h>



int main(){
	int sayilar[]= {10,20,30,40,50,60,70,80,90,100};
	int sayi, i;
	printf("bir sayi giriniz");
	scanf("%d",&sayi);
	
	
	for (i=0; i<10; i++){
		if (sayilar[i]==sayi){
			printf("Arad�g�n�z sayi bulundu");
			break;
		}
		else {
			printf("arad�g�n�z sayi bulunamad�");
		}
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
