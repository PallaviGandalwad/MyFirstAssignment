//headerfile.h
#include<stdio.h>
void Display(int);


//mainfile.c

int main(int argc, char* argv[])
{
	int ino =0, iret=0;
	
	printf("enter the no\n");
	scanf("%d",&ino);
	
	/*if(ino == 0)
	{
	printf("error\n");
	}
	else
	{
	printf("\nprint Demo or Hello\n\n");
	}*/
	Display(ino);
	
return 0;
}
void Display(int iNo )
{
	if(iNo < 10)
	{
	printf("hello\n");
	}
	else
	{
	printf("demo");
	}
}













