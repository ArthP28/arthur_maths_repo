#include <iostream>
using namespace std;

void square(int& num);

int main()
{
    int numberToSquare = 3;
    square(numberToSquare);
    cout << numberToSquare <<endl;
    return 0;
}

void square(int& num){
    num *= num;
}