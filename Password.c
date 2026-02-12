#include <stdio.h>
#include<string.h>
#include<ctype.h> 
int main()
{
char pass[100];
int length;
int hasU=0,hasL=0,hasD=0,hasS=0;
int score=0,i;
printf("Enter password :");
scanf("%s",&pass);
length=strlen(pass);
if(length>=8)
score+=2;
else
score+=1;
for(i=0;i<length;i++)
{
if(isupper(pass[i]))
hasU=1;
else if(islower(pass[i]))
hasL=1;
else if(isdigit(pass[i]))
hasD=1;
else
hasS=1;
}
if(hasU)
score+=2;
if(hasL)
score+=2;
if(hasD)
score+=2;
if(hasS)
score+=2;
if(score<=4)
printf("WEEK PASSWORD");
else if(score<=7)
printf("MEDIUM PASSWORD");
else
printf("STRONG PASSWORD");
}
