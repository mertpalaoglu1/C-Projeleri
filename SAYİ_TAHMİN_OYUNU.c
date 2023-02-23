#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*Copyright=MERT PALAOÐLU*/ 
int main(){
	const int ARALIK=15;
	int hak=1;
	printf("Sayi tahmin etme oyununa hos geldin!\n");
	printf("----------------------------------------\n");
	printf("1 ile %d arasinda bir sayi tuttum.\n",ARALIK );
	printf("Sayimi bulmak icin 3 hakkin var!\n");
		int sayi,tahmin; 
		int kontrol=0;
		srand(time(NULL));
		sayi= rand()%ARALIK+1;
	//hile için alttaki // kaldir.
	printf("(hile) Tutulan sayi =%d\n", sayi);
	
	printf("Tahmin giriniz:");
	scanf("%d", &tahmin);

	while (sayi!=tahmin && hak<3){ 

		if (tahmin<sayi) {printf("Tuttugum sayi daha buyuk.\n");
		}
		else if (tahmin>sayi){	printf("Tuttugum sayi daha kucuk.\n");
		}
		printf("Tahmin giriniz:");
		scanf("%d",&tahmin);
		hak++;
		}
		
		if (hak==3 && tahmin!=sayi){
			printf("KAYBETTIN!! Tuttugum sayi %d idi." , sayi);
		}
		else{ 
			printf("TEBRIKLER!! %d. Hakkinda sayimi buldun.",hak);
		}
	
return 0;	
}
