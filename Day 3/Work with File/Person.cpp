#include <iostream>
#include <fstream>
#include <vector>

using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::fstream;
using std::endl;

fstream file;

class Person{

private:
	string m_name;
	int m_age;
	string m_id;
public:
	Person()
	:m_name{""}, m_age{0}, m_id{""}{}

	void set_name(string name){
		m_name = name;
	}

	void set_age(int age){
		m_age = age;
	}

	void set_id(string id){
		m_id = id;
	}

	string get_name(){
		return m_name;
	}

	string get_id(){
		return m_id;
	}

	int get_age(){
		return m_age;
	}

	~Person();
};

void write(vector<Person>& per){
	file.open("Persons.txt");

	for (int i = 0; i < per.size(); ++i){
		file << per[i].get_name() << endl
		 	 << per[i].get_age() << endl
		 	 << per[i].get_id() << endl;
	}
}

void read(vector<Person>& vec){

	file.open("Persons.txt");
	string name, si;
		int age;
		for (int i = 0; f.good(), i < 3; ++i){
			f >> name >> age >> si;
			vec[i].set_name(name);
			vec[i].set_age(age);
			vec[i].set_social_id(si);
		}
		
}








int main(int argc, char const *argv[])
{

	
}
