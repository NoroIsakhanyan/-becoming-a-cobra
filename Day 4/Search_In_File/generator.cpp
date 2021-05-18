#include<iostream>
#include<fstream>
#include<vector>


std::vector<int> my_shuffle(std::vector<int>& v) {
        
        int n = v.size();

        for(int i = 0;i < n;++i){
           int rand = std::rand() % n;
            std::swap(v[0],v[rand]);
        }
        return v;
    } 

void generator(std::string& fname,int n){
	std::fstream file(fname);
	std::vector<int> v;

	int rand = std::rand() % n + 1;

	for(int i = 1;i <= n; ++i){
		if(i == rand){
			continue;
		}

		v.push_back(i);
	}

	my_shuffle(v);

	int size = v.size();

	for(int i = 0; i < size; ++i){
		file << v[i] << '\n';
	}

}


int main(){
	std::string file_name = "main.txt";
	int range = 100;

	generator(file_name,range);
}