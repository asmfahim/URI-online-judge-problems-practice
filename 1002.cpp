    #include <iostream>
    #include<iomanip>
    using namespace std;
    class Solu1002 {
       public:
           double A,R;
           void insert(double n)
            {
               R=n;
               A=3.14159*R*R;
            }
           void display()
            {
                cout << "A="<< fixed << setprecision(4) << A << endl ;
            }
    };
    int main(void) {
        Solu1002 s1;
        double a;
        cin>>a;
        s1.insert(a);
        s1.display();
        return 0;
    }
