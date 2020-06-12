#include<iostream>
#include<algorithm>
using namespace std;
void absdif(int *arr0, int *arr1, int n)
{
 int sum =0;
 for(int i=0;i<n;i++)  
 sum = sum + abs(arr0[i]-arr1[i]);
 cout<<"The minimum sum of Absolute Difference is "
     <<sum;
}

int main()
{
  
  int arr0[] = {4, 1, 8, 7};
  int arr1[] = {2, 3, 6, 5};
  
  //length of the array
  int n = sizeof(arr0)/sizeof(arr0[0]);
  
  //sorting both the arrays in increasing order
  //so the minimum value gets subtracted with yhe other 
  //minimum value. 
  
  sort(arr0,arr0+n);
  sort(arr1,arr1+n);
  
  absdif(arr0, arr1, n);
  
  return 0;
}
