#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
char dizi [10];

printf("kelime giriniz: ");
scanf("%s",&dizi);
int boyut=strlen(dizi);
char tersi[boyut]; //önceki dizinin boyutu kadar 
int i,j=0 ;//biri artýp biri azalýcak tüm dizi tersine aktarýlýyor.
for (i=boyut-1; i>=0; i--){
		tersi[j]=dizi[i];
		j++;
		}
int kontrol=0;						
	for (i=0; i<boyut; i++){
		if (dizi[i]!= tersi [i]) {
			printf("palindrom degildir!");
			kontrol=1;
			break;
					}
	}
	if(kontrol==0){
		printf("palindromdur! ");
	}

	return 0;
}
