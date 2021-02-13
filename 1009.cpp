#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    char a[100];
    double b,c,sum;
    cin>>a>>b>>c;
    sum=b+(c*15)/100;
    cout<<fixed<<setprecision(2)<<"TOTAL = R$ "<<sum<<endl;

    return 0;
}