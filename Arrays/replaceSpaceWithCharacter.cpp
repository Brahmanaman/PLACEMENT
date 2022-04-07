#include <iostream>

using namespace std;

string replaceSpaces(string &str){
	// Write your code here.
    string ans;
    int j =0;
    for(int i =0; i< str.length();i++){
    	if(str[i] == ' '){
        	ans += "@40";
            j++;
         }
        else ans+=str[i];
    }
    ans[j] = '\0';
    return ans;
    
}

int main() {
    string str = "Coding Ninjas Is A Coding Platform";
    cout<<replaceSpaces(str);
    return 0;
}