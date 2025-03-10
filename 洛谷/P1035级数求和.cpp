#include <iostream>

using namespace std;
int main() {
	int i,k;
	cin>>k;
	double Sn=0;
	for(i=0;Sn<=k;i++)
	{
	Sn=Sn+1.0/(i+1); 
	//cout<<Sn<<"\n";
	}
	cout<<i;
	return 0; 
}
