#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int u1,u2,p1,p2;
    float t1,t2,sum;

    cin>>p1>>u1>>t1>>p2>>u2>>t2;

    t1=u1*t1;
    t2=u2*t2;

    sum= t1+t2;

    cout<< "VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<sum<<endl;
    
    return 0;
}
