#include<iostream>
using namespace std;
int main()
{
  int size,i,search,found=0;
  cout<<"Enter size of array:"<<endl;
  cin>>size;
  int a[size];
  cout<<"Enter "<<size<<" elements in the array:"<<endl;
  //Accepting array elements from user
  for(i=0;i<size;i++)
  {
    cin>>a[i];
  }
   cout<<"Enter the value to be searched:"<<endl;
   cin>>search;
  // Linear search algorithm
  for(i=0;i<size;i++)
  {
    if(search==a[i])
    {
      cout<<"Eelment "<<search <<" Found at index: "<<i<<endl;
      found++;
    }
  }
  if(found==0)
  {
    cout<<"Element "<<search <<"not found in array";
  }
  return 0;
}
