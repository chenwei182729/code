#include <stdlib.h>
#include <stdio.h>
int 
main(void)
{
	char ch='a';
	char *cp=&ch;
	char *b,*c,*d;
	printf("& cp=%x\n",cp);
	b=(cp++);
	c=(cp++);
	d=(cp++);
	*b='B';
	*c='C';
	*d='d';
	printf("& b=%x\n",b);
	printf("& c=%x\n",c);
	printf("& d=%x\n",d);

	printf("===================\n");
	cp=&ch;
	printf("& cp=%c\n",*cp);
	cp++;
	printf("cp=%c\n",*cp);
	cp++;
	printf("cp=%c\n",*(cp));
	cp++;
	printf("cp=%c\n",*(cp));
#if 0
	char *string="ABCEFGHIJKLMN";
	char *cstr=string;
	
	printf("%c",*cstr);
#endif 
	return 0;
}
