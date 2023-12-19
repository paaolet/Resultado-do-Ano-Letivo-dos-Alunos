#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
  
  char disciplina[3][50];
  float mediasbimestrais[3][5];
  float totalpontosano[3];
  int c, x, c1;
  float notinha, notanecessaria;
  
  void nome(){
  	int cnt;
  	for (cnt=0;cnt<=2;cnt++){
	  printf ("Escreva o nome da %dº disciplina:\n" , cnt+1);
	  scanf("%s", &disciplina[cnt]);
    }
  }
  void medias(char *x){
  	int co;
  	for (co=0;co<=3;co++){
  	  printf ("Digite a nota da %dº media de %s:\n", co+1, x);
  	  scanf("%f", &mediasbimestrais[c][co]);
  	  while((mediasbimestrais[c][co]<0)||(mediasbimestrais[c][co]>10)){
  	  	printf ("Nota inválida, digite novamente!!\n");
		printf ("Digite a nota da %dº media de %s:\n", co+1, x);
  	    scanf("%f", &mediasbimestrais[c][co]);
	  }
	}
  }
  float soma(int x){
  	int co;
  	float y;
  	for (co=0;co<=3;co++){
  	  y=y+mediasbimestrais[x][co];	
	}
	return y;
  }
  void exame (float &y){
  	y = 10.0-(y)/4;
  }
  
  main(){
   setlocale (LC_ALL, "Portuguese");
   
   nome();
   
   for (c=0;c<=2;c++){
   	 medias(disciplina[c]);
   }
   	
   for (c1=0;c1<=2;c1++){
   	 totalpontosano[c1]=soma(c1);
   	 printf("7");
   }
   printf ("\n-------------------------------------\n");
   for (c=0;c<=2;c++){
	   	if (totalpontosano[c]>=24){
	   		printf ("Aprovado em %s\n", disciplina[c]);	
		}
	   	if(totalpontosano[c]<15){
		    printf ("Retido em %s\n", disciplina[c]);
	   	}
   }
   for (c = 0; c<=2; c++){
	if((totalpontosano[c]>=15)&&(totalpontosano[c]<24)){
	     printf ("Exame final em %s\n", disciplina[c]);
	     printf ("Digite a nota obtida no exame:\n");
	     exame(totalpontosano[c],c);
	     scanf("%f", &notinha);
	      while((notinha<0)||(notinha>10)){
  	  	    printf ("Nota inválida, digite novamente!!\n");
	        printf ("Digite a nota obtida no exame:\n");
		    scanf("%f", &notinha);
	      }
	     fflush(stdin);
	     if (notinha>=notanecessaria){
	     	printf("Resultado após exame: aprovado em %s\n\n", disciplina[c]);
		 }else{
		 	printf ("Resultado após exame: retido em %s\n\n", disciplina[c]);
		 }
	   }
	}
}
