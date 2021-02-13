#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

int a,b,c;
cin>>a>>b>>c;
a=(a+b+ abs(a-b))/2;
b=(a+c+ abs(a-c))/2;
cout<<b<<" eh o maior"<<endl;

return 0;
}
