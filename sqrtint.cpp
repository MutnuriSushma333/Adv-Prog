#include <iostream>

using namespace std;

int square_root(int num1) {
            long left_part = 0;
            long right_part = num1 / 2 + 1;
            while (left_part <= right_part) {
                long mid = left_part + (right_part - left_part) / 2;
                long result = mid * mid;
                if (result == (long) num1) {
                    return (int) mid;
                } else if (result > num1) {
                    right_part = mid - 1;
                } else {
                    left_part = mid + 1;
                }
            }
            return (int) right_part;
        }
    

int main() {
    int n = 81;
	cout << "\nSquare root of " << n << " = " << square_root(n) << endl;		
    n = 8;
	cout << "\nSquare root of " << n << " = " << square_root(n) << endl;
    n = 627;
	cout << "\nSquare root of " << n << " = " << square_root(n) << endl;
	n =225;
	cout << "\nSquare root of " << n << " = " << square_root(n) << endl;
	return 0;
}
