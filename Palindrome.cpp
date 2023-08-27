#import<bits/stdc++.h>
//palindrome program thi is the which defien that the word is reverse but it is not changes !
//454 = 454
using namespace std;

bool f(int i  ,  string &s ) {//bollean is used for those Question which deffine in  0 and 1 
	if( i >= s.size() /2 ) return true; //index value in array 
	if(s[i] != s[s.size() - i -1 ]) return false;
	return f(i+1 , s);
} 

//keyword 
//String  size = 4 bits 
//int  = 4 bits 
//double  = 8 bits 
//bits is the si unit to store data in a computer 
//height 5 foot 
//long 
//short 

int main(){
	string s = "madan";
	cout << f(0,s);
	return 0;
	
	
}
