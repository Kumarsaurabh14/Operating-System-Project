#include<bits/stdc++.h>
#include<cstdlib>

#include<cstring>
using namespace std;

struct ProcessVar
{
    int prosID;
    double arvTime;
    double brtTime;
    double turnAT;
    double waitTime;
};

bool compare(ProcessVar a, ProcessVar b) // returns Ascending or Descending Sort
{
    return a.arvTime < b.arvTime; // sorts according to Arrival Time
}

int main()
{

    vector<ProcessVar> processList;


    int n;
    cout<<"Enter the number of Processes to be created: ";
    cin>>n;
    cout<<endl;


    cout<<"Please Enter details about Processes..."<<endl;

    for(int i = 0; i < n; i++)
    {
        cout<<"For Process "<<i<<endl;
            int p;
            cout<<"Enter Process id: ";
            cin>>p;

             double b1;
            cout<<"Enter Burst Time: ";
            cin>>b1;

            double t1;
            cout<<"Enter Arrival Time: ";
            cin>>t1;

           processList.push_back({p, t1, b1});
    }
    system("cls");

    cout<<"PROCESSE_ID          BURST TIME      ARRIVAL TIME"<<endl;
    int sizeVect = processList.size();
    for (int i=0;i<sizeVect;i++)
    {

        cout<<processList[i].prosID<<"\t\t\t"
            <<processList[i].arvTime<<"\t\t  "<<processList[i].brtTime<<endl;

    }

    sort(processList.begin(), processList.end(), compare); // sorts PROCESS structure

     cout<<"PROCESSE_ID          BURST TIME      ARRIVAL TIME"<<endl;
   // int sizeVect = processList.size();
    for (int i=0;i<sizeVect;i++)
    {

        cout<<processList[i].prosID<<"\t\t\t"
            <<processList[i].arvTime<<"\t\t  "<<processList[i].brtTime<<endl;
    }


    //cin.get();
    //system("cls");

    cout<<endl;


}

