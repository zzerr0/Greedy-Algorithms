#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
  int arr0[] = {6, 1, 9, 5, 4};
  int arr1[] = {3, 4, 8, 2, 4};
  int n = sizeof(arr0)/sizeof(arr0[0]);
  
  //to minimize the sum of product of two arrays
  //we have sort arr0 in increasing order
  //and arr1 in decreasing order 
  //hence the product will be minimum
  
  sort(arr0, arr0+n);
  //to sort in ascending order
  
  sort(arr1, arr1+n, greater<int>());
  //to sort in descending order
  
  cout<<" To Minimize the sum of product of \n"
  <<" two arrays with permutations allowed"<<endl;
  int sum = 0;
  
  for(int i=0;i<n;i++)
  {
    sum = sum + arr0[i]*arr1[i];
  }
  
  cout<<"\n The minimum sum is "<<sum<<endl;
  
  return 0;
}
