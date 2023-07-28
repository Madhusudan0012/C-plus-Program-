#include<bits/stdc++.h>
using namespace std;
int main(){
	/*
     Take the day no and print the corresponding day 
     for 1 print Monday 
     for 2 print Tuesday and so on for 7 print Sunday 
     */
     
    int day;
    cin >> day;
    switch(day){
    	case 1:
    		cout << "Monday ";
    		break;
    	case 2:
    		cout << "Tuesday";
    		break;
    		
    	case 3:
    		cout << "Webnesday";
    		break;
    	case 4:
    		cout << "thusday";
    		break;
    	case 5:
    		cout << " Friday";
    		break;
    	case 6:
    		cout << "Saturday";
    		break;
    	case 7: 
    	    cout << "Sunday or Called Funday and Also Called Coding Day";
    	    break;
    	    cout << "check inside switch statement";
	}
    return 0;
}
