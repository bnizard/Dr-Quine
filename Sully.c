#include <stdlib.h>
#include <stdio.h>
#define I 5
#define NAME "Sully_4"
#define NAMEC "Sully_4.c"
#define GCC "/usr/bin/gcc -o Sully_4 Sully_4.c && ./Sully_4"

int main(void){int i=I;if(i>0){char *a="#include%c<stdlib.h>%c#include%c<stdio.h>%c#define%cI%c%d%c#define%cNAME%c%cSully_%d%c%c#define%cNAMEC%c%cSully_%d.c%c%c#define%cGCC%c%c/usr/bin/gcc%c-o%cSully_%d%cSully_%d.c%c&&%c./Sully_%d%c%c%cint%cmain(void){int%ci=I;if(i>0){char%c*a=%c%s%c;FILE*%cfichier=NULL;fichier=fopen(NAMEC,%cw%c);if(fichier!=NULL)fprintf(fichier,a,32,13,32,13,32,32,i-1,13,32,32,34,i-2,34,13,32,32,34,i-2,34,13,32,32,34,32,32,i-2,32,i-2,32,32,i-2,34,13,13,32,32,32,34,a,34,32,34,34);fclose(fichier);system(GCC);}return(0);}";FILE* fichier=NULL;fichier=fopen(NAMEC,"w");if(fichier!=NULL)fprintf(fichier,a,32,13,32,13,32,32,i-1,13,32,32,34,i-2,34,13,32,32,34,i-2,34,13,32,32,34,32,32,i-2,32,i-2,32,32,i-2,34,13,13,32,32,32,34,a,34,32,34,34);fclose(fichier);system(GCC);}return(0);}