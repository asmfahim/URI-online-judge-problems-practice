    #include <iostream>
    using namespace std;
    class Solu1003 {
       public:
           int A,B,Sum;
           int insert(int i, int n)
            {
               A=i;
               B=n;
               Sum=A+B;
            }
           void display()
            {
                cout<<"SOMA = "<<Sum<<endl;
            }
    };
    int main(void) {
        Solu1003 s1;
        int a,b;
        cin>>a>>b;
        s1.insert(a,b);
        s1.display();
        return 0;
    }
