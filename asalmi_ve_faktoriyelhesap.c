#include <stdio.h>
#include <stdlib.h>
int asalMi(int s){
	int i,a=1;
	for (i=2;i<s;i++){
			if (s%i==0){
				a=0;
				break;
		}
		}
		
		if (a==0){
		return 0;	
	}
	else {
		return 1;
	}
}
void faktoriyelKontrol(int s){
	int i,f=1;
	for(i=1;i<=s;i++){
		f=f*i;
	}
	printf("%d faktoriyel %d",s,f);
}

int main(){
	int sayi;
	printf("sayi giriniz:");
	scanf("%d",&sayi);
	int a=asalMi(sayi);
	if (a==1){
		printf("%d sayisi asaldir\n",sayi);
	}
	else {
		printf("%d sayisi asal degildir.\n",sayi);
	}
	faktoriyelKontrol(sayi);
	return 0;
}
