#include <iostream>
#include <bits/stdc++.h>
#include <fstream>
#include <vector>
#include <bitset>   
#include <algorithm> 
​
#define N 100
​
const size_t n = 100;
std::bitset<n> bits;
const size_t min = 1;
​
int finder(std::string& fname){
	std::fstream file;
	file.open(fname);
​
	file.close();

	//Find with O(n) complexity
	
	for(size_t i = 0 ;i < n; ++i){
		if(!bits[i]){
			return i + min;
		}
	}
	
	return -1;
}
​
​
​
int main(){
	std::string file_name = "main.txt";
	std::cout << finder(file_name) ;
	
}
