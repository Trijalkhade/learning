// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
class Product {
private:
    string name;
    double price;
    int quantity;

public:
    // Constructor for initialization
    Product(string n, double p, int q) 
        : name(n), price(p), quantity(q) // Initialize data members with the arguments
    {
        // Constructor body (empty in this case)
    }
    
    void print()
    {
        cout<<name<<" "<<price<<" "<<quantity;
    }
};
int main() {
    // Write C++ code here
    Product p1("pen",11.5,10);
    p1.print();
    return 0;
}