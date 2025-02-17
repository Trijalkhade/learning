#include<iostream>
using namespace std;
class calculate_area
{
  public:
  float r,area;
  float pi = 3.14;
  void input()
  {
    cout<<"Enter radius:";
    cin>>r;
  }
  void calculation()
  {
    area= pi*r*r;
    cout<<"area is "<<area;
  }
};
int main()
{
  calculate_area A1;
  A1.input();
  A1.calculation();
  return 0;
}
