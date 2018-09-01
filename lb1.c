#include<stdio.h>
 int Divide(int ,int);


//mainfile.c

int main(int argc ,char* argv[])
{
	int ivalue1=0, ivalue2=0 ,iret=0;

	printf("enter the no1 and no2");
	scanf("%d%d",&ivalue1,&ivalue2);

	iret=Divide(ivalue1,ivalue2);
printf("st->",iret);
	return 0;
}
//helperfile.c

int Divide(int iNo1,int iNo2)
{

	int iAns=0;
	if(ino2 > )
	{
	return -1; 
	}
	 
	iAns=iNo1/iNo2;
return iAns;
}

