#include <iostream>
#include <bits/stdc++.h>
#include <fstream>
#include <vector>
#include <bitset>   
#include <algorithm> 

int finder(std::string nfile,int lowerbound)
{
	std::fstream file;
	file.open(nfile);

	std::vector<bool> bits;

	while(file.eof()){
        int num;
        file >> num;
​		int curr = num - lowerbound;
        bits[curr] = true;
    }

    int start = 0;
    int end = bits.size();

    while(start < end){
    	int mid = (start + end)/2;

    	if(bits[mid] == false){
    		return mid + lowerbound;
    	}
    	if((std::count(bits.begin(), bits.end() - mid, true)) == end - mid){
    		start = mid + 1;
    	}
    	if((std::count(bits.begin() + mid, bits.end(), true)) == mid - start){
    		end = mid - 1;
    	}
    }

    return -1;



	file.close();
}

int main(){
	std::string file_name = "main.txt";
	std::cout << finder(file_name,1) ;
	//std::cout << range(bits,min,50);
}