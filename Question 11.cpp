#include<bits/stdc++.h>
using namespace std;
void printl(int n){
	for(int i =0; i<n ; i++){
		for(int j = 0 ; j<n ; j++){
			cout << "*";
		}
		cout << endl;
	}
}
int main(){
	int n ;
	cin >> n;
	printl(n);
}
