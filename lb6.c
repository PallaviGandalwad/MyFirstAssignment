//myeader.h
#include<stdio.h>

void Accept(int);



//mainfile.c
int main(int argc,char* argv[])
{

	int iValue=0;

	printf("\n Enter the number ");
	scanf("%d",&iValue);
	
	Accept(iValue);

return 0;
}

//helperfile.c
void Accept(int iNo)
{
	int iCnt=0;
	while(iCnt < iNo)
	{
	printf("*");
	iCnt++;
	}

}









