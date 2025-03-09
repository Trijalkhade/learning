#include <iostream>

using namespace std;
int main() {
    enum months {january,february,march,april,may,june,july,august};
    months m;
    m=march;
    cout<<"Month is: "<<m+1;
    return 0;
}