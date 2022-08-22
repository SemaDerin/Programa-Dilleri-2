#include <stdio.h>
struct EmployeeAddress
{
char *ename;
char stname[20];
int pincode;
}
employee={"Ahmet Portakal","Karanfil Caddesi \n",654134},*pt=&employee;

int main()
{
 	
	printf("\n");
	printf(" %s adresi %s \n\n",pt->ename,(*pt).stname);
	return 0;
}
