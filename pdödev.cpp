#include<stdio.h>
#include <stdlib.h>
#include <time.h> 


int main(){

		srand(time(NULL));

	for(int i=0;i<=1;i++)
	{
		int zar1, zar2, toplam=0, puan;
		zar1 = 1+(rand()%6);
    	zar2 = 1+(rand()%6);
		toplam=zar1+zar2;
		printf("%d , %d Toplam : %d\n",zar1, zar2,toplam);
		
		if(i==0){
			
		if(toplam==7 || toplam==11){
			printf("Kazandýnýz\n\n");
			
		}	
			
		else if(toplam==2 || toplam==3 || toplam==12){
			printf("Kaybettiniz\n\n");
			
		}	
			
	 	else{
	 		printf("PUANINIZ : %d\n\n",toplam);
	 		puan=toplam;
		 }
          }
		 
		 
	
		if(i==1){
			
			
			if(puan==toplam && toplam!=7){
				
			printf("Kazandiniz\n\n");
				
			}
			else{
				
				printf("Kaybettiniz");
			}
		}	
			
		}
	    
	    
    }
	
	






