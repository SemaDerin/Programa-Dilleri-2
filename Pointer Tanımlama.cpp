#include <stdio.h>
int main()
{

int a = 10, b, c;

int *d = &a;

	printf("\n\nTemel pointer tanimlama :\n");
	
	printf(" a, b, ve c birer int tamsayi ve a = 10");
	
	printf("\n\n d ise bir tam sayi pointer'i ve a'nin adresini tutuyor: %p\n",  d); 
	printf("\n *d ile a'nin degerine ulasiyoruz a = %i\n",   *d); 
	printf("\n &a ile a'nin pointer adresine ulasiyoruz a = %p\n",   &a); 
	printf("\n &b ile b'nin pointer adresine ulasiyoruz : %p\n",   &b);
	printf("\n &c  ile c'nin pointer adresine ulasiyoruz : %p\n",   &c);
	printf("\n &d ile d'nin pointer adresine ulasiyoruz : %p\n\n", &d); 
}

