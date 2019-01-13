#include <iostream>

int main() {
  int x,y,z;
  std::cout<<"X Y Z  XY+Z\n";
  for(x=0;x<=1;x++)
  {
    for(y=0;y<=1;y++)
    {
      for(z=0;z<=1;z++)
      {
        if(x==1&&y==1&&z==1)
        std::cout<<"1 1 1  1";
         
        else
        std::cout<<x<<" "<<y<<" "<<z<<"  "<<(x*y)+z;
        std::cout<<"\n";
      }
    }
  }
}
