#include <iostream>
#include <fstream>
#include <limits>

void Ret10(std::fstream& read) {
    std::string line;
    for (int i = 0; i < 10; ++i) {
        read >> line;
    }
    std::cout << line;
}

int main() {
    std::fstream read("Line.txt");
    Ret10(read);
}