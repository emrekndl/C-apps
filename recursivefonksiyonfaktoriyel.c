#include <stdio.h>
#include <stdlib.h>

int fak(int n){
	if(n==0)
	 return 1;
	else
	 return n*fak(n-1);
	/*
	sayi==4
	fak(4)--> n=4 >>> 4*fak(3)-->n=3 >>> 3*fak(2) --> n=2 >>> 2*fak(1) --> n=1 >>> 1*fak(0) --> n=0 >> geriye fak(0)==1 değerini gönnderiyor.
	=> 1*fak(0)->1 yani fak(1)==1 => 2*fak(1) -> 2 yani fak(2)==2 => 3*fak(2) -> 6 yani fak(3)==6 => 4*fak(3) ->24 yani fak(4)==24.
	*/ 	
}

int main(){
	int sayi,deger;
	printf("Bir sayi giriniz :");scanf("%d",&sayi);
	deger=fak(sayi);
	printf("%d\n",deger);
	
	system("pause");
	return 0;
}

