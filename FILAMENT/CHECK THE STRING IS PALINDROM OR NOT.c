#include<stdio.h>
#include<string.h>
int main()
{
	char string[1000],temp[1000];
	
	printf("ENTER THE STRING = ");
	scanf("%s",&string);
	
    strcpy(temp,string);
	strrev(temp);
	
	if(strcmp(string,temp)==0)
	printf("YOUR STRING IS PALINDROM = %s",string);
	else
	printf("YOUR STRING IS NOT PALLINDROM = %s",temp);
}
