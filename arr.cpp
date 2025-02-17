#include<iostream>
using namespace std;
int main()
{
  int a1[5],a2[5],res[5],i;
  // a1&a2 are two arrrays, addition of arrays stored in res,'i' is counter 
  
  cout<<"Enter first 5 numbers:"<<endl;
  for(i=0;i<5;i++)
  {
  cin>>a1[i];
  }
  cout<<endl;
  cout<<"Enter next 5 numbers:"<<endl;
  for(i=0;i<5;i++)
  {
  cin>>a2[i];
  }
  //Accepting twos arrays from user
  
  for(i=0;i<5;i++)
  {
    res[i]=a1[i]+a2[i];
  }
  //Adding adjacaent elements of arrays
  
  cout<<endl<<endl;
  cout<<"The SUM of all array elements:"<<endl;
  for(i=0;i<5;i++)
  {
    cout<<res[i]<<endl;      // Display Resultant array 
  }
  return 0;
}
