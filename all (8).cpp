#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string str;
	cin>>str;
	int upper=0;
	int lower=0;
	for(char c:str){
	    if(isupper(c)){
	        upper++;
	    }
	    else if(islower(c)){
	       lower++;
	    }
	}
	for(char c :str){
	if(upper>lower){
	    c = toupper(c);
	    cout<<c;
	}
	else if(lower>upper){
	    c = tolower(c);
	    cout<<c;
	}
	else{
	    c = tolower(c);
	    cout<<c;
	}
}
}
