#include <iostream>

int height = 5;
int width = (2 * height) - 1;

void printA()
{
    int n = width / 2, i, j;
    for (i = 0; i < height; i++) {
        for (j = 0; j <= width; j++) {
            if (j == n || j == (width - n)
                || (i == height / 2 && j > n
                    && j < (width - n)))
                std::cout <<"*";
            else
                std::cout << " ";
        }
        std::cout  << "\n";
        n--;
    }
}

void printB()
{
    int i, j, half = (height / 2);
    for (i = 0; i < height; i++) {
        std::cout << "*";
        for (j = 0; j < width; j++) {
            if ((i == 0 || i == height - 1 || i == half)
                && j < (width - 2))
                std::cout << "*";
            else if (j == (width - 2)
                     && !(i == 0 || i == height - 1
                          || i == half))
                std::cout << "*";
            else
                std::cout << " ";
        }
        std::cout << "\n";
    }
}
  
void printC()
{
    int i, j;
    for (i = 0; i < height; i++) {
        std::cout << "*";
        for (j = 0; j < (height - 1); j++) {
            if (i == 0 || i == height - 1)
                std::cout << "*";
            else
                continue;
        }
        std::cout << "\n";
    }
}

void printPattern(char character)
{
    switch (character) {
    case 'A':
        printA();
        break;
    case 'B':
        printB();
        break;
    case 'C':
        printC();
        break;
    }
}
  
int main()
{
    char character = 'A';
    printPattern(character);
    return 0;
}