#include <stdio.h>
#include <stdlib.h>


int toplam(int x){
	if(x==0)
	  return 0;
	else
	 return x+toplam(x-1);
	
	/*
	sayi==4
	toplam(4)--> n=4 >>> 4+toplam(3)-->n=3 >>> 3+toplam(2) --> n=2 >>> 2+toplam(1) --> n=1 >>> 1+toplam(0) --> n=0 >> geriye toplam(0)==0 deðerini gönnderiyor.
	=> 1+toplam(0)->1 yani toplam(1)==1 => 2+toplam(1) -> 3 yani toplam(2)==3 => 3+toplam(2) -> 6 yani toplam(3)==6 => 4+toplam(3) ->10 yani toplam(4)==24.
	*/ 
	
}

int main(){
	int sayi,sonuc;
	printf("Bir sayi giriniz: ");scanf("%d",&sayi);
	sonuc=toplam(sayi);
	printf("%d\n",sonuc);
	
	system("pause");
	return 0;
}
