//Soru 1: Main fonksiyonu i�erisinde verilen bir do�al say�ya kadar olan (bu say� dahil) t�m say�lar�n
//toplam�n� rek�rsif bir fonksiyon kullanarak hesaplayan�z.


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
