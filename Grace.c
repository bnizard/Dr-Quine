#include <stdlib.h>
#include <stdio.h>
#define FT(x)int main(){FILE* fichier=NULL;char *a="#include%c<stdlib.h>%c#include%c<stdio.h>%c#define%cFT(x)int%cmain(){FILE*%cfichier=NULL;char%c*a=%c%s%c;fichier=fopen(%cGrace_kid.c%c, %cw%c);if%c(fichier!=NULL)%cfprintf(fichier,a,32,10,32,10,32,32,32,32,34,a,34,34,34,34,34,32,32,32,10,32,32,10,32,32,10,10,10,10);return%c0;}%c#define%cANNEE%c2016%c#define%cMOIS%cSEPTEMBRE%c/*%cCommentaire%c*/%cFT(x);";fichier=fopen("Grace_kid.c", "w");if (fichier!=NULL) fprintf(fichier,a,32,10,32,10,32,32,32,32,34,a,34,34,34,34,34,32,32,32,10,32,32,10,32,32,10,10,10,10);return 0;}
#define ANNEE 2016
#define MOIS SEPTEMBRE
/*
Commentaire
*/
FT(x);