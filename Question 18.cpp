#include<bits/stdc++.h>
using namespace std;
//Palindrome number is the number which reverse is same as given number 
int main(){

	int n ;
	cin >> n ;
	int revNum = 0;
	int dup = n;//Store duplicate number in the n 
	while(n>0){
		int ld = n%10;
		revNum = (revNum * 10) + ld;
		n = n / 10;
		
		
	}
	if(dup == revNum) cout <<"True";
	else cout<< "False";
	
	
}
