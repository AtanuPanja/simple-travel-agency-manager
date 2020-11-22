#include<stdio.h>
struct TravelAgency
{
	char name[50];
	char driv_lic[50];
	char route[50];
	float km;
}d1,d2,d3;
int main(int argc, char *argv[])
{
	printf("This program takes details of 3 drivers\n");
	printf("Enter details of driver 1\n");
	printf("Enter name:\t");
	gets(d1.name);
	printf("\nEnter driving license number:\t");
	 
	gets(d1.driv_lic);
	printf("\nEnter route:\t");
	 
	gets(d1.route);
	printf("\nEnter kilometres:\t");
	 
	scanf("%f",&d1.km);
	printf("========================");
	printf("\nEnter details of driver 2\n");
	printf("Enter name:\t");
	 getchar();
	gets(d2.name);
	printf("\nEnter driving license number:\t");
	 
	gets(d2.driv_lic);
	printf("\nEnter route:\t");
	 
	gets(d2.route);
	printf("\nEnter kilometres:\t");
	 
	scanf("%f",&d2.km);
	printf("========================");
	printf("\nEnter details of driver 3\n");
	printf("Enter name:\t");
	getchar();
	gets(d3.name);
	printf("\nEnter driving license number:\t");
	 
	gets(d3.driv_lic);
	printf("\nEnter route:\t");
	 
	gets(d3.route);
	printf("\nEnter kilometres:\t");
	 
	scanf("%f",&d3.km);
	printf("========================");
	printf("\nNow this program will show all details of the 3 drivers in beautiful format\n");
	printf("Driver 1\n");
	printf("Name:\t%s\n",d1.name);
	printf("Driving License Number:\t");
	puts(d1.driv_lic);
	printf("Route:\t%s\n",d1.route);
	printf("Kms:\t%f\n",d1.km);
	printf("\n\n");
	printf("Driver 2\n");
	printf("Name:\t%s\n",d2.name);
	printf("Driving License Number:\t%s\n",d2.driv_lic);
	printf("Route:\t%s\n",d2.route);
	printf("Kms:\t%f\n",d2.km);
	printf("\n\n");
	printf("Driver 3\n");
	printf("Name:\t%s\n",d3.name);
	printf("Driving License Number:\t%s\n",d3.driv_lic);
	printf("Route:\t%s\n",d3.route);
	printf("Kms:\t%f\n",d3.km);
	printf("\n\n");
	return 0;
}