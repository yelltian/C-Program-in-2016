#include <stdio.h>

int main(void)
{
  int ri,looptimes;
  int i,n;
  void dectobin(int n);
  
  scanf("%d",&looptimes);
  for(ri=1;ri<=looptimes;ri++){
    scanf("%d",&n);
    dectobin(n);
    printf("\n");
  }
}

void dectobin(int n){
	if(n>1)
	dectobin(n/2);
	printf("%d",n%2);
}


