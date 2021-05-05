#include <iostream>


void rotateMatrix(int** mat) 
{ 
    
    for (int i = 0; i < 4 / 2; i++) { 
        
        
        for (int j = i; j < 4 - j - 1; j++) { 
             
            int temp = mat[i][j]; 
  
             
            mat[i][j] = mat[i][4 - 1 - j]; 
  
            
            mat[j][4 - 1 - i] 
                = mat[4 - 1 - i][4 - 1 - j]; 
  
             
            mat[4 - 1 - i][4 - 1 - i] 
                = mat[4 - 1 - j][i]; 
  
            
            mat[4 - 1 - j][i] = temp; 
        } 
    } 
} 
  

  

int main() 
{ 
   
    int row =4, col=4;
		int** arrp =new int*[row];
		for(int i = 0;i<row; ++i){
			arrp[i]=new int[col];
		}

		//cin
		std::cout << "enter array elements" << '\n';
		for(int i = 0;i<row;++i){
			for(int j = 0;j<col;++j){
				std::cin >> arrp[i][j];
			}
		}
		std::cout << std::endl;

    
    rotateMatrix(arrp);
     
    	//cout
		for(int i = 0;i<row;++i){
			for(int j = 0;j<col;++j){
				std::cout << arrp[i][j] <<" ";
			} 
			std::cout << std::endl;
		}
		std::cout << std::endl;
  
  
	for(int i = 0;i<row;++i){
				delete[] arrp[i];
			}
			
		delete[] arrp;
		
    return 0; 
} 
