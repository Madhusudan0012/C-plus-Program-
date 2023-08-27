#include<iostream>
using namespace std;
int main()
{
	int x,n;//input that by user 
	int steps=0; // total number of setps 
	cin >> x; // input of x 
	if (x <= 5)cout << "1";
	else 
		if (x % 5 == 0)
	    {
		    n = x/5;
		    cout << n;
	    }
	    else
		{
			n = x/5 + 1;
			cout << n;
	    }

}
