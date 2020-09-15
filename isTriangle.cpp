
using namespace std;
#include <iostream>


int main() {

		int length1;
		int length2;
		int length3;
		
		bool  isTriangle;
		
		cout << " What is the 1st Length " << endl;
		cin >> length1;
		cout << " What is the 2nd Length " << endl;
		cin >> length2;
		cout << " What is the 3rd Length " << endl;
		cin >> length3;
		
		
		if (length2 > (length1 + length3)) {
			return false;
		} else if (length1 > (length2 + length3)) {
			return false;
		} else if (length3 > (length1 + length2)) {
			return false;
		} else {
			return true;
			cout << "This qualifies as a triangle" << endl;
			
		}
	}
