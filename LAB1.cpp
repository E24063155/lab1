#include<iostream>
#include<cstdlib>
using namespace std;
int main(void)
{
	int n;                                           /*this program only for integer so use "int" to declare the variable*/
	cout <<"Please enter a Positive integer : "; 
	cin >> n;
	cout << "n = "<< n <<endl;                       /*print the variable before the while loop in case users key "1" as the variable--n*/
	while (n!=1)                                     /*when the variable not "1" ,
							   use a while loop with an if...else select statement to deal with the problem*/
        {
		if(n%2==0)                               /*use if...else statement to select n%2==0 or n%2==1*/
		{
			n/=2;
			cout << "n = " << n <<endl;
		}
		else
		{
			n=n+n+n+1;
			cout << "n = " << n <<endl;
		}
	}
	return 0;
}
