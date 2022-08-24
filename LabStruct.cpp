#include <stdio.h>


int main(){
	
	struct student {
		int number;
		char name[40];
		char surname [40];
		float midtermGrade ;
		
	};
	
	struct student student[3];
	
	for (int i=0;i<3;i++){
		printf("%d. ogrencinin numarasini giriniz",i+1);
		scanf("%d",&student[i].number);
		printf("%d. ogrencinin adini giriniz",i+1);
		scanf("%s",&student[i].name);
		printf("%d. ogrencinin soyadini giriniz",i+1);
		scanf("%s",&student[i].surname);
		printf("%d. ogrencinin vize notunu giriniz",i+1);
		scanf("%f",&student[i].midtermGrade);
		printf("\n\n\n\n");
	}
	
	
	
	for (int i=0;i<3;i++){
		
		
		printf("Kayit numarası\n\n",i+1);
		printf("Adi  %s\n ",student[i].name);
		printf("Soyadi  %s\n ",student[i].surname);
		printf("Numarasi %d\n",student[i].number);
		printf("Vizeden aldigi not %2.f\n\n\n",student[i].midtermGrade);


		
		
		
		
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	}
	
	
	
	
	
	
	

