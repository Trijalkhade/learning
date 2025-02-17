#include<iostream>
#include<string>
using namespace std;
int main()
{
  int a1[5],a2[5],res[5],i;
  string opr1="add",opr2;
  // a1&a2 are two arrrays, addition of arrays stored in res,'i' is counter 
  
  cout<<"type add to begin"<<endl;
  cin>>opr2;
  
  if(opr2.length()==3 && opr1==opr2)
  {
  cout<<"Enter first array numbers:"<<endl;
  for(i=0;i<5;i++)
  {
  cin>>a1[i];
  }
  cout<<endl;
  cout<<"Enter next array numbers:"<<endl;
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
  } 
  else
  {
    cout<<"undefined operator!";
  }
  return 0;
}
