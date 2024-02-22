// Author: Zuhayer Tashin
// Course: CSCI-135
// Instructor: Tong Yi
// Assignment: Lab 5A
// Write a program numbers.cpp that defines a function
// bool isTwinPrime(int n);
// A prime number N is called a twin prime if either N-2 or N+2 (or both of them) is also a prime.
// For example, a prime 17 is a twin prime, because 17+2 = 19 is a prime as well.
// The first few twin primes are: 3, 5, 7, 11, 13, 17, 19, 29, 31 …


#include <iostream>
using namespace std;


bool isPrime(int n){
    if (n <= 1)
        return false;
 
    // Check from 2 to n-1
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return false;
 
    return true;

}


bool isTwinPrime(int n){
    
    while(isPrime(n)){ // check from the function isPrime

        if (isPrime(n - 2) || isPrime(n + 2)){
            return true; // returns true

        } else if (!isPrime(n + 2) && !isPrime(n - 2)){
            return false; // return false

        } else if (!isPrime(n)){
            return false; // return false

        } else {
            return true; // return true
        }

    }

    return false; // returns false
}


int main() {

    int num_1;

    cout << "Enter the first number: ";
    cin >> num_1;


    cout << isTwinPrime(num_1) << endl;



    return 0;

}