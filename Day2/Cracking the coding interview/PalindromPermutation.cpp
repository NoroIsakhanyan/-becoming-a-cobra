# include <bits/stdc++.h>
using namespace std;
 
bool canFormPalindrome(string a)
{
 
    int bitvector = 0, mask = 0;
    for (int i=0; a[i] != '\0'; i++)
    {
        int x = a[i] - 'a';
        mask = 1 << x;
 
        bitvector = bitvector ^ mask;
    }
 
    return (bitvector & (bitvector - 1)) == 0;
}
 

int main()
{
 
    if (canFormPalindrome("aabbaa"))
    cout << ("Yes") << endl;
    else
    cout << ("No") << endl;
 
    return 0;
}
