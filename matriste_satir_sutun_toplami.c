#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int i,j,toplam=0;
	int m [5][5];
	srand(time(NULL));
	//Matrisi Doldurma ve Yazdirma 
	//i satýrlar icin j sutunlar icin.
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			m[i][j]=rand()%10;//0 ve 10 arasýnda olur bu bir kalýp. //formul %(maks-min)+min;  örn maks 15 min 5 %10+5
			printf(" %d",m[i][j]);
		}
		printf("\n");
		
	}
	
	
	//Sutun toplami bulma 
	for(i=0;i<5;i++){
		toplam=0;
		for(j=0;j<5;j++){
			toplam+=m[j][i];
		}
		
		printf("\n%d. Sutun Toplami=%d", i+1,toplam);
	}
	
	printf("\n");
	
	//Satirlarinin Toplamini bulma
	for(i=0;i<5;i++){
		toplam=0;
		for(j=0;j<5;j++){
			toplam+=m[i][j];
		}
		
		printf("\n%d. Satir Toplami=%d", i+1,toplam);
	}
	return 0;
}
