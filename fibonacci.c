#include <stdio.h>
#include <stdlib.h>

int main(){
	int tmp[20],i;
	tmp[0]=1;
	tmp[1]=1;
	
	for(i=2;i<20;i++)
	 {
	 	tmp[i]=tmp[i-1]+tmp[i-2];
	 }
	 
	 for(i=0;i<20;i++){
	 	printf(" %d \n",tmp[i]);
	 }
	
	system("pause");
	return 0;
}


