#include <iostream>
#include <cstring>
#include <bits/stdc++.h> 
using std::string;

bool arepermut(string s1,string s2){
	
    int n1 = s1.length();
    int n2 = s2.length();
    
    if (n1 != n2){
      return false;
	}
 
    std::sort(s1.begin(), s1.end());
    std::sort(s2.begin(), s2.end());
 
 
    for (int i = 0; i < n1;  i++){
       if (s1[i] != s2[i]){
         return false;
	}
}
    return true;
}
	
	
int main(){
    string str1 = "test";
    string str2 = "ttes";
    
    if (arepermut(str1, str2)){
			std::cout<< "yes";
		}else  std::cout << "no";
 
    return 0;
}
