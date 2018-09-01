#include<stdio.h>
typedef unsigned int UINT;
UINT PremiumDisplay(UINT);


int main(int argc , char * argv[])
{
	UINT iAge=0, iRet=0;
	
	printf("\n\nenter the age\n");
	scanf("%d",&iAge);
	
	iRet=PremiumDisplay(iAge);

	if(iAge == 0)
	{
		printf("error");
	}
	else
	{
		printf("Age of Premium is %d",iRet);
	}
return 0;
}

UINT PremiumDisplay(UINT iValue)
{
	UINT iPremium=0;

	if(iValue < 20 )
	{
		iPremium=20000;
	}
	else if((iValue >= 20 ) && (iValue <45))
	{
		iPremium=35000;
	}
	else if((iValue >=45) && (iValue < 70))
	{
		iPremium=52000;
	}
	else
	{
		iPremium=85000;
	}
	return iPremium;

}













