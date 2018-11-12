#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
struct udetail{
	char name[100];
	char pass[100],email[100];
	char cpass[100];
    char mob[11];
	char username[100];
	char sans[100];
	char adhr[100];
}p;
int i;
void login()
{
	int count=0,count1=0;
	char c1[100],c2[100];
	FILE *fp;
	fp=fopen("regis.txt","r");
	fflush(stdin);
	top:
		rewind(fp);
		system("cls");
		system("color 7");
		printf("\n\t\t\t\t\t\tWELCOME TO THE LOGIN PAGE");
	printf("\n\n\n\t\t\tEnter your username\t");
	gets(p.username);
	
	
	fflush(stdin);
	printf("\n\t\t\tEnter your password\t");
	gets(p.pass);
	while(!feof(fp))
	{
		fscanf(fp,"%s",c1);
		if(strcmp(p.username,c1)==0)
		{
			count++;
			if(count==1)
			{
			fscanf(fp,"%s ",c2);
		    if(strcmp(p.pass,c2)==0)
		    {
			count1++;
			break;
		    }
			}
						
		}
	}
	if(count==count1)
	{
		printf("\n\t\t\tVoila!! You are succesfully logged in");
	}
	else
	{
		printf("\n\n\t\t\tPassword/Username not matched please try again");
		getch();
		goto top;
	}
	fclose(fp);
	
}
void registration()
{
	char t1[100],t2[100];
	FILE *fp,*fp1;
	fp=fopen("regis.txt","r");
	fp1=fopen("forgot.txt","a");
	fflush(stdin);
	printf("\n\t\tEnter your name\t");
    gets(p.name);
    again1:
	fflush(stdin);
	
	printf("\n\t\tEnter you Email id\t");
	scanf("%s",p.email);
	while(!feof(fp))
	{
		fscanf(fp,"%s",t1);
		if(strcmp(t1,p.email)==0)
		{
			printf("\n\t\tThis email is already registered please re-enter the email \n\n");
			rewind(fp);
			goto again1;
			//break;
		}
	}
	fflush(stdin);
	
	
	again2:
		rewind(fp);
	printf("\n\t\tEnter your aadhar no\t");
	gets(p.adhr);
		while(!feof(fp))
	{
		fscanf(fp,"%s",t1);
		if(strcmp(t1,p.adhr)==0)
		{
			printf("\n\t\tThis Adhaar no is already registered please re-enter the no \n\n");
			rewind(fp);
			goto again2;
			
		}
	}
again3:
	rewind(fp);
	printf("\n\t\tEnter your mobile no.\t");
	scanf("%s",p.mob);
		while(!feof(fp))
	{
		fscanf(fp,"%s",t1);
		if(strcmp(t1,p.mob)==0)
		{
			printf("\n\t\tThis mob no is already registered please re-enter the no \n\n");
			rewind(fp);
			goto again3;
			
		}
	}
	again:
			fflush(stdin);
	printf("\n\t\tEnter your desired password\t");
	scanf("%s",p.pass);
		fflush(stdin);
	printf("\n\t\tRe-Enter the previous password\t");
	scanf("%s",p.cpass);
	if(strcmp(p.pass,p.cpass)==0)
	{
		printf("\n\n\t\tPassword matched\n");
	}
	else{
		printf("\n\t\tYour password didn't matched please refiil it");
		goto again;
	}
		fflush(stdin);
		again4:
			rewind(fp);
	printf("\n\t\tType your username\t");
	scanf("%s",p.username);
		while(!feof(fp))
	{
		fscanf(fp,"%s",t1);
		if(strcmp(t1,p.username)==0)
		{
			printf("\n\t\tThis username is already registered please re-enter the username \n\n");
			rewind(fp);
			goto again4;
			
		}
	}
		fflush(stdin);
	printf("\n\t\tAnswer this security question and remember this question ans for future reference\t");
	printf("\n\n\t\tEnter your first school friend name\t");
    gets(p.sans);
	printf("\n\t\t\t You are registered succesfully. Please login to continue");
	fprintf(fp,"\n%s %s %s %s %s %s %s",p.username,p.pass,p.sans,p.mob,p.name,p.email,p.adhr);
	fclose(fp);
	fprintf(fp1,"\n%s %s",p.adhr,p.sans);
	fclose(fp1);
	getch();
	login();
     	
}

int main()
{
	int n;
	printf("\n\n\t\t\t1:Registeration\n\t\t\t2:login\n\t\t\t3:Forgot Password");
	printf("\n\n\t\t\tEnter your choice\t");
	scanf("%d",&n);
	system("cls");
	switch(n)
	{
		case 1:
		registration();
		break;
		case 2:
		login();
		break;	
	}
}

