#include <stdio.h>
#include <stdlib.h>

int main() {
	
   	//Karenin alan� ve �evresi
	//De�er: Bir kenar 
	//Alan: Kenar*Kenar
	//�evre: Kenar*4
	
	int kenar,alan,cevre;
	kenar=10;
	alan=kenar*kenar;
	cevre=kenar*4;
	printf("Alan: %d\n",alan);
	printf("Cevre: %d\n",cevre);
	
	return 0;
}
