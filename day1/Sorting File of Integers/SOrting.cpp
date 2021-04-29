#include <iostream>
#include <fstream>
#include <set>

std::fstream input;
std::fstream output;


int main() {
	int size = 224800;
	int num;
	std::fstream arr[10];
	std::multiset<int> input100kb; 
	//generate
	input.open("InputFile.txt");
	for (int i = 0; i <= size; ++i) {
		num = rand() % 10000 + 1;
		input << num;
		input << '\n';
	}

	input.close();
	//generate


	//divide
   input.open("InputFile.txt");
	for (int i = 0; i < 10; ++i) {
            arr[i].open(std::to_string(i) + ".txt");
        }

	for(int i = 0; i <= 10; ++i){
		for(int j = 0; j < 22480; ++j){
			int tmp;
			input >> tmp;
			input100kb.insert(tmp);
		}
		for (auto it = input100kb.begin(); it != input100kb.end(); ++it) {
                arr[i] << *it << std::endl;
            }
            input100kb.clear();
	}

	for (int i = 0; i < 10; ++i) {
            arr[i].close();
        }


	input.close();

	//divide and merge in output file
	output.open("OutputFile.txt");

	std::multiset<int> cmp;

	for (int i = 0; i < 10; ++i) {
            arr[i].open(std::to_string(i) + ".txt");
            if(arr[i].is_open()){
            	std::cout << i << "isopen" << std::endl;
            }
        }


        for(int i = 0; i < 22481; ++i){
        	for(int x = 0; x < 10;++x){
        		int temp;
        		arr[x] >> temp;
        		cmp.insert(temp);
   

        	for(auto &x : cmp){
        		output << x << std::endl;
        	}
        	cmp.clear();
        	break;
        }


    for (int i = 0; i < 10; ++i) {
            arr[i].close();
        }

	output.close();
	//divide and merge in output file
}
}
