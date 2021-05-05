#include <iostream>



 
int replaceSpaces(char str[],int MAX)
{
    
    int count = 0, i;
    for (i = 0; str[i]; i++)
        if (str[i] == ' ')
            count++;
 
   
    while (str[i-1] == ' ')
    {
       count--;
       i--;
    }
 
 
    int newlength = i + count * 2 + 1;
 
    
    if (newlength > MAX)
        return -1;
 
    
    int index = newlength - 1;
 
    
    str[index--] = '\0';
 
    
    for (int j=i-1; j>=0; j--)
    {
        
        if (str[j] == ' ')
        {
            str[index] = '0';
            str[index - 1] = '2';
            str[index - 2] = '%';
            index = index - 3;
        }
        else
        {
            str[index] = str[j];
            index--;
        }
    }
 
    return newlength;
}
 

int main()
{
	int MAX = 1000;
    char str[MAX] = " A SH O T ";
 
    int newlength = replaceSpaces(str,MAX);
    for (int i=0; i<newlength; i++)
        std::cout << str[i]<<"|";
    return 0;
}
