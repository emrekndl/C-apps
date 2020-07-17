#include <stdio.h>
#include <stdlib.h>

int basamaksayisi(int n);

int basamaksayisi(int n){
	int i=1;
	do{
		n=(n-n%10)/10;
	/* 
	i=1, n=123 -->n=(123-123%10)/10 = (123-3)/10 = 120/10= 12
	i=2, n=12 -->n=(12-12%10)/10 = (12-2)/10 = 10/10 = 1
	i=3, n=1; ==> sayi=i=3
	*/
		i++;
	}while(n>9);
	return i;
}

int main(){
	int sayi;
	printf("Bir sayi giriniz :");scanf("%d",&sayi);
	printf("Girdiginiz sayi %d bsamaklidir.\n",basamaksayisi(sayi));
	
	system("pause");
	return 0;
}
