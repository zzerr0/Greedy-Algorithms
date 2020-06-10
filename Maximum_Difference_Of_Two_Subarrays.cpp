#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int arr[]={1,1,1,1,1,1,1,1,};
  int k=3;
  int n=sizeof(arr)/sizeof(arr[0]);
  //the maximum difference is only possible when the 
  // n-k array has the largest elements. 
  //therefore we sort the array in the ascending order
  sort(arr, arr+n);
  int sum0=0, sum1=0;
  
  for(int i=0;i<k;i++)
  {
    sum0 = sum0 + arr[i];
  }
  
  for(int i=k;i<n;i++)
  {
    sum1 = sum1 + arr[i];
  }
  
  cout<<"The maximum difference is "<<sum1-sum0;
  cout<<endl;
  return 0;
  
}
