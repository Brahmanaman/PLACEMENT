#include <iostream>
using namespace std;

bool plnstr(string &name, int i , int e){
  if(i >= e){
    return true;
  }

  if(name[i] != name[e]){
    return false;
  }
  return plnstr(name, i+1, e-1);
}

int main() {
  string name = "aman";
  bool ans = plnstr(name, 0, 4);
  if(ans){
    cout<<"given string is plaindrome";
  }
  else{
    cout<<"given string is not plaindrome";
  }
  
  return 0;
}