#include<stdio.h>

float kitleindex(float boy, float kilo){
	float index;
	index= kilo/boy*boy;
	
	int sonuc=0;
	
	if (index<= 18){
		return sonuc+1;
	}
	
	else if(index<=25){
		return sonuc+2;
	}
	else if(index<=30){
		return sonuc+3;
	}
	else {
		return sonuc+4;
	}
	
	printf("Vucut kitle indexiniz : %f", index);
}

	int main(){
		
	float boy;
	float kilo;
	float index;
	int sonuc;
	printf("lutfen boyunuzu giriniz(1.75) ");
	scanf("%f",&boy);
	
	printf("\nlutfen kilonuzu giriniz  ");
	scanf("%d", &kilo);
	
	kitleindex(boy, kilo);
	
	if(sonuc==1){
		printf("\nZayif!");
	}	
	else if(sonuc ==2){
		printf("\nNormal!");
	
	}	
	else if(sonuc==3){
		printf("\nKilolu");
		
	}	
		else{
			printf("\nObez!");
		}
		
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	

