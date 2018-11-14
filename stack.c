/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int insert(int, int);
int delete(int, int);
int display(int, int);
int repeat(int ,int);


int main()
{
    int stack[10],d;
    printf("Press 1 to Insert\n");
    printf("Press 2 to Delete\n");
    printf("Press 3 to Display\n");
    scanf("%d",&d);
    if(d==1)
    insert(s,e);
    else if(d==2)
    delete(s,e);
    else if(d==3)
    display(s,e);
    else
    printf("Invalid Response\n");
    repeat();
}
repeat()
{   int d;
    printf("Press 0 to exit\n");
    printf("Press 9 to start again\n");
    scanf("%d",&d);
    if(d==0)
    exit(0);
    else if(d==9)
    main();
    else
    printf("INVALID RESPONSE!!!!\n\n");
    repeat();
}
insert()
{
    
}
delete()
{
    
}
display()
{
    
}


