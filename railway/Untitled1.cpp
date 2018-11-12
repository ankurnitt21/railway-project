#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
char a[10][10]={"55","56"};
int val[10];
int i;
for(i=0;i<2;i++)
val[i]=atoi(a[i]);
printf("%d",val[1]);

	

}
