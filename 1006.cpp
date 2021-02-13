#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    float A,B,C,sum;
    cin>>A>>B>>C;
    sum= ((A*2)+(B*3)+(C*5))/ (2+3+5);
    cout<<"MEDIA = "<<fixed<<setprecision(1)<<sum<<endl;
}
