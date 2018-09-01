//headerfile.h

#include<stdio.h>

void Accept(int);


//mainfile.c

int main(int argc ,char * argv[])
{
	int ivalue=0;

	printf("enter the num");
	scanf("%d",&ivalue);

Accept(ivalue);

return 0;
}

//helperfile.c

void Accept(int iNo)
{
	
	while(iNo > 4 )
	{


	printf("*");
	iNo--;
	}




}











