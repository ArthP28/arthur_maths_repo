#include <iostream>
using namespace std;

double power(double num, int power);
int nextPrime(int start);
bool isPrime(int prime);

int main()
{
    cout << nextPrime(9) <<endl;
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

bool isPrime(int prime){
    if(prime <= 1) { return false; }
    if(prime <= 3) { return true; }

    if(prime % 2 == 0 || prime % 3 == 0) { return false; }

    for(int i = 5; i * i <= prime; i+=6){
        if(prime % i || prime % (i + 2) == 0){
            return false;
        }
    }
    return true;
}

int nextPrime(int start){
    if (start <= 1){
        return 2;
    }
    int prime = start;
    bool primeFound = false;

    while(!primeFound){
        prime++;
        if(isPrime(prime)){
            primeFound = true;
        }
    }
    return prime;
}