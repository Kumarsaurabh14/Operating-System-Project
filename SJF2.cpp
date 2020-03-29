#include<bits/stdc++.h>


using namespace std;

struct processList //PROCESS structure
{
int process; // process ID
int arrivalTime; //process arrival time
int burst; // process CPU Burst Time
int completion; // process Completion Time
int turnaround;
int waiting;
int priority;
};
bool compareArrival(processList a, processList b)
{
        return a.arrivalTime < b.arrivalTime; // sorts according to Arrival Time in ascending order
}


int main()
{


    int n,i,j;

   cout<<"Enter the number of Processes to be created: ";
    cin>>n;
    cout<<endl;
    processList p1[n];

    cout<<"Please Enter details about Processes..."<<endl;



    for(int i = 0; i < n; i++)
    {
        cout<<"For Process "<<i+1<<endl;

            cout<<"Enter Process id: ";
            cin>>p1[i].process;

            cout<<"Enter Process Arrival Time: ";
            cin>>p1[i].arrivalTime;

            cout<<"Enter Burst Time: ";
            cin>>p1[i].burst;

            p1[i].waiting = 0;
            p1[i].turnaround = 0;
            p1[i].priority = 0;

    }

    sort(p1,p1+n,compareArrival);    // sorting process according to arrival time...

        //****finding priority****//
int estimatedTime=p1[0].burst;
for(i=1;i<n;i++)
{
	if(estimatedTime>=p1[i].arrivalTime)
	{

	    p1[i].waiting=estimatedTime-p1[i].arrivalTime;
        p1[i].priority=1+(p1[i].waiting/p1[i].burst);

	}

}

system("cls");
 //cout<<"\n\n\n\n";
int temp= 0;
 	for(i=1;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(p1[i].priority<p1[j].priority)
			{
				temp=p1[i].burst;
				p1[i].burst=p1[j].burst;
				p1[j].burst=temp;
				temp=p1[i].process;
				p1[i].process=p1[j].process;
				p1[j].process=temp;
				temp=p1[i].arrivalTime;
				p1[i].arrivalTime=p1[j].arrivalTime;
				p1[j].arrivalTime=temp;
				temp=p1[i].priority;
				p1[i].priority=p1[j].priority;
				p1[j].priority=temp;


			}
			 else if(p1[i].priority==p1[i].priority)
			{
				if(p1[i].burst>p1[i].burst)
				{
				   temp=p1[i].burst;
				p1[i].burst=p1[j].burst;
				p1[j].burst=temp;
				temp=p1[i].process;
				p1[i].process=p1[j].process;
				p1[j].process=temp;
				temp=p1[i].arrivalTime;
				p1[i].arrivalTime=p1[j].arrivalTime;
				p1[j].arrivalTime=temp;
				temp=p1[i].priority;
				p1[i].priority=p1[j].priority;
				p1[j].priority=temp;
				}
			}
		}
	}

  cout<<"PROCESS\t BURST TIME\t WAITING TIME\t TURN AROUND TIME\t Priority"<<endl;
for(i=0;i<n;i++)
{

cout<<" "<<p1[i].process;
cout<<"  \t "<<p1[i].burst;
cout<<"\t\t  "<<p1[i].waiting;
cout<<"\t\t\t  "<<p1[i].turnaround;
cout<<"\t\t "<<p1[i].priority;
cout<<"\n";
}

    return 0;
}
