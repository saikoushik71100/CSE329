//this algo is based on 2 facts 
//1)if we subtract smaller number from the larger one, gcd does not change which means if we keep subtract repeatedly the larger of the two we end up with gcd
//2) now instead of subtract if we divide the smaller number the algo stops when we find the 0

#include <iostream>
using namespace std;
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() {
    int num1 = 10;
    int num2 = 2;
    
    int result = gcd(num1, num2);
    
    cout << "GCD of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}

