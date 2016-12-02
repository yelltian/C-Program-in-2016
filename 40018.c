#include <stdio.h>
#include <math.h>

int search(int n);

int main(void)
{
      int number,ri,looptimes;

      scanf("%d",&looptimes);
      for(ri=1;ri<=looptimes;ri++){
         do{
                  scanf("%d",&number);
         }while(number<101||number>999);
         
         printf("count=%d\n",search(number));
     }
}

int search(int n){
	int count=0, i, j, digit1, digit2, digit3;
	
	for(i=101;i<=n;i++){
		digit3=i%10;
		digit2=i/10%10;
		digit1=i/100;
		for(j=10;j<=i;j++){
			if(j*j==i&&(digit1==digit2||digit1==digit3||digit2==digit3))
			count++;
		}
	}
	return count;
}

