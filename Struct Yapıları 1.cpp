#include<stdio.h>
#include<stdlib.h>


struct film{ // film ad�nda bir struct olu�turduk.
	char* film_adi;
	char* yonetmen;
	int yil;
	float sure;
    };
    
    
    
    
    int main(){
    	
    struct film film1; // de�i�ken tan�mlad�k.	
    film1.film_adi= "Harry Potter";
    film1.yonetmen= "Alfonso Cuaron";
    film1.yil = 2002;
    film1.sure=2.55;
    	
    	
    //ekrana bu �ekilde yazd�rabiliriz.	
    printf("Filmin adi: %s\nFilmin Yonetmeni: %s\nFilmin ciktigi yil: %d\nFilmin Suresi: %.2f\n\n\n",film1.film_adi,film1.yonetmen,film1.yil,film1.sure );
    	
    //dizi �eklinde tan�mlayabiliriz.	
    struct film film2 ={ "The Godfather","Francis Ford",1972, 1.52};
		
    printf("Filmin adi: %s\nFilmin Yonetmeni: %s\nFilmin ciktigi yil: %d\nFilmin Suresi: %.2f\n\n\n",film2.film_adi,film2.yonetmen,film2.yil,film2.sure );
	
	
	struct film film3={ "","",2008, 2.44 };
	printf("Filmin adi: %s\nFilmin Yonetmeni: %s\nFilmin ciktigi yil: %d\nFilmin Suresi: %.2f\n\n\n",film3.film_adi,film3.yonetmen,film3.yil,film3.sure );


    struct film *film4; //struct pointer �eklinde tan�mlad�k 
    film4 = (struct film * )malloc (sizeof(struct film)) ; //haf�zadan yer ald�k!
    (*film4).film_adi ="Pulp Fiction";
    (*film4).yonetmen="Quentin Tarantino";
    (*film4).yil=1984;
    (*film4).sure=1.39;
   
printf("Filmin adi: %s\nFilmin Yonetmeni: %s\nFilmin ciktigi yil: %d\nFilmin Suresi: %.2f\n\n\n",film4->film_adi,film4->yonetmen,film4->yil,film4->sure );

	
    	
	}
