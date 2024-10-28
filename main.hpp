#include <iostream>
using namespace std;

void getTwoValues(int &begin, int &end){
 cout << "enter two integer values (begin < end): " << endl;
 cin >> begin >> end ;
 while (begin < end){
    break;
 } if (begin > end){
    cout << "first integer must be smaller than the second " << endl;
    cin >> begin >> end ;
 }
 }
int getNextPrime(int begin) {
    int num = begin + 1;
    while (true) {
        bool isPrime = true;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            return num;
        }
        num++;
    }
}
int getPrevPrime(int end) {
    int num = end - 1;
    while (num > 1) {
        bool isPrime = true;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            return num;
        }
        num--;
    }
    return -1; 
}