// Evlikiedes algorithm
#include <iostream>
	
int amena(int a,int b){
		int r;
		while((a%b)>0){
				r = a%b;
				a=b;
				b=r;
			}
			return b;
	}


int main(){
		std::cout<<amena(15,20);
	}
