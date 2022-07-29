/* Klavyeden öðrenci sayýsý (en fazla 100) ve ders geçme notunu alarak bu bilgileri tanýmlanacak “hesapla” fonksiyonuna
gönderen bir “main” fonksiyonu hazýrlayýnýz. “hesapla” fonksiyonu kendisine gelen öðrenci sayýsý kadar notu klavyeden
okuyarak 100 elemanlý bir diziye kaydetmeli ve geçme notuna göre kaç tane öðrencinin dersten kaldýðýný bularak
fonksiyondan geri döndürürken, sýnýf ortalamasýný da ekrana yazdýrmalýdýr. Buna göre aþaðýda verilen alanlara “main” ve
“hesapla” fonksiyonlarýný yazýnýz*/


 #include<stdio.h>

    float hesapla (float ogrenci_sayisi, float gecme_notu){
	int array[100];
	float ogr_notu;
	int count;
	float toplam=0, ortalama;

	for( int i=0; i<ogrenci_sayisi;i++){
		
		printf("%d ogrencinin puanýný giriniz", i+1);
		scanf("%d", &array[i]);
		toplam+=array[i];
		if(array[i] >= gecme_notu){
		count++;
	}
	}
	
	  for(int i=0; i<ogrenci_sayisi; i++){
		
		printf("%d ogrencinin notu %d",i+1,array[i]);
	}
	
	

	
	printf("\nDersten geçen ogrenci sayisi %d",count);
	ortalama=toplam/ogrenci_sayisi;
	printf("\nDersin ortalamasi %2f", ortalama);
	
	
}


	int main(){
		
	float ogrenci_sayisi;
	float gecme_notu;
	int array[100];
	float ogr_notu;
	int count=0;
	
	printf("Ogrenci sayisini giriniz");
	scanf("%f", &ogrenci_sayisi);
	printf("Gecme notuun giriniz");
	scanf("%f", &gecme_notu);
		
	hesapla(ogrenci_sayisi, gecme_notu);
		
		
		
	}
