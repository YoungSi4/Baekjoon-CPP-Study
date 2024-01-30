// No. 1259 팰린드롬수
// https://www.acmicpc.net/problem/1259
//
// 정답!
//
#include<iostream>
#include<string>
using namespace std;

int main() {
	string numbers;
	
	while(1){
		getline(cin, numbers);
		int counts = 0;
		if (numbers[0] == '0') {
			break;
		}

		int length = numbers.size();

		for (int i = 0; i < length / 2; i++) {
			if (numbers[i] != numbers[length - 1 - i]) {
				counts++;
				break;
			}
		}
		if (counts == 0) {
			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}
	}

	return 0;
}