#include<stdio.h>
#include<string.h>

void main()
{
	int i,ri,looptimes;
	char *date[]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
	char str[80];
	int count ;
	
	scanf("%d",&looptimes);
	getchar();
	for(ri=1;ri<=looptimes;ri++){
		scanf("%s",str);
		count = 0;
		for(i = 0; i < 7 ; i++){
			if(strcmp(str, date[i])==0){
				printf("%d\n",i+1);
				count++;
				break;
			}
		}
		if(count == 0) printf("-1\n");
	}
}

