#include <stdio.h>
#include <stdlib.h>


 int main(){

FILE *dosya;
char veriler[10];
dosya=fopen("dosya.txt","r");
fread(veriler,1,8,dosya);
veriler[9]=0;
fclose(dosya);
printf("Dosyanini içindeki 8 veri :\n%s\n",veriler);

	system("pause");
	return 0;
}

