#include<iostream>
using namespace std;
void range(int a)
{
int i;
  for(i=0;i<a;i++) 
  {
    cout<<i;
  }
}
int main()      
{
  int i;
  cout<<"Enter range:"<<endl;
  cin>>i;
  range(i);
}
