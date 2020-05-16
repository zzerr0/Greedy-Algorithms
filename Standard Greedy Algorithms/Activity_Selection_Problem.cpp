//ACTIVITY SELECTION PROBLEM 
#include<iostream>
using namespace std;
int main()
{
  int start[]={1, 3, 0, 5, 8, 5};
  int finish[]={2, 4, 6, 7, 9, 9};
  int n=sizeof(start)/sizeof(start[0]);
  int i=0;
  cout<<"Activities that can be selected are "<<i;
  for(int j=1;j<n;j++)
  {
    if(start[j]>=finish[i])
    {
      cout<<" "<<j;
      i=j;
    }
  }
  return 0;
}

/*
                ALGORITHM
1) Sort the activities according to their finishing time
2) Select the first activity from the sorted array and print it.
3) Do following for remaining activities in the sorted array.
a) If the start time of this activity is greater than or equal
   to the finish time of previously selected activity then select 
   this activity and print it.
*/
