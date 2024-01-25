#include<iostream>
using namespace std;


bool isprimeNumber(int number) {
	int div = 2;
	
	if (number < 2) {
		return 0;
	}
	else {
		while (div * div <= number) {
			if (number % div == 0) {
				return 0;
			}
			else {
				div += 1;
			}
		}
		cout << "number의 값: " << number << endl; // 확인용
		cout << "div의 값: " << div << endl; // 확인용
		return 1;
	}
}



int main(){
	int number1 = 0;
	int number2 = 0;

	cin >> number1 >> number2;
	if (number2 < number1) {
		int temp = 0;
		temp = number2;
		number2 = number1;
		number1 = temp;
	}
	for (int i = number1; i <= number2; i++) {
		if (isprimeNumber(i)) {
			cout << i << endl;
		}
	}
}