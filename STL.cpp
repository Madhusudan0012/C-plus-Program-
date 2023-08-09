#include<bits/stdc++.h>
#include<math.h>//for Adding Math library 
#include<string.h>
using namespace std;
//STL Play Important Role in C++


/*void print(){
	cout << "Madhusudan Singh Chauhan";
}

int sum(int a , int b){
	return a+b;
}
int main(){
	print();
	int a;
	cin >> a;
	
	return 0;
}*/


//pair
void explain(){
	pair<int , int > p = {1,3};
	cout << p.first << "" << p.second;
	pair < int , pair < int , int >> p = {1,{3,4}};
	cout << p.first <<  " " << p.second.second << " " << p.second.first;
	pair<int , int> arr[] = {{1,2} , {2,5} , {5,1}};
	cout << arr[1].second;
}




void explainVectors(){
	vector<int> v;
	
	v.push_back(1);//push back 
	v.emplace_back(2); //emplace back 
	
	vector<pair<int, int >> vec;
	
	v.push_back({1,2});
	v.emplace_back(1,2);
	
	vector<int> v(5,100);
	
	vector<int>v(5);
	vector<int> v1(5,20);  //Vector have dynamic 
	//nature so you able to increase size of it !
	
}

//how to access elements in vector 
vector<int>::iterator it = v.begin();
//memory address 
//*v.began means it cantiuous memory 

it++;
cout << *(it) << " ";  //{20,30,50,60}

//


vector<int>::iterator it = v.end();
vector<int>::iterator it = v.rend();//Never used 
vector<int>::iterator it = v.rbegin();//Reverse 


{20,67,89,90,67}  //vector 


for(vector<int>::iteraor it = v.begin(); it != v.end(); it++){
	cout << *(it) << " "; //its bit long method which now not use in programming 

}
for(auto it = v.begin(); it! = v.end(); it++){//print vector 
cout << *(it) << " ";
	
}
for(auto it : v){
	cout << it << " ";
}
//{10,20,12,23}
v.erase(v.begin() + 1 );

//{10,20,12,23,35}
v.erase(v.begin() + 2, v.begin() + 4 );  //{10,20,30,40} {Start , end}


//Insert Function
vector<int>v(2,100); //{100,100}
v.insert(v.begin()  , copy.begin() , copy.end()); //{50,50,	

ssss
