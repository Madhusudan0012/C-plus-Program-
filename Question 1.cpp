#include<bits/stdc++.h>
using namespace std;
/*
Take the age from the user and then decide accordingly 
1) if age <18 ,
Print-> not eligiable for job"
2) if  age >= 18
print-> eligiable for job 
3) if age >= 55 and age <=57
print-> eligiable for job , but retireent soon
4) if age > 57
print->retirement time
*/
int main(){
	int age;
	cin >> age;
	 
	if(age>18){
		cout << "not eligiable for job";
	}
	else if(age>=18 && age<=54){
		cout << "ELigiable for job";
		
	}
	else if(age <= 57){
		cout << "retirement time ";
	}
	return 0;
}

