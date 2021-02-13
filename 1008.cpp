#include <iostream>
#include<iomanip>
 
using namespace std;
 
int main() {
 
    int A,B;
    float C,sum;
    cin>>A>>B>>C;
    sum=(B*C);
    cout<<"NUMBER = "<<A<<endl<<"SALARY = U$ "<<fixed<<setprecision(2)<<sum<<endl;
    
 
    return 0;
}