﻿#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){

double x1,y1,x2,y2;
cin>>x1>>y1>>x2>>y2;
x1=x2-x1;
y1=y2-y1;
x1=x1*x1;
y1=y1*y1;
x1=x1+y1;
x1=sqrt(x1);

cout<<fixed<<setprecision(4)<<x1<<endl;
return 0;
}


