#include <stdio.h>

int fun(int n);

int main()
{	
    int m1,m2;
    
    scanf("%d",&m1);
    scanf("%d",&m2);
    
    printf("%d的逆向是%d\n", m1, fun(m1));  
    printf("%d的逆向是%d\n", m2, fun(m2));  

}

int fun(int n){
	int res=0;
	if(n>-10&&n<10)return n;
	while(n>=10||n<=-10){
		res=n%10+res*10;
		n/=10;
	}
	return res*10+n;
}
