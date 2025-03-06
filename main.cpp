#include <iostream>
using namespace std;

int power(int num, int power);

int main()
{
    cout << power(9, 3) << endl;
    return 0;
}

int power(int num, int power){
    int numToPower = num;
    int expRef = num;
    for(int i = 0; i < power - 1; i++){
        numToPower *= expRef;
    }
    return numToPower;
}