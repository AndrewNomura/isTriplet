/********************************************************************************************************/
//Given an array of integers, write a function that returns true if there is a triplet
//that satisfies the Pythagorean Theorem
#include <iostream>
using namespace std;

bool solution(int num[], int sizeArr) {

	for (int a = 0; a < sizeArr; a++) {
		for (int b = a + 1; b < sizeArr; b++) {
			for (int c = b + 1; c < sizeArr; c++) {
				int x = num[a] * num[a], y = num[b] * num[b], z = num[c] * num[c];
				if (x == y + z || y == x + z || z == x + y) {
					return true;
					break;
				}
			}
		}
	}
	return false;
}


int main() {
	int num[] = { 3, 1, 4, 6, 5};
	int sizeArr = sizeof(num) / sizeof(num[0]);

	solution(num, sizeArr) ? cout << "True" : cout << "False" << endl;

	return 0;
}

/********************************************************************************************************/
