#include <stdio.h>
#include <stdlib.h>

int tekciftMi(int sayi){
	int a=0;
	if (sayi%2==0){
	 a=1;
	}
	return a;
}

int main(){
	
	int sayi=10;
	int a=tekciftMi(sayi);
	if (a==1){
		printf("Cifttir.");
	}
	else {
		printf("Tektir.");
	}
	return 0;
}
