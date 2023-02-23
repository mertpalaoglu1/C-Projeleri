#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
#define SIZE 6
/*COPYRÝGHT BY MERT PALAOÐLU*/
int modHesaplama(int liste[][SIZE], int sutunNo){
	int i, sayac[10] = {0,0,0,0,0,0,0,0,0,0};
	for(i=0;i<SIZE;i++){
		sayac[liste[i][sutunNo]]++;
	}
	int maxSayilan=0;
	int sutunMod=0;
	for (i=0;i<10;i++){
		if (sayac[i] > maxSayilan){
			maxSayilan = sayac[i];
			sutunMod = i;
		}
	}
	 if (maxSayilan==1)
            {
            	printf("Mod bulunmamaktadir.\n");
            	return 0;
			}
	
	return sutunMod;
}

int enkucukBul(int liste[]){
	int enkucuk=liste[0];
	int i;
		for(i=0;i<SIZE;i++){
			if(liste[i]<enkucuk){
				enkucuk=liste[i];
			}
		}	
	return enkucuk;
}

int enbuyukBul(int liste[]){
	int enbuyuk=liste[0];
	int i;
		for(i=0;i<SIZE;i++){
			if(liste[i]>enbuyuk){
				enbuyuk=liste[i];
			}
		}
	return enbuyuk;
}

float ortalamaHesapla(int liste[]){
	float toplam=0;
	int i;
		for(i=0;i<SIZE;i++){	
			toplam+=liste[i];
		}
		return toplam/SIZE;
}
	
void ekranaYazdir(int liste[SIZE][SIZE]){
	int i,j;
	printf("Dizi Yazdiriliyor:\n---------------------\n");
	for(i=0;i<SIZE;i++){
		for(j=0;j<SIZE;j++){
			printf("%d ",liste[i][j]);
		}	
		printf("\n");
	}
	printf("---------------------\n");
}


void matrisDoldur(int liste[SIZE][SIZE]){
	int i,j;
	for(i=0;i<SIZE;i++){
		for(j=0;j<SIZE;j++){
			liste[i][j]=rand()%10;
		}
	}
}

int main(){
	srand(time(NULL));
	int liste[SIZE][SIZE];
	matrisDoldur(liste);
	ekranaYazdir(liste);
	int i;
		for (i=0;i<SIZE;i++) { //Fonksiyonlarý printte çaðýrdým.
    		printf("%d.satirin ortalamasi= %.2f, En kucuk degeri = %d, En buyuk degeri= %d\n",i+1, ortalamaHesapla(liste[i]), enkucukBul(liste[i]), enbuyukBul(liste[i]));
  		}
 	
 	printf("---------------------\n");
	int bulunacakSutun=rand()%SIZE; 
	int mod=modHesaplama(liste,bulunacakSutun);
	printf("%d. sutunun modu= %d", bulunacakSutun+1, mod); // Eðer mod yoksa 0 döndürüyor.

	return 0;
	}
