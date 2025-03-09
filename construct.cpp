#include<iostream>
using namespace std;
class student
{
  private:
  int id;
  string name,class1;
  public:
  
  student(): id(0),name(""),class1("") {}   //Default Constructor
  student(int a,string b,string c): id(a),name(b),class1(c) {}   //Parameterized Constructor
  student(const student& a): id(a.id),name(a.name),class1(a.class1) {}   //Copy Constructor
  
  void disp1()
  {
  cout<<"Default Constructor:"<<endl;
  cout<<id<<" "<<name<<" "<<class1<<endl;
  };
  
  void disp2()
  {
  cout<<"Parameratized Constructor:"<<endl;
  cout<<id<<" "<<name<<" "<<class1<<endl;
  };
  
  void disp3()
  {
  cout<<"Copy Constructor:"<<endl;
  cout<<id<<" "<<name<<" "<<class1<<endl;
  };
  
  ~student()
  {
    cout<<"Object destroyed"<<endl;
  };
};

int main()
{
  student s1;
  student s2(1,"trijal","FY");
  student s3(s2);
  s1.disp1();
  s2.disp2();
  s3.disp3();
  return 0;
  
}
