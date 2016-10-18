#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define I 5

int main(void){int i=I;if(i>0){char *name,*gcc;sprintf(name,"Sully_%d",--i);char *a="#include%c<stdlib.h>%c#include%c<stdio.h>%c#define%cI%c%d%c%cint%cmain(void)%cif(i>0){char*%cname;sprintf(name,%cSully_%d.c%c,--i);char%c*a=%c%s%c;FILE*%cfichier=NULL;fichier=fopen(name,%cw%c);if(fichier!=NULL)fprintf(fichier,a,32,10,32,10,32,32,i,10,10,32,32,32,34,i,34,32,34,a,34,32,34,34,10);}return(0);}%c";FILE* fichier=NULL;fichier=fopen(strcat(name, ".c"),"w");if(fichier!=NULL)fprintf(fichier,a,32,10,32,10,32,32,i,10,10,32,32,32,34,i,34,32,34,a,34,32,34,34,10);sprintf(gcc,"/usr/bin/gcc -o %s %s.c",name,name);}return(0);}