    #include <iostream>
    using namespace std;
    class Solu1004 {
       public:
           int A,B,Sum;
           int insert(int i, int n)
            {
               A=i;
               B=n;
               Sum=A*B;
            }
           void display()
            {
                cout<<"PROD = "<<Sum<<endl;
            }
    };
    int main(void) {
        Solu1004 s1;
        int a,b;
        cin>>a>>b;
        s1.insert(a,b);
        s1.display();
        return 0;
    }
