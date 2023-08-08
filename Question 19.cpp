#include<bits/stdc++.h>//Print all  divisors of that numbers or factors 
using namespace std;
void printdiviours(int n ){ //function 
	for(int i = 1 ; i<=n ; i++){
		if(n%i==0){ //logic 
			cout << i << " ";
		}
	}
}
int main(){
	int n ;
	cin >> n;
	printdiviours(n);
	return 0;
	
}	

