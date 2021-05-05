#include <iostream>
#include <string>
using std::string;
 
void StrComp(string str)
{
    int n = str.length();
    int count = 1;
    for (int i = 0; i < n; i++) {
 
        
        while ((i < n - 1) && (str[i] == str[i + 1])) {
            count++;
            i++;
        }
 
        std::cout << str[i] << count;
    }
}
 


int main()
{
    string str = "coderepublic";
    StrComp(str);
    return 0;
}
