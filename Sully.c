#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define I 5
int main(int argc, char **argv){(void)argc;int i;if(!(strcmp(argv[0], "./Sully")))i=I+1;else i=I;if(i>0){char name[40],namec[40],exec[40],cmd[100];sprintf(name,"Sully_%d",i-1);sprintf(namec,"%s.c",name);sprintf(exec,"./%s",name);char *a="#include%c<stdlib.h>%c#include%c<stdio.h>%c#include%c<string.h>%c#define%cI%c%d%cint%cmain(int%cargc,%cchar%c**argv){(void)argc;int%ci;if(!(strcmp(argv[0],%c%c./Sully%c)))i=I+1;else%ci=I;if(i>0){char%cname[40],namec[40],exec[40],cmd[100];sprintf(name,%cSully_%cd%c,i-1);sprintf(namec,%c%cs.c%c,name);sprintf(exec,%c./%cs%c,name);char%c*a=%c%s%c;FILE*%cfichier=NULL;fichier=fopen(namec,%cw%c);if(fichier!=NULL)fprintf(fichier,a,32,10,32,10,32,10,32,32,i-1,10,32,32,32,32,32,32,34,34,32,32,34,37,34,34,37,34,34,37,34,32,34,a,34,32,34,34,34,32,32,37,32,37,32,32,37,34);fclose(fichier);sprintf(cmd,%c/usr/bin/gcc%c-o%c%cs%c%cs%c&&%c%cs%c,name,namec,exec);system(cmd);}return(0);}";FILE* fichier=NULL;fichier=fopen(namec,"w");if(fichier!=NULL)fprintf(fichier,a,32,10,32,10,32,10,32,32,i-1,10,32,32,32,32,32,32,34,34,32,32,34,37,34,34,37,34,34,37,34,32,34,a,34,32,34,34,34,32,32,37,32,37,32,32,37,34);fclose(fichier);sprintf(cmd,"/usr/bin/gcc -o %s %s && %s",name,namec,exec);system(cmd);}return(0);}