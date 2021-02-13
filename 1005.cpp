    #include <iostream>
    #include<iomanip>
    using namespace std;
    class Solu1004 {
       public:
           float A,B,Sum;
           void insert(float i, float n)
            {
               A=i;
               B=n;
               Sum=((A*3.5)+(B*7.5))/(3.5+7.5);
            }
           void display()
            {
                cout << "MEDIA = "<< fixed << setprecision(5) << Sum << endl ;
            }
    };
    int main(void) {
        Solu1004 s1;
        float a,b;
        cin>>a>>b;
        s1.insert(a,b);
        s1.display();
        return 0;
    }

