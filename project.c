#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int j=0,i=0;
char deal;
int click;
void page1();															//page1
void continu();															//Continue
void logi();															//login
void signin();															//sign in
void constr();															//under construction tag
void home();															//home function
void booking();														//My booking
void ent();
void assignment();
void find();
void mybooking();
struct userdetail
{
	char sname[20];
	int num;
	char gender[2];
	char usrname[20];
	char password[20];
};

struct time
{
	int hour;
	int min;
};
struct details															//structure
	{
		char busname[20];
		int busno;
		char routename[20];
		char startdstn[20];
		char enddstn[20];
		int fare;
		struct time arrtime,depttime;
	};

struct logindetail
{
	char usrname[20];
	char password[20];
};

struct avail
{
	char name[20];
	char month[20];
	char day[10];
	int date;
};

struct logindetail ld; 
struct userdetail ud;
struct avail avil;
struct details detl[10];
int main()																//main
{
	printf("ENTER THE USER NAME AND PASSWORD\n\n");
	logi();
																//body function
}

	void home()
	{
		printf(" >->->->->->->->->->->->->->->->->->WELCOME<-<-<-<-<-<-<-<-<-<-<-<-<-<-<-<-<-<-< ");
	printf("\n\n *******************************************************************************\n");
	printf("\t\t\t\t1:Assignment");
	printf("\n\t\t\t\t2:Login/Sign In\n");
	printf("\t\t\t\t3:Home\n");
	printf("\t\t\t\t4:My Bookings\n");
	printf("\t\t\t\t5:Offers\n");
	printf("\t\t\t\t6:Cancellation\n");
	printf("\t\t\t\t7:About Us\n");
	printf("\n\n\n\t\t\t\tClick(1|2|3|4|5|6|7)\n\n");
	scanf("%d",&click);
	printf("\n________________________________________________________________________________\n");
	if(click==1||click==2||click==3||click==4||click==5||click==6||click==7)
	{
	switch(click)
	{
		case 1:
		printf("\t\t\t\tYou have selected Assignment of Buses\n\t");
		assignment();														
		break;
		case 2:
		printf("\t\t\t\tYou have selected Login OR Sign In\n\t");
		page1();															
		break;
		case 3:
		printf("\t\t\t\tYou have selected  Home\n\t");
		home();														
		break;
		case 4:
		printf("\t\t\t\tYou have selected My Booking\n\t");
		mybooking();														
		break;
		/*case 5:
		printf("You have selected Offers\n\t");
		offers();														
		break;
		case 6:
		printf("You have selected Cancellation\n\t");
		cancel();
		break;
		case 7:
		printf("\n\n\n\n\n\n\nAbout Us\n\t");
		about();														//about us call
		break;*/
		}
	}
	else
	{
		printf("\n\t\t\t\tEnter a valid code\t\t");
	}
	}
void continu()
	{	printf("\t\t\t\t\t\tDo you want to continue or not [Y/N]");
		char deal;
		do
		{
			scanf("%c",&deal);	
		}
		while(deal!='Y'&&deal!='y');
		return home();
	}		

void page1()															//page1 function
{
	char k;
	printf("\t\t\t\tWelcome to Login/Sign In of Mirror Travels\n");
	printf("\n_______________________________________________________________________________\n");
	printf("\n\t\t\t\tPlease click 'L'for login or 'S' for Sign In");
	scanf("%s",&k);
	switch(k)
	{
	case 'L':
	case 'l':
	{
		logi(); 
		home(); 														//login call
		break;     													
	}
	case 's':
	case 'S':
	{
		signin();														//signup call
		home();														
	}
	default:
	{
		printf("\nEnter a valid code!\t\t");
	}
	
}
	printf("\n_______________________________________________________________________________\n");
}
void signin()															//signin function
{
	
	ud.num=0;
	printf("\t\t\t\tEnter the details\n");
		printf("\n\t\t\t\t Enter Name");
		scanf("%s",ud.sname);
		printf("\n\t\t\t\tEnter User name:");
		scanf("%s",ud.usrname);
		printf("\n\t\t\t\tEnter Password:");
		scanf("%s",ud.password);
		printf("\n\t\t\t\tGender [m/f]");
		scanf("%s",ud.gender);
		printf("\n\t\t\t\tEnter number");
		scanf("%d",&ud.num);
	printf("\n_______________________________________________________________________________\n");

	printf("\n\n\t\t\t\tThe details you have entered are: \n");
		printf("\n\t\t\t\t Name \t%s",ud.sname);
		printf("\n \t\t\t\tPassword \t%s",ud.password);
		printf("\n \t\t\t\tuser name \t%s",ud.usrname);
		printf("\n\t\t\t\t gender \t%s",ud.gender);
		printf("\n \t\t\t\tmobile number\t %d",ud.num);
	printf("\n_______________________________________________________________________________\n");	
}

