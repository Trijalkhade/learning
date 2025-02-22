// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
int main() {
    vector<int>v;
    for(int i=1;i<=10;i++)
    {
      v.push_back(i);
    }
    cout<<"Size: "<<v.size()<<endl;
    v.resize(7);
    cout<<"Size after resizing: "<<v.size()<<endl;
    if (v.empty() == false)
    {
        cout<<"Vector is not empty"<<endl;
    }
    else
    {
        cout<<"Vector is empty"<<endl;
    }
    cout<<endl<<"Elements of vector:"<<endl;
    for(auto a=v.begin();a!=v.end();a++)
    {
        cout<<*a<<" ";
    }
    return 0;
}