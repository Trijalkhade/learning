#include <bits/stdc++.h> 
using namespace std;

void iseven(int a);
int main()      
{
  int a,b;
  cout<<"Enter two numbers:"<<endl;
  cin>>a>>b;
  cout<<"a and b are even or odd:"<<endl;
  iseven(a);
  iseven(b);
 
}
void iseven(int a)
{
  if (a%2 == 0)
  	cout<<a<<" is even"<<endl;
  else
  	cout<<a<<" is odd"<<endl;
}

