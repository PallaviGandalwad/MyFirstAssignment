//myheaderfile.h
#include<stdio.h>

int Subtract(int);


//mainfile.c

int main(int argc,char* argv[])
{
	int ivalue=0;

	int iret=0;
	
	printf("enter the value\n ");
	scanf("%d",&ivalue);

	iret=Subtract(ivalue);	
	if(iret==0)
	{
	printf("error");
	}
	else
	{
	printf("result is %d\n",iret);
	}
return 0;
}

int Subtract(int iNo)
{
	int iAns=0;
	iAns= iNo-5;
	
	return iAns;

}
