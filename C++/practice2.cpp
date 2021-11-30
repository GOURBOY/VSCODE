#include<iostream>
#include<cmath>
using namespace std;
 
int main()
{
    int N; cin>>N;
    int p1, p1_total = 0, p2, p2_total = 0, winner, max_lead = 0;
    for(int i=0; i<N; i++)
    {
        cin>>p1>>p2;
        p1_total += p1; p2_total += p2; 
        int temp = p2_total-p1_total; 
        if (max_lead<abs(temp))
        {
            max_lead = abs(temp);
            winner = temp>0 ? 2 : 1;
        }
    }
    cout<<winner<<" "<<max_lead;
 
}
