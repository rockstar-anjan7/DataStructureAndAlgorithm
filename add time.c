/* Read input from STDIN. Print your output to STDOUT*/
#include<stdio.h>

int main(int argc, char *a[])
{   
	int launchHour,launchMinute;
	int travelHour,travelMinute;
	scanf("%d %d",&launchHour,&launchMinute);
	scanf("%d %d",&travelHour,&travelMinute);
	int resultMinute=(launchMinute+travelMinute)%60;
	int resultHour=launchHour+travelHour+((launchMinute+travelMinute)/60);
	if(resultHour<24){
		if(resultHour<=9 && resultMinute<=9)
		printf("0%d 0%d",resultHour,resultMinute);
		else if(resultHour<=9 && resultMinute>9)
		printf("0%d %d",resultHour,resultMinute);
		else if(resultHour>9 && resultMinute<=9)
		printf("%d 0%d",resultHour,resultMinute);
		else
		printf("%d %d",resultHour,resultMinute);
	}

	 
	else{
	if(resultHour%24<=9 && resultMinute<=9)
		printf("0%d 0%d",resultHour%24,resultMinute);
		else if(resultHour%24<=9 && resultMinute>9)
		printf("0%d %d",resultHour%24,resultMinute);
		else if(resultHour%24>9 && resultMinute<=9)
		printf("%d 0%d",resultHour%24,resultMinute);
		else
		printf("%d %d",resultHour%24,resultMinute);
	}
	 
}
