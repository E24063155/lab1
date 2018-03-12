#include<iostream>
#include<cstdlib>
using namespace std;
int main(void)
{
	int n;
	cout <<"please enter a non-negative integer : ";
	cin >> n;
	cout << "n = "<< n <<endl;
	while (n!=1)
        {
		if(n%2==0)
		{
			n/=2;
			cout << "n = " << n <<endl;
		}
		else if(n%2==1)
		{
			n=n+n+n+1;
			cout << "n = " << n <<endl;
		}
		else
			break;
	}		
	return 0;
}
