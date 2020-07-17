#include <stdio.h>
#include <stdlib.h>

char kelime[10];
int main(){
   while(1){
  
    printf("Bir kelime giriniz(cikmak icin -> 0) :");
    gets(kelime);
	printf("\n");
	if(kelime[0]=='0')
    break;
   int i,j=1,b=0,harf=0;;
   harf=strlen(kelime);
    
	for(i=0;i<harf;i++){
    		if(kelime[i]==kelime[harf-j]){
    		   b++;	
    		   j++;
			}
	}
	if(b==harf){
		printf("'%s' palindrome bir kelimedir.\n\n",kelime);
	}else{
		printf("'%s' palindrome bir kelime degildir.\n\n",kelime);
	}
 }
	system("pause");
	return 0;
}

