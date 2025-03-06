#include <iostream>
using namespace std;

double power(double num, int power);

int main()
{
    double numberToSquare = 9.5;
    cout << power(numberToSquare, 3) <<endl;
    return 0;
}

double power(double num, int power){
    double expRef = num;
    double numToPower = num;
    for(int i = 0; i < power - 1; i++){
        numToPower *= expRef;
    }
    return numToPower;
}