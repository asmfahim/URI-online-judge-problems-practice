    #include <iostream>
    using namespace std;
    class Solu1001 {
       public:
           int A,B,X;
           int insert(int i, int n)
            {
               A=i;
               B=n;
               X=A+B;
            }
           void display()
            {
                cout<<"X = "<<X<<endl;
            }
    };
    int main(void) {
        Solu1001 s1;
        int a,b;
        cin>>a>>b;
        s1.insert(a,b);
        s1.display();
        return 0;
    }
