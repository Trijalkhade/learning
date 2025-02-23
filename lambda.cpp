// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int a=2,b=3;
    cout<<"Lambda function: "<<endl;
    auto sum = [](int a,int b) -> int 
    {
        return a+b;
    };
    int result = sum(a,b);
    cout<<result;
    return 0;
}