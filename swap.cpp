#include <bits/stdc++.h> 
using namespace std;
void swap(int a,int b);
int main()      
{
  int a,b;
  cout<<"Enter two numbers:"<<endl;
  cin>>a>>b;
  cout<<"Before swapping a:"<<a<<"  b:"<<b<<endl;
  swap(a,b);
}

void swap(int a,int b)
{
  cout<<"This is my function"<<endl;
  int temp;
  temp=a;
  a=b;
  b=temp;
  cout<<"After swapping a:"<<a<<"  b:"<<b;
}
