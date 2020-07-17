#include <stdio.h>
#include <stdlib.h>



void buyukharf(char h[]){
	char kucukkarekter='a',buyukkarekter='A';
	int i;
	for(i=0;h[i]!=NULL;i++){
       if(h[i]>=kucukkarekter)
	     h[i]=h[i]-(kucukkarekter-buyukkarekter);
	     /*
	      
		 */
		 
	}
	   printf("\nBuyuk harfli cumle :%s\n",h);
}

int main(){
    char cumle[100];
    printf("Kucuk harfli bir cumle giriniz :");
    gets(cumle);
    buyukharf(cumle);
	system("pause");
	return 0;
}

