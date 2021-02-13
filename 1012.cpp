#include<iostream>
#include<iomanip>
#define pi 3.14159

using namespace std;

int main(){
    float a,b,c;
    double tsum,rsum,trsum,ssum,asum;
    cin>>a>>b>>c;

        tsum= 1.0/2*a*c;
        cout<<"TRIANGULO: "<<fixed<<setprecision(3)<<tsum<<endl;
        rsum=pi*c*c;
        cout<<"CIRCULO: "<<fixed<<setprecision(3)<<rsum<<endl;
        trsum= a+b;
        trsum=1.0/2*trsum*c;
        cout<<"TRAPEZIO: "<<fixed<<setprecision(3)<<trsum<<endl;
        ssum= b*b;
        cout<<"QUADRADO: "<<fixed<<setprecision(3)<<ssum<<endl;
        asum=a*b;
        cout<<"RETANGULO: "<<fixed<<setprecision(3)<<asum<<endl;

        return 0;
}
