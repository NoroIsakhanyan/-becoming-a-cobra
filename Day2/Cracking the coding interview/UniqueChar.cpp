#include <iostream>
#include <cstring>
using std::string;

bool uniqueChar(string s)
{
 
    for (int i = 0; i <(int)s.length() - 1; i++) {
        for (int j = i + 1; j < (int)s.length()-1; j++) {
            if (s[i] == s[j]) {
                return false;
            }
        }
    }
 
    return true;
}
 
int main()
{
    string s = "CodeRepublic";
 
    if (uniqueChar(s)) {
        std::cout << "The String " << s << " has all unique characters\n";
    }
    else {
        std::cout << "The String " << s << " has duplicate characters\n";
    }
    return 0;
}
