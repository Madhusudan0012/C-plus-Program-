/*
Array takes similiar data inside of it because if you enter single than it takes lot of time to 
fill all the data 
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[5] ;
	cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
	arr[3] += 10; //add something through array 
	cout << arr[3];
	return 0;
}
//etire array stored in a memory location 
