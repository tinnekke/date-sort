/*
Tinnekke Bebout
4/22/2018

*/

//preprocessor directives
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct Date
	{
		int year;
		int month;
		int day;
	};
	
void difDays(struct Date content[]);
	
int main()
{
	
	
	struct Date dat[2];
	for(int i = 0; i < 2; i++)
	{
		printf("Enter year: \n");
		scanf("%d", &dat[i].year);
		printf("Enter month: \n");
		scanf("%d", &dat[i].month);
		printf("Enter day: \n");
		scanf("%d", &dat[i].day);
		printf ("The date you entered is %d %d %d \n", dat[i].month, dat[i].day, dat[i].year);
	}
	difDays(dat);
	
	
	return 0;
	
}

void difDays(struct Date content[])
{
	
	int choice = 0;
	int elementNum = 0;
	int counter = 0;
	int i = 0;
	int m = 0;
	int d = 0;
	int y = 0;
	int daysMonth = 0;
	int totalVal = 0;
	int daysYear = 0;
	
	//sort greater value of year then do math
	if(content[1].year > content[0].year)
	{
		y = content[1].year - content[0].year;
		m = content[1].month - content[0].month;
		d = content[1].day - content[0].day;
		daysYear = y * 360;
		daysMonth = m * 30;
		totalVal = daysYear + daysMonth + d;
		printf("The number of days between your chosen dates is: %d \n", totalVal);
	}
	else
	{
		y = content[0].year - content[1].year;
		m = content[0].month - content[1].month;
		d = content[0].day - content[1].day;
		daysYear = y * 360;
		daysMonth = m * 30;
		totalVal = daysYear + daysMonth + d;
		printf("The number of days fbetween your chosen date is: %d \n", totalVal);
	}
	
	return;
}
