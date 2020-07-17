#include <stdio.h>
#include <stdlib.h>


int main(){
     char alfabe[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int i;
      for(i=0;i<52;i++){
      	printf("%c==%d\n",alfabe[i],alfabe[i]);
      	
	  }
	  printf("\n");
	system("pause");
	return 0;
}

