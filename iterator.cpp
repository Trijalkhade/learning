#include <iostream>
#include<iterator>
#include<vector>
using namespace std;
int main() {
    vector<int> arr={1,2,3,4,5};
    vector<int>::iterator ptr;
    cout<<"The elements of veector are: "<<endl;
    for(ptr=arr.begin();ptr!=arr.end();ptr++)
    {
        cout<<*ptr<<" ";
    }
    return 0;
}