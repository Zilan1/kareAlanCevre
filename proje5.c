#include <stdio.h>
#include <stdlib.h>

int main() {
	
   	//Karenin alaný ve çevresi
	//Deðer: Bir kenar 
	//Alan: Kenar*Kenar
	//Çevre: Kenar*4
	
	int kenar,alan,cevre;
	kenar=10;
	alan=kenar*kenar;
	cevre=kenar*4;
	printf("Alan: %d\n",alan);
	printf("Cevre: %d\n",cevre);
	
	return 0;
}
