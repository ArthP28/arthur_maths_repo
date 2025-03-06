#include <iostream>
using namespace std;

void power(int& num, int power);

int main()
{
    int numberToSquare = 9;
    power(numberToSquare, 3);
    cout << numberToSquare <<endl;
    return 0;
}

void power(int& num, int power){
    int expRef = num;
    for(int i = 0; i < power - 1; i++){
        num *= expRef;
    }
}