#include<stdio.h>
/*
Commentaire
*/
int main()
{
	/*
	mainCommentaire
	*/
	char*a="#include<stdio.h>%c/*%cCommentaire%c*/%cint%cmain()%c{%c%c/*%c%cmainCommentaire%c%c*/%c%cchar*a=%c%s%c;%c%cprintf(a,10,10,10,10,32,10,10,9,10,9,10,9,10,9,34,a,34,10,9,10,9,32,10,10,10,32,10,10,9,32,10);%c%creturn%c(0);%c}%c%cint%cnothing()%c{%c%creturn%c(0);%c}";
	printf(a,10,10,10,10,32,10,10,9,10,9,10,9,10,9,34,a,34,10,9,10,9,32,10,10,10,32,10,10,9,32,10);
	return (0);
}

int nothing()
{
	return (0);
}