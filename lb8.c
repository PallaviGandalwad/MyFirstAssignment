//headerfile.h
#include<stdio.h>

void Display(char);


//mainfile.c

int main(int argc, char* argv[])
{
	char cWord;
	 
	printf("\nEnter the word \n");
	scanf("%c",&cWord);

Display(cWord);	
	

return 0;
}

//helper.c

void Display(char CValue)
{
	printf("%c",CValue);
}
