#include <iostream>

using namespace std;
int main() {
    enum supercars {venom=301,veryon=268,valkyrie=240,roadster=278};
    supercars speed1,speed2;
    speed1=valkyrie;
    speed2=roadster;
    if (speed1>speed2)
    {
      cout<<"It is a win for valkyrie with the speed of "<<valkyrie;
    }
    else
    {
      cout<<"It is a win for roadster with the speed of "<<roadster; 
    }
    return 0;
}