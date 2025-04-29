#include <iostream>

using namespace std;

int main(){

    int FArray[5] = {1, 2, 3, 4, 5};

    int *PInteger= FArray;

    std::cout << "PInteger: " << *PInteger << std::endl;

    std::cout << "PInteger+3: " << *(PInteger + 3) << std::endl;

    return 0;
}
