#include <iostream>
using namespace std;
void primerange(int n)
{
    int i,j,flag=1;
    for(i=2;i<=n;i++)
    {
        flag=1;
        for(j=2;j<=i/2;j++)
        {
            if(i%j == 0)
            {
                flag=0;
                break;
            }
        }
        if (flag == 1)
        {
            cout<<i<<" ";
        }
    }
    
}
int main() {
    // Write C code here
    int upperlimit;
    cout<<"Enter the range to display prime numbers:"<<endl;
    cin>>upperlimit;
    
    primerange(upperlimit);
    return 0;
}