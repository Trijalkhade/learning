#include<iostream>
#include<thread>
using namespace std;
  
void myfunc()
{
  cout<<"Are we here yet?"<<endl;
};

int main()
{
  thread t1(myfunc);
  t1.join();
  return 0;
}
