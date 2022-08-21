#include<stdio.h>
#include<stdlib.h>
#include<string.h>


enum ay {
	Ocak=1, Sub, Mar, Nis, May, Haz, Tem, Agu, Eyl, Eki, Kas, Ara
};
typedef enum ay Ay;

//struct tanýmýný enum ile yapmanýn farklý bir yolu daha(2)
 typedef struct {
	
	char* film_adi;
	char* yonetmen;
	int yil;
	float sure;
	ay ay;
 } Film;

int main(){
	
	Film film1;
	film1.film_adi= "Harry Potter";
    film1.yonetmen= "Alfonso Cuaron";
    film1.yil = 2002;
    film1.sure=2.55;
    film1.ay= Ocak;
	printf("Filmin adi: %s\nFilmin Yonetmeni: %s\n Filmin ciktigi yil:%d- %d\nFilmin Suresi: %.2f \n\n\n",film1.film_adi,film1.yonetmen,Ocak,film1.yil,film1.sure);

	
	 Film film2 ={ "The Godfather","Francis Ford", 1972, 1.52,Haz};
	    printf("Filmin adi: %s\nFilmin Yonetmeni: %s\nFilmin ciktigi yil:%d- %d\nFilmin Suresi: %.2f\n\n\n",film2.film_adi,film2.yonetmen,Haz,film2.yil,film2.sure );

	
	
}
