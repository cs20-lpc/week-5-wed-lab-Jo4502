#include <iostream>
using namespace std;

// Ackermann function definition
unsigned long long ackermann(unsigned int m, unsigned int n) {
 // TODO: Complete the code.
    if (m == 0) {               // base case 1
        return n + 1;
    }
    else if (n == 0) {          //base case 2
        return ackermann( m - 1, 1);
    }
    else {                      // recursive case m>0 and n>0
        return ackermann(m - 1, ackermann(m, n - 1));
    }
}

int main() {
    unsigned int m, n;
    cout << "Enter m and n: ";
    cin >> m >> n;

    cout << "Ackermann(" << m << ", " << n << ") = " 
         << ackermann(m, n) << endl;

    // try A(3,4)
    cout << "Ackermann(3,4) = " << ackermann(3, 4) << endl;



    return 0;
}
