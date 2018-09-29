#include <stdio.h>

int main() {
	
    int n;
    scanf("%d", &n);
    int t=n;//t is a temperary variable
    int sum=0;
    while(t!=0)
    {  
       //sum=10*sum;
       int r=0;
       r=t%10;
       sum=sum+r;
       t=t/10;
      
    }
    printf("%d",sum);
    return 0;
}
