#include <stdio.h>
#include <stdlib.h>


int main(){
  int vize[20],i,toplam=0;
  float ortalama=0;
  for(i=0;i<20;i++){
     printf("%d. vize notu :",i+1);
     scanf("%d",&vize[i]);
     toplam+=vize[i];
  }
  ortalama=toplam/10.0;
  FILE *dosya;
  dosya=fopen("vize.txt","w");
  fprintf(dosya,"Dizi Elemanlari\n");
   for(i=0;i<20;i++){
      fprintf(dosya,"%d-",vize[i]);    
    }
   fprintf(dosya,"\n\nVize Ortalamasi : %f ",ortalama);
   fclose(dosya);
	system("pause");
	return 0;
}

