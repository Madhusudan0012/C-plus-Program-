#include<bits/stdc++.h>
using namespace std;
//Armstrong Number 
//Number which sum of cube  is equal that number which is given by the user 
//Extraction of numbers 
int main(){

	int n ;
	cin >> n ;
	int sum  = 0;
	int revNum = 0;
	int dup = n;//Store duplicate number in the n 
	while(n>0){
		int ld = n%10;
		sum = sum + (ld*ld*ld);
	//	revNum = (revNum * 10) + ld;
		n = n / 10;
		
		
	}
	if(dup == sum) cout <<"True";
	else cout<< "False";
	
	
}
