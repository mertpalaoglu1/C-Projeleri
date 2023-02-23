#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void solaKaydir(int dizi[],int boyut,int n){ 
	int i,j,takas;
	for (i=0;i<n;i++){
		takas=dizi[0];//dizinin ilk elemanýný tutuyoruz.
		for(j=0;j<boyut-1;j++){
			dizi[j]=dizi[j+1];
		}
		dizi[boyut-1]=takas;//ilk elemaný son ekliyoruz.
	}
} 

int main(){
	srand(time(NULL));
	int dizi[10];
	int i,n;
	for(i=0;i<10;i++){
		dizi[i]=rand()%100+1;
		printf("%d ",dizi[i]);
	}
	printf("\nSola Kaydirma degeri giriniz:");
	scanf("%d",&n);
	solaKaydir(dizi,10,n);
	printf("Kaydirdiktan sonra:\n");
	for (i=0;i<10;i++){
		printf("%d ",dizi[i]);
	}
	return 0;
}