void logi()
{
	int s=0;
	char j[]={"admin"};
		printf("\n\t\t\t\tEnter User name:");
		scanf("%s",ld.usrname);
		printf("\n\t\t\t\tEnter Password:");
		scanf("%s",ld.password);
		if(strcmp(ld.usrname,j)==0&&strcmp(ld.password,j)==0)
		{
			home();
			
		}
		else
		{
			printf("\n\n\t\t\t\tThe User Name / Password You have entered is wrong\n\n");
			printf("\t\t\t\tPlease try again [1] or exit[2]");
			scanf("%d",&s);
			switch(s)
			{
				case 1:
				{
					logi();
				}
				case 2:
				{
				exit(0);
				}
			}
		}
	printf("\n_______________________________________________________________________________\n");
}

/*void home()																//home
{
	printf("\n\nBOOK YOUR TICKETS NOW!!");
	booking();
}*/

void booking()
{
	printf("\n_______________________________________________________________________________\n");
	printf("\n\t\t\t\tEnter the place you want to travel\n");
	printf("\t\t\t\t1: Chennai\n");
	printf("\t\t\t\t2: Coimbatore\n");
	printf("\t\t\t\t3: Mysore\n");
	printf("\t\t\t\t4: Bangalore\n");
	printf("\t\t\t\t5: Kochi\n");
	printf("\t\t\t\t6: Mangalore\n");
	printf("\t\t\t\t7: Trivandrum\n");
	printf("\t\t\t\t8: Goa\n");
	printf("\n\n\n");
	scanf("%d",&click);
	if(click==1||click==2||click==3||click==4||click==5||click==6||click==7||click==8)
	{
	switch(click)
	{
		case 1:
		{
			printf("\t\t\t\tYou have selected Chennai\n");
			ent();													
			break;
		}
		case 2:
		{
			printf("\t\t\t\tYou have selected Coimbatore\n");
			ent();													
			break;
		}
		case 3:
		{
			printf("\t\t\t\tYou have selected Mysore\n");
			ent();
																	
			break;
		}
		case 4:
		{
			printf("\t\t\t\tYou have selected Bangalore\n");
			ent();
																
			break;
		}
		case 5:
		{
			printf("\t\t\t\tYou have selected Kochi\n");
			ent();
			break;
		}
		case 6:
		{
			printf("\t\t\t\tYou have selected Mangalore\n");
			ent();
			
			break;
		}
		case 7:
		{
			printf("\t\t\t\tYou have selected Trivandrum\n");
			ent();
			
			break;
		}
		case 8:
		{
			printf("\t\t\t\tYou have selected Goa\n");
			ent();
			break;
		}
		
		}
	}
	else
	{
		printf("\n\t\t\t\tEnter a valid code\t\t");
	}
				
		}
void ent()
{
	printf("\n_______________________________________________________________________________\n");
			printf("\n\n\n");
			printf("\t\t\t\tEnter your name ");
			scanf("%s",avil.name);
			printf("\n\t\t\t\tEnter the month of travel ");
			scanf("%s",avil.month);
			printf("\n\t\t\t\tEnter the day of travel ");
			scanf("%s",avil.day);
			printf("\n\t\t\t\tEnter the date of travel ");
			scanf("%d",&avil.date);
			
			printf("\n\t\t\t\tYou have Booked your tickets!!");
			printf("\n_______________________________________________________________________________\n");
			home();
}
void assignment()
{
	printf("\n________________________________________________________________________________\n");
	int n=0;
	printf("\nEnter the number of buses to be added\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("\n\n\t\t\t\tBUS %d",i+1);
	printf("\n\n\t\t\t\tBUS NUMBER ");
	scanf("%d",&detl[i].busno);
	printf("\n\n\t\t\t\tBUS NAME");
	scanf("%s",detl[i].busname);
	printf("\n\n\t\t\t\tDEPARTURE TIME  [hour minute]");
	scanf("%d %d",&detl[i].depttime.hour,&detl[i].depttime.min);
	printf("\n\n\t\t\t\tSTARTING DESTINATION");
	scanf("%s",detl[i].startdstn);
	printf("\n\n\t\t\t\tARRIVING DESTINATION");
	scanf("%s",detl[i].enddstn);
	printf("\n\n\t\t\t\tROUTE VIA");
	scanf("%s",detl[i].routename);
	printf("\n\n\t\t\t\tARRIVAL TIME  [hour minute]");
	scanf("%d %d",&detl[i].arrtime.hour,&detl[i].arrtime.min);
	printf("\n\n\t\t\t\tFARE");
	scanf("%d",&detl[i].fare);
	printf("\n________________________________________________________________________________\n");
	home();
	}
}
void mybooking()
{
	printf("\n_______________________________________________________________________________\n");
	printf("\n\t\t\t\tName      %s",avil.name);
	printf("\n\t\t\t\tMonth of travel%s",avil.month);
	printf("\n\t\t\t\tDay of travel %s",avil.day);
	printf("\n\t\t\t\tDate of travel %d",avil.date);
printf("\n_______________________________________________________________________________\n");
}

