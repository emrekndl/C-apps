#include <stdio.h>
#include <stdlib.h>


 int main(){
int i=12;
float x=2.356;
char ch='s';
FILE *dosya;
dosya=fopen("dosya.txt","w");
fprintf(dosya,"%d %.3f %c",i,x,ch);
fclose(dosya);
	system("pause");
	return 0;
}

