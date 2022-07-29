//Soru 1: Main fonksiyonu içerisinde verilen bir doðal sayýya kadar olan (bu sayý dahil) tüm sayýlarýn
//toplamýný rekürsif bir fonksiyon kullanarak hesaplayanýz.


#include<stdio.h>

int toplam(int n){
	if (n==0){
		return 0;
	}
	else {
		return (n+toplam(n-1));
	}
}

int main(){
	
  toplam(5);
  toplam(10);
  printf("\n%d",toplam(5));
  printf("\n%d",toplam(10));
}
