#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	time_t ilk_zaman;	
	time (&ilk_zaman);
	printf("%.2lf\n",ilk_zaman);
	time_t varilacak_zaman=00.00;
	
	printf("%lf",difftime(varilacak_zaman,ilk_zaman));

}
