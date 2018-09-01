#include<stdio.h>

void Accept(int);

int main(int argc , char* argv[])
{

	int iRet ,iValue=0;
	
	printf("enter the number ->\n");
	scanf("%d",&iValue);

	Accept(iValue);



return 0;
}

void Accept(int iNo)
{
	int iCnt=0;
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("*");
	}	
}


