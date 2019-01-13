#include <iostream>

int main() {
  int n,b[20],i=0,j;
  std::cout<<"Enter number: ";
  std::cin>>n;
  while(n>0)
  {
    b[i]=n%2;
    n=n/2;
    i++;

  }
  for(j=i-1;j>=0;j--)
  std::cout<<b[j]<<" ";
}
