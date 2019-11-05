#include<stdio.h>
#include<math.h>



//Decimal to binary conversion
long int DecimalToBinary(int num)
{
    int temp=num;
    int binary;
    int i=1;
    while(temp>0)
    {
        if(temp%2==1)
        {
            binary=i*1+binary;
        }
        else if(temp%2==0)
        {
            binary=i*0+binary;
        }
        temp=temp/2;
        i=i*10;
    }
    return binary;
}
int main()
{
    int n;
    printf("\nEnter Decimal Number: ");
    scanf("%d",&n);
    long int b;
    b=DecimalToBinary(n);
    printf("\nBinary Representation of Decimal Number %d is %li",n,b);
    return 0;
}