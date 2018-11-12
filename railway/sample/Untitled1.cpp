#include<stdio.h>
int main()
{
	
	char p[100],q[100],r[100],s[100],t[100],u[100],v[100],n[100],n1[100],a[100];
	FILE *fp;
	fp=fopen("t2c.txt","r");
	printf("enter the train no");
	scanf("%s",n);
	while(!feof(fp))
	{
		fscanf(fp,"%d",&n1);
		if(n==n1)
		{
	      fscanf(fp,"%s %s %s %s %s %s %s",p,q,r,s,t,u,a);	
		  break;	
		}
	}
	printf("\n\t%s",a);
	fclose(fp);
}
