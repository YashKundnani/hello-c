#include <stdio.h>

int main()
{
    int p;//no.of processes
    printf("Enter Number of processes : ");
    scanf("%d",&p);
    int p_number[p];
    int p_cpuBurst[p];
    int p_arrivalTime[p];
    for(int i=0;i<p;i++)
    {
        printf("\nEnter Process ID of P[%d]",i+1);
        scanf("%d",&p_number[i]);
        printf("\nEnter CPU burst for process %d: ",p_number[i]);
        scanf("%d",&p_cpuBurst[i]);
        printf("\nEnter Arrival Time for process %d: ",p_number[i]);
        scanf("%d",&p_arrivalTime[i]);
    }
    //Display of data recorded from user
    printf("\nProcess ID\tCPU Burst Time\tArrival Time");
    
    for(int i=0;i<p;i++)
    {
       printf("\n%d        \t%d             \t%d",p_number[i],p_cpuBurst[i],p_arrivalTime[i]);
    }
    //Arranging Processing according to their arrival Time
    for(int i=0;i<p-1;i++)
    {
        int temp;
        if(p_arrivalTime[i]>p_arrivalTime[i+1])
        {
            temp=p_arrivalTime[i];
            p_arrivalTime[i]=p_arrivalTime[i+1];
            p_arrivalTime[i+1]=temp;
            
            temp=p_cpuBurst[i];
            p_cpuBurst[i]=p_cpuBurst[i+1];
            p_cpuBurst[i+1]=temp;
            
            temp=p_number[i];
            p_number[i]=p_number[i+1];
            p_number[i+1]=temp;
            
        }
    }
    //Gantt Chart
    int burstTime=0,sum=0;
     for(int j=0;j<p;j++)
         sum=sum+p_cpuBurst[j];
    printf("\nGantt Chart\n");
    
     for(int j=0;j<sum;j++)
        {
            printf("--");
        }
        printf("\n");
        printf("|");
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<(p_cpuBurst[i])/2;j++)
        {
            printf(" ");
        }
        
        printf("%d",p_number[i]);
        for(int j=0;j<(p_cpuBurst[i])/2;j++)
        {
            printf(" ");
        }
        printf("|");
    }
    printf("\n");
    for(int j=0;j<sum;j++)
        {
            printf("--");
        }
    
    
        printf("\n%d",burstTime);
        for(int i=0;i<p;i++)
        {
          for(int j=0;j<p_cpuBurst[i];j++)
           {
             printf(" ");
            }
        
        burstTime=burstTime+p_cpuBurst[i];
        printf("%d",burstTime);
        }
    return 0;
    
}