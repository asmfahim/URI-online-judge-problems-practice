#include <iostream>

using namespace std;

int main(){
	int m,sum;
	double n;
	cin>>n;
	m=(n*100);
	cout<<"NOTAS:"<<endl;
		sum=m/10000;
		cout<<sum<<" nota(s) de R$ 100.00"<<endl;
		m=m%10000;
		sum=m/5000;
		cout<<sum<<" nota(s) de R$ 50.00"<<endl;
		m=m%5000;
		sum=m/2000;
		cout<<sum<<" nota(s) de R$ 20.00"<<endl;
		m=m%2000;
		sum=m/1000;
		cout<<sum<<" nota(s) de R$ 10.00"<<endl;
		m=m%1000;
		sum=m/500;
		cout<<sum<<" nota(s) de R$ 5.00"<<endl;
		m=m%500;
		sum=m/200;
		cout<<sum<<" nota(s) de R$ 2.00"<<endl;
		m=m%200;
		sum=m/100;
		cout<<"MOEDAS:"<<endl;
		cout<<sum<<" moeda(s) de R$ 1.00"<<endl;
		m=m%100;
		sum=m/50;
		cout<<sum<<" moeda(s) de R$ 0.50"<<endl;
		m=m%50;
		sum=m/25;
		cout<<sum<<" moeda(s) de R$ 0.25"<<endl;
		m=m%25;
		sum=m/10;
		cout<<sum<<" moeda(s) de R$ 0.10"<<endl;
		m=m%10;
        sum=m/5;
		cout<<sum<<" moeda(s) de R$ 0.05"<<endl;
		m=m%5;
		sum=m/1;
		cout<<sum<<" moeda(s) de R$ 0.01"<<endl;
	return 0;
	}
