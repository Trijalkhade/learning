#include<iostream>
using namespace std;
void small(int n)
{
  int a[n],i,j,small,large;
  cout<<"Enter the "<<n<<" numbers:"<<endl;
  for(j=0;j<n;j++)
  {
    cin>>a[j];
    
  }
  small=a[0];
  large=a[0];
  for (i=0;i<n;i++)
  {
    if(a[i]<small)
    {
      small=a[i];
    }
    if (a[i]>large)
    {
      large=a[i];
    }
  }
  cout<<"Smallest number: "<<small<<endl<<"largest number: "<<large<<endl;
}
int main()
{
  int n,a[n];
  cout<<"Enter Size of Array:"<<endl;
  cin>>n;
  
  small(n);
}
