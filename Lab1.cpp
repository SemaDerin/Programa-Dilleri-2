/* Klavyeden ��renci say�s� (en fazla 100) ve ders ge�me notunu alarak bu bilgileri tan�mlanacak �hesapla� fonksiyonuna
g�nderen bir �main� fonksiyonu haz�rlay�n�z. �hesapla� fonksiyonu kendisine gelen ��renci say�s� kadar notu klavyeden
okuyarak 100 elemanl� bir diziye kaydetmeli ve ge�me notuna g�re ka� tane ��rencinin dersten kald���n� bularak
fonksiyondan geri d�nd�r�rken, s�n�f ortalamas�n� da ekrana yazd�rmal�d�r. Buna g�re a�a��da verilen alanlara �main� ve
�hesapla� fonksiyonlar�n� yaz�n�z*/


 #include<stdio.h>

    float hesapla (float ogrenci_sayisi, float gecme_notu){
	int array[100];
	float ogr_notu;
	int count;
	float toplam=0, ortalama;

	for( int i=0; i<ogrenci_sayisi;i++){
		
		printf("%d ogrencinin puan�n� giriniz", i+1);
		scanf("%d", &array[i]);
		toplam+=array[i];
		if(array[i] >= gecme_notu){
		count++;
	}
	}
	
	  for(int i=0; i<ogrenci_sayisi; i++){
		
		printf("%d ogrencinin notu %d",i+1,array[i]);
	}
	
	

	
	printf("\nDersten ge�en ogrenci sayisi %d",count);
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
