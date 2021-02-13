#include <iostream>

using namespace std;

int main(){
	int sum;
	float n,fsum;
	cin>>n;
	cout<<n<<endl;
		sum=n/100;
		cout<<sum<<" nota(s) de R$ 100,00"<<endl;
		sum=sum*100;
		n=n-sum;
		sum=n/50;
		cout<<sum<<" nota(s) de R$ 50,00"<<endl;
		sum=sum*50;
		n=n-sum;
		sum=n/20;
		cout<<sum<<" nota(s) de R$ 20,00"<<endl;
		sum=sum*20;
		n=n-sum;
		sum=n/10;
		cout<<sum<<" nota(s) de R$ 10,00"<<endl;
		sum=sum*10;
		n=n-sum;
		sum=n/5;
		cout<<sum<<" nota(s) de R$ 5,00"<<endl;
		sum=sum*5;
		n=n-sum;
		sum=n/2;
		cout<<sum<<" nota(s) de R$ 2,00"<<endl;
		sum=sum*2;
		n=n-sum;
		sum=n/1;
		cout<<sum<<" nota(s) de R$ 1,00"<<endl;
		
		// not finish yet
	return 0;
	}
