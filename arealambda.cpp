#include <iostream>
using namespace std;

int main() {
    int r = 100;
    cout<<"Lambda function: "<<endl;
    double PI = 3.14159;
    auto area = [PI](int r) -> double 
    {
        return PI * r * r;  
    };
    double result = area(r);
    cout<<"Area of the circle: "<<result<<endl;
    return 0;
}