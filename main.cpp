#include <iostream>
using namespace std;

void power(double& num, int power);

int main()
{
    double numberToSquare = 9.5;
    power(numberToSquare, 3);
    cout << numberToSquare <<endl;
    return 0;
}

void power(double& num, int power){
    double expRef = num;
    for(int i = 0; i < power - 1; i++){
        num *= expRef;
    }
}