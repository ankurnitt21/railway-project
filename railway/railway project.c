#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
struct passenger
{
	int tn,pnr,nos;
	char age[10][10],name[10][10],clas[100],cn;
	int charge;
	int csn;
}p;

 int h[10],src[10],i,j,k,a[11][5];
 
                                                                                                             //seat booking and display of matrix
int seatbookndisp()
{

	FILE *fp;
		fp=fopen("seat matrix.txt","r");
	int tn=p.tn,q;

	while(!feof(fp))
	{
      fscanf(fp,"%d",&q);
	if(tn==q)
	{
		for(i=0;i<11;i++)
		{
			for(j=0;j<5;j++)
			{
				fscanf(fp,"%d ",&a[i][j]);
			}

		}
		}
	}
		int val,aj[p.nos];
	   for(i=0;i<p.nos;i++)
	{
		val=0;
		for(j=0;j<2;j++)
		val=val*10+p.age[i][j]-'0';
		aj[i]=val;
}

if(aj[0]<55)
{
char s[5]={'L','M','U','L','U'};
for(i=0;i<5;i++)
{
	printf("\t\t%c  ",s[i]);
}
printf("\n");
	for(i=0;i<11;i++)
	{
		for(j=0;j<5;j++)
		{

			printf("\t\t%d  ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	fclose(fp);
	int z,b;
	int k;
	st:
	printf("Enter the seat no. you want to book\n");
	for(i=0;i<p.nos;i++)
	{
		scanf("%d",&h[i]);
	}
	int w,x,y;
	for(i=0;i<p.nos;i++)
	{
	w=h[i];
	x=(w/5);
	y=(w%5)-1;
if(a[x][y]!=1)
	a[x][y]++;
	else
	{
	printf("these seats are not available please select again\n\n");
    goto st;
    }
    }
    printf("\n");
printf("Your seat has been booked as you can see in seat matrix:\n");
for(i=0;i<5;i++)
{
	printf("\t\t%c ",s[i]);
}
printf("\n");
		for(i=0;i<11;i++)
	{
		for(j=0;j<5;j++)
		{

			printf("\t\t%d ",a[i][j]);
		}
		printf("\n");
	}
fclose(fp);
fp=fopen("seat matrix.txt","a");
fprintf(fp,"\n%d\n",tn);
for(i=0;i<11;i++)
{
	for(j=0;j<5;j++)
	{
		fprintf(fp,"%d ",a[i][j]);
	}

}

	fclose(fp);

} 
		
	for(i=0;i<p.nos;i++)
			{
				if(aj[0]>=55)
				{
				
			for(j=0;j<11;j++)
			{
							
					if(a[j][0]<1)
					{
						a[j][0]++;
						src[i]=j*5+1;	
						break;					
					}
				
		    }
		}
		}


		if(j!=11&&aj[0]>=55)
		{
			printf("\n\t\tYour seat is secured\n\n\n");
			char s[5]={'L','M','U','L','U'};
            for(i=0;i<5;i++)
			{
			printf("\t\t%c  ",s[i]);
			}
			printf("\n");
			for(i=0;i<11;i++)
			{
			for(j=0;j<5;j++)
			{
			printf("\t\t%d  ",a[i][j]);
			}
			printf("\n");
			}
				printf("\nyour seats are:\t");
			for(i=0;i<p.nos;i++)
			{
			
				printf("%d ",src[i]);
			}
			fp=fopen("seat matrix.txt","a");
			fprintf(fp,"\n%d\n",tn);
			for(i=0;i<11;i++)
			{
			for(j=0;j<5;j++)
			{
			fprintf(fp,"%d ",a[i][j]);
			}
			}
			for(i=0;i<p.nos;i++)
			{
				h[i]=src[i];
			}

			fclose(fp);
		}
       

		if(j==11&&aj[0]>=55||j==11&&aj[0]>=55)
		{
			int n;
			printf("\n\n\t\t\t\t\tNo lower berth available\t\t\n");
			printf("\t\t\t\t  Please press enter button to continue");
			top:
			getch();
			
			system("cls");
		
			printf("\n\t\t\t\tSelect any berth according to you\n");
		    printf("\n\n\t\t\t1.Middle berth\n\t\t\t2.Upper berth\n\t\t\t3.Side lower berth\n\t\t\t4.Side upper berth\n");
		    printf("\n\t\t\tEnter your choice\t");
		    scanf("%d",&n);
		
		    switch(n)
		    {
		    	case 1:                                                                           //lower berth allocation
		    		for(i=0;i<p.nos;i++)
		       	{
			    
				
			      for(j=0;j<11;j++)
			{
							
					if(a[j][1]<1)
					{
						a[j][1]++;
						src[i]=j*5+2;	
						break;					
					}	
		    }
		    
		    }
		    if(j==11)
		    {
		    	printf("\t\t\tNo seats available in this berth please select again");
		    	goto top;
			}
		    if(j!=11)
		{
			printf("\n\t\tYour seat is secured\n\n\n");
			char s[5]={'L','M','U','L','U'};
            for(i=0;i<5;i++)
			{
			printf("\t\t%c  ",s[i]);
			}
			printf("\n");
			for(i=0;i<11;i++)
			{
			for(j=0;j<5;j++)
			{
			printf("\t\t%d  ",a[i][j]);
			}
			printf("\n");
			}
			printf("\nyour seats are:\t");
			for(i=0;i<p.nos;i++)
			{
				
				printf("%d ",src[i]);
			}
			fp=fopen("seat matrix.txt","a");
			fprintf(fp,"\n%d\n",tn);
			for(i=0;i<11;i++)
			{
			for(j=0;j<5;j++)
			{
			fprintf(fp,"%d ",a[i][j]);
			}
			}
			for(i=0;i<p.nos;i++)
			{
				h[i]=src[i];
			}

			fclose(fp);
		}
		         
		        
		        break;
		        
		        case 2:                                                                                  //upper berth allocation
		        	for(i=0;i<p.nos;i++)
		       	{
			    
				
			      for(j=0;j<11;j++)
			{
							
					if(a[j][2]<1)
					{
						a[j][2]++;
						src[i]=j*5+3;	
						break;					
					}
				
		    }
		 }
		    if(j==11)
		    {
		    	printf("\t\tNo seats available in this berth please select again");
		    	goto top;
			}
		 
		 if(j!=11)
		{
			printf("\n\t\tYour seat is secured\n\n\n");
			char s[5]={'L','M','U','L','U'};
            for(i=0;i<5;i++)
			{
			printf("\t\t%c  ",s[i]);
			}
			printf("\n");
			for(i=0;i<11;i++)
			{
			for(j=0;j<5;j++)
			{
			printf("\t\t%d  ",a[i][j]);
			}
			printf("\n");
			}
			printf("\nyour seats are:\t");
			for(i=0;i<p.nos;i++)
			{
				
				printf("%d ",src[i]);
			}
			fp=fopen("seat matrix.txt","a");
			fprintf(fp,"\n%d\n",tn);
			for(i=0;i<11;i++)
			{
			for(j=0;j<5;j++)
			{
			fprintf(fp,"%d ",a[i][j]);
			}
			}
			for(i=0;i<p.nos;i++)
			{
				h[i]=src[i];
			}

			fclose(fp);
		}
		  
		  		        break;
		
		        case 3:                                                                                                       //side lower allocation 
		        	for(i=0;i<p.nos;i++)
		       	{
			    
				
			      for(j=0;j<11;j++)
			{
							
					if(a[j][3]<1)
					{
						a[j][3]++;
						src[i]=j*5+4;	
						break;					
					}
				
		    }
	}
	   if(j==11)
		    {
		    	printf("\t\tNo seats available in this berth please select again");
		    	goto top;
			}
		    
		    if(j!=11)
		{
			printf("\n\t\tYour seat is secured\n\n\n");
			char s[5]={'L','M','U','L','U'};
            for(i=0;i<5;i++)
			{
			printf("\t\t%c  ",s[i]);
			}
			printf("\n");
			for(i=0;i<11;i++)
			{
			for(j=0;j<5;j++)
			{
			printf("\t\t%d  ",a[i][j]);
			}
			printf("\n");
			}
			printf("\nyour seats are:\t");
			for(i=0;i<p.nos;i++)
			{
				
				printf("%d ",src[i]);
			}
			fp=fopen("seat matrix.txt","a");
			fprintf(fp,"\n%d\n",tn);
			for(i=0;i<11;i++)
			{
			for(j=0;j<5;j++)
			{
			fprintf(fp,"%d ",a[i][j]);
			}
			}
			for(i=0;i<p.nos;i++)
			{
				h[i]=src[i];
			}

			fclose(fp);
		}
			          
		        
		        break;
		
		        case 4:                                                                                //side upper allocation snrc
 		        	for(i=0;i<p.nos;i++)
		       	{
			    
				
			      for(j=0;j<11;j++)
			{
							
					if(a[j][4]<1)
					{
						a[j][4]++;
						src[i]=j*5+5;	
						break;					
					}
				
		    }
		       if(j==11)
		    {
		    	printf("\t\tNo seats available in this berth please select again");
		    	goto top;
			}
		    if(j==11)
		    {
		    	printf("No seat vacant please select again");
		    	goto top;
			}
}
		          
		          if(j!=11)
		{
			printf("\n\t\tYour seat is secured\n\n\n");
			char s[5]={'L','M','U','L','U'};
            for(i=0;i<5;i++)
			{
			printf("\t\t%c  ",s[i]);
			}
			printf("\n");
			for(i=0;i<11;i++)
			{
			for(j=0;j<5;j++)
			{
			printf("\t\t%d  ",a[i][j]);
			}
			printf("\n");
			}
				printf("\nyour seats are:\t");
			for(i=0;i<p.nos;i++)
			{
			
				printf("%d ",src[i]);
			}
			fp=fopen("seat matrix.txt","a");
			fprintf(fp,"\n%d\n",tn);
			for(i=0;i<11;i++)
			{
			for(j=0;j<5;j++)
			{
			fprintf(fp,"%d ",a[i][j]);
			}
			}
			for(i=0;i<p.nos;i++)
			{
				h[i]=src[i];
			}

			fclose(fp);
		}
		        
		        break;
		        
		        
				default:
				printf("You entered the wrong choice");
				break;		
			}
	}
		

}                                                                                                                                            //seat display
int seatmatrix()
{
	
	int sm,ssm,a[11][5];
				FILE *fp;
				char c[5]={'L','M','U','L','U'};
				fp=fopen("seat matrix.txt","r");
				
				printf("\n\t\tEnter the train no. to display its seat matrix\t");
				scanf("%d",&sm);
				printf("\n\n\t\tSeats matrix for %d train\n",sm);
                                                                                        
				int i,j;
				for(i=0;i<5;i++)
				printf("\t\t  %c ",c[i]);
				printf("\n");

				while(!feof(fp))
				{
				fscanf(fp,"%d",&ssm);
				if(sm==ssm)
				{

				for(i=0;i<11;i++)
				{
					for(j=0;j<5;j++)
					{
						fscanf(fp,"%d ",&a[i][j]);

						//printf("\t\t%d ",a[i][j]);
					}

				    }
			//	getch();
	            }
		}
		for(i=0;i<11;i++)
		{
			for(j=0;j<5;j++)
			{
				printf("\t\t  %d ",a[i][j]);
			}
			printf("\n");
		}

				char m[1];
				printf("\n\n Do you wanna to go to main menu ? (y/n)");
				fflush(stdin);
				scanf("%s",m);

				if(strcmp(m,"y")==0)
				{
			    list();
			}
				else
				exit(0);

		}                                                                                                                                    //list of admin and user
void details()
{
	int n;
	system("cls");

	printf("\n\n\n\t\t1.Admin login");
//	printf("\n\n\t\t2.User registerstion or login");
	printf("\n\n\n\t\tEnter you preference\t");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf(" \n\t\t Press any key to continue:");
    	getch();
    	system("cls");
    	security();
			break;
	}
}
                                                                                                               //show list of trains                                                     

void showlist(char a[],char b[])
{
    char x[100],z[100]={".txt"},d;
    x[0]=a[2];
    x[1]=b[2];
    strcat(x,z);
	FILE *fp;
	fp=fopen(x,"r");

d=fgetc(fp);
while(d!=EOF)
{
		printf("%c",d);
		d=fgetc(fp);
}
getch();
fclose(fp);	
}                                                         
                                                                                                                                            //admin login
int security()
{
	FILE *fp1,*fp2;
	char user[100],pass[100];
	fp1=fopen("f1.txt","r");
	fp2=fopen("f2.txt","r");

	fgets(user,12,fp1);
	fflush(stdin);
	fgets(pass,9,fp2);
		char u[90],p[90];
		int i,j;
	printf("\n\n\t\t\t           Welcome to the Admin login page of railway reservation system\n\n\n");
	begin:


    	printf(" \n\nEnter the login username:-  ");

    	gets(u);
    	printf("Enter the login password:-  ");

    	int a;
    	char c;
    	up:
    	i=0;
    	while(1)
    	{
    		c=getch();

    		if(c==13)
    		break;
    		printf("*");
    		p[i]=c;
    		i++;
		}
		if(p[0]=='\0')
		goto up;
		p[i]='\0';

		if(strcmp(user,u)==0&&strcmp(pass,p)==0)
		{
			printf("\n\n\n\t\t\t\t\tCongratulation you are Succesfully logged in");
			printf("\n\n\t\t\t\t\tEnter any key to continue...");
			getch();
			system("cls");
			list();
		}
		else
		{
		printf("\n\n\t\t\tUsername or password is invalid please give details again");
		getch();
		system("cls");
		goto begin;
	    }
    	getch();
    	system("cls");
    	fclose(fp1);
}                                                                                                                                        //(Main)display list of items
int list()
{
	system("cls");
    
	printf("\t1.Train list\n\n");
	printf("\t2.Train seat matrix\n\n");
	printf("\t3.Book train\n\n");
	printf("\t4.Search PNR Detail\n\n");
//	printf("\t5.Cancel tickets\n\n");
	printf("\t5.Exit");
    printf("\n\n\tSelect any options from above\t");
	input();
}                                                                                                                                            
                                                                                                                                             //choice input
int input()
{
	int n;
	char b[100],d[100];
	scanf("%d",&n);

	switch(n)
	{

		case 1:
			  
				printf("\tEnter any key to proceed");
				start:
					getch();
					system("cls");
					
				printf("\n\tEnter your Boarding station\t");
			    scanf("%s",b);
				printf("\n\tEnter your Destination station\t");
				scanf("%s",d);
				getch();
				system("cls");

			showlist(b,d);
			char z;
			printf("\n\n\t\tDo you wanna to go to main menu (y/n)\t");
			fflush(stdin);
			scanf("%c",&z);
			if(z=='y')
			list();
			else
			break;

		
		case 2:                                                                                                                         //seatmatrix
			{
				seatmatrix();
				break;
			}

			case 3:                                                                                                                       // booking section
			{
				char c[100],d[100];

				FILE *jk,*pf,*lm,*kj;
				pf=fopen("pnr.txt","r");
				jk=fopen("booked.txt","a");
				kj=fopen("seatwithpnr.txt","a");
				system("cls");
				printf("enter the source station\t");
				fflush(stdin);
				gets(c);
				printf("enter the destination\t");
				fflush(stdin);
				gets(d);
				system("cls");
				
					
					showlist(c,d);
			
		        getch();
		        

				printf("\n\nEnter the train no.\t");
				scanf("%d",&p.tn);
				printf("\nEnter the No.of seats\t");
			    scanf("%d",&p.nos);
			    int i;
			    for(i=0;i<p.nos;i++)
			    {
				
		        printf("\nEnter the name of passenger\t");
				fflush(stdin);
				gets(p.name[i]);
				printf("\nEnter the age of passenger\t");
				fflush(stdin);
				gets(p.age[i]) ;
			
		     	}
		
			
			
			   seatbookndisp();                                                                                  //payment section
			   FILE *py;
			   py=fopen("payment.txt","r");
			   int a,b;
			   
			   while(!feof(py))
			   {
			   fscanf(py,"%d",&a);
			   if(a==p.tn)
			   {
			   	fscanf(py,"%d",&b);
			   	break;
			   }
	       }
			   if(p.tn==a)
			   {
			   	p.charge=b*p.nos;
			   }

			
				srand(0);
				p.cn=rand()%26+'A';
				srand(0);
				p.csn=rand()%13;
				
				                                                                                                          //taking pnr no from file
				int na;
			    fscanf(pf,"%d",&na);
				fclose(pf);
				na++;
					pf=fopen("pnr.txt","w");
				fprintf(pf,"%d",na);
				fclose(pf);

				p.pnr=na;
					
				fprintf(jk,"\n%d %d  %d %c%d",p.pnr,p.tn,p.charge,p.cn,p.csn);
				fprintf(kj,"\n%d %d",p.pnr,p.nos);
				fclose(kj);
			for(i=0;i<p.nos;i++)
			{
				fprintf(jk," %s %s ",p.name[i],p.age[i]);
				}	
			
				pf=fopen("seatno.txt","a");
				fprintf(pf,"\n%d",p.pnr);
				for(i=0;i<p.nos;i++)
				{
					fprintf(pf," %d",h[i]);
				}
				fclose(pf);
				printf("\n\n\t\t\t Enter any key to see the details of your confirmed ticket");
				getch();
				system("cls");
				printf("\n\n\t\t\tYour ticket has been confirmed see your details");
				printf("\n\n\t\t\tPnr no:%d\n\t\t\tTrain no:%d\n\t\t\tTotal Amount:%d\n\t\t\tCoach no:%c%d",p.pnr,p.tn,p.charge,p.cn,p.csn);
				
				
				for(i=0;i<p.nos;i++)
				{
					printf("\n\t\t\tName and Age of %d:  ",i+1);
					printf("%s <%s>",p.name[i],p.age[i]);
					
				}
				printf("\n\t\t\tSeat no:  ");
				for(i=0;i<p.nos;i++)
				{
					printf("%d ",h[i]);
				}
				fclose(jk);
				}
				char u1[10];
			printf("\n\n\n\n\n\n\t\tDo you wanna to go to main menu ?  (y\\n)");
			fflush(stdin);
			gets(u1);
			if(strcmp(u1,"y")==0)
			{
				list();
			}
			if(strcmp(u1,"n")==0)
			{
				exit(1);
			}

		break;
		                                                                                                                        //pnr details
		case 4:
			{
				
				FILE *pn,*xy,*li;
				long long int z,c=-1,t; 
				pn=fopen("booked.txt","r");
				li=fopen("seatwithpnr.txt","r");
              //  xy=fopen("seatno.txt","r");
				int p,q,n;
				char tmp[100];
				system("cls	");
				printf("Enter PNR no. for search\t");
				scanf("%d",&p);
               while(!feof(li))
               {
               	fscanf(li,"%d",&z);
               	if(z==p)
               	{
               		fscanf(li,"%d",&n);
               		break;
				   }
			   }
			   fclose(li);
			//	printf("Enter the no of seats you have booked\t");
			//	scanf("%d",&n);
				int sn[n];
				while(!feof(pn))
				{
					fscanf(pn,"%d",&q);
					if(p==q)
					{
						int am,trn,ag,csno;
						char pname[20],c,cno;
						fscanf(pn,"%d  %d %c%d",&trn,&am,&cno,&csno);
						int i;
						char name[10][10],age[10][10];
						for(i=0;i<n;i++)
						{
						fscanf(pn," %s %s",&name[i],&age[i]);
					    }
						printf("\n\t\tDetails of PNR no.%d\n\n ",q);
						    printf("\t\tTrain no:%d\n",trn);
						for(i=0;i<n;i++)
						{
							printf("\t\tName and age of passenger %d:  ",i+1);
							printf("%s <%s> ",name[i],age[i]);
						    printf("\n");
						}
				 
						printf("\t\tTotal Amount=%d\n\t\tCoach no=%c%d",am,cno,csno);
						printf("\n");
						break;
						

					}
					else
					{
						fscanf(pn, "%100[^\n]", tmp);
					}
				}
				fclose(pn);
				int i;
				pn=fopen("seatno.txt","r");
				while(!feof(pn))
				{
					fscanf(pn,"%d",&q);
					if(p==q)
					{
					   for(i=0;i<n;i++)
                       {
                           fscanf(pn,"%d",&sn[i]);
                       }
					}
				}
				printf("\t\tSeat no's: ");
				for(i=0;i<n;i++)
                {

                    printf("%d ",sn[i]);
                }
				fclose(pn);

				printf("\n\n\t\t\t\t\t...Searching is end");

				char gh[10];
				printf("\n\t\t\t Do you wanna to go to main menu ?  (y/n)");
				scanf("%s",gh);
				if(strcmp(gh,"y")==0)
				{
					list();
				}


			}                                                                                                                //exit
			case 6:
				{
					exit(0);

				}

			}
	}

int main()
{

	system("cls");
       system("color 3");
		FILE *fptrd;
	char c;
	fptrd=fopen("design.txt","r");
	c=fgetc(fptrd);
	int i;

	while(c != EOF)
	{
		printf("%c",c);
		c=fgetc(fptrd);
	}

	fclose(fptrd);
	getch();
	details();
}
