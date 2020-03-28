#include<bits/stdc++.h>


using namespace std;

struct processList
{
int process;
int arrivalTime;
int burst;
int completion;
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
            

    }

    sort(p1,p1+n,compareArrival);    // sorting process according to arrival time...
  cout<<"PROCESS\t BURST TIME\t WAITING TIME\t TURN AROUND TIME"<<endl;
for(i=0;i<n;i++)
{

cout<<" "<<p1[i].process;
cout<<"  \t "<<p1[i].burst;
cout<<"\t\t  "<<p1[i].waiting;
cout<<"\t\t\t  "<<p1[i].turnaround;

cout<<"\n";
}

    return 0;
}
