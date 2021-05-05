#include <iostream>

void ZeroMatrix(int** arr,int r, int c, int rt, int ct){
	
	for(int i = rt; i < r; ++i){
		arr[rt][i] = 0;
		}
		
	for( int j = ct; j < c; ++j ){
		arr[j][ct] = 0;
	}	
	
	for(int i = 0;i<r;++i){
			for(int j = 0;j<c;++j){
					std::cout << arr[i][j]<<" ";
				}
				std::cout << std::endl;
			}
			std::cout << std::endl;
}

int main(){
	int row =3, col=3;
		int** arrp =new int*[row];
		for(int i = 0;i<row; ++i){
			arrp[i]=new int[col];
		}

		//cin
		for(int i = 0;i<row;++i){
			for(int j = 0;j<col;++j){
				arrp[i][j]=1;
			}
		}

		//cout
		for(int i = 0;i<row;++i){
			for(int j = 0;j<col;++j){
				std::cout << arrp[i][j] <<" ";
			} 
			std::cout << std::endl;
		}
		std::cout << std::endl;
		
		ZeroMatrix(arrp,row,col,0,0);
		
		for(int i = 0;i<row;++i){
				delete[] arrp[i];
			}
			
		delete[] arrp;
		
	}
