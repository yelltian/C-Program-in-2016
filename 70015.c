#include<stdio.h>

void main()
{
	int ri,looptimes;
	int month;
	char *month_name[]={"","January","February","March","April","May","June","July","August","September","October","November","December"};
	
	scanf("%d",&looptimes);
	for(ri=1;ri<=looptimes;ri++){
		scanf("%d",&month);
		if(month >= 1&&month <= 12){
			printf("%s\n",month_name[month]);
		}
		else printf("Wrong input!\n");
	}

}
