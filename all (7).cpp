#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	string str;
	cin>>str;
	set<char> uniqueLetter;
	
	for(char c : str){
	    uniqueLetter.insert(c);
	}
    
    if(uniqueLetter.size() % 2 ==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
    
    return 0;
}
