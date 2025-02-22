#include<iostream>
using namespace std;

class car {
private:
  string car_name;
  string model;
  int year;

public:
  void getdata();  
  void putdata();  
};

void car::getdata() {
  cout << "Enter Car name, model, and year: " << endl;
  cin >> car_name >> model >> year;
}

void car::putdata() {
  cout << car_name << " " << model << " " << year << endl;
}

int main() {
  int i, n = 5;
  car c1[n];  
  for (i = 0; i < n; i++) 
  {  
    c1[i].getdata();
  }
  for (i = 0; i < n; i++)
  { 
    c1[i].putdata();
  }
  return 0;  
}

