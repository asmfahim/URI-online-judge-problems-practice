#include<iostream>
#include<iomanip>
#define pi 3.14159

using namespace std;

int main(){
    int r;

    double sum;
    cin>>r;
    sum= (4.0/3)*pi*r*r*r;
    cout<<"VOLUME = "<<fixed<<setprecision(3)<<sum<<endl;
    
    return 0;
}
