#include<stdio.h> 
int main() 
{ int time_quantum=2;
  int count,n;
  int time=0;
  
  printf("\n\nEnter the Total number of Process:\t "); 
  scanf("%d",&n);
  int waiting_time,turn_around_time,priority[n],burst_time[n],rt[n],t[n],a_time[n];
  for(count=0;count<n;count++) 
  { 
    printf("Enter Priority and Burst Time for Process Process Number %d :",count+1); 
   scanf("%d",&priority[count]); 
    scanf("%d",&burst_time[count]); 
   scanf("%d",&a_time[count]); 
    rt[count]=burst_time[count]; 
  } 

 int a,i;

for(count=0;count<n;count++)
{
int min=100;	
for(i=0;i<n;i++){
	if(priority[i]<min && rt[i]!=0 && a_time[i]<time){
		min=priority[i];
		a=i;
	}
}
if(time==0){
	time=time+rt[a];
rt[a]=0;
t[a]=time;
}
else{
	time=time+rt[a]+2;
rt[a]=0;
t[a]=time;
}




}
printf("\n\nProcess\t     Priority   |   Burst Time   |Turnaround Time|Waiting Time\n\n");
for (count=0;count<n;count++){ 
      printf("P[%d]\t|\t%d\t|\t%d\t|\t%d\t|\t%d\n",count+1,  /*pri*/priority[count]-((t[count]-a_time[count])/2), /*burst*/ burst_time[count],/*tat*/t[count]-a_time[count], /*wt*/t[count]-burst_time[count]-a_time[count]); 
      
  //    waiting_time+=time-arrival_time[count]-burst_time[count]; 
    //  turn_around_time+=time-arrival_time[count]; 
      
}
}
