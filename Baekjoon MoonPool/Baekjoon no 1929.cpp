//// 시간초과로 실패 -> 안해 야발
//// 에라토네스의 채 + 정적할당을 이용해서 최대한 줄여보자.
//#include<iostream>
//using namespace std;
//
////int isprimeNumber(int number) { // 소수면 반환
////	int div = 2;
////
////	if (number < 2) {
////		return 0;
////	}
////	else {
////		while (div * div <= number) {
////			if (number % div == 0) {
////				return 0;
////			}
////			else {
////				div += 1;
////			}
////		}
////		//cout << "number의 값: " << number << endl; // 확인용
////		//cout << "div의 값: " << div << endl; // 확인용
////		return number;
////	}
////}
//
//int main() {
//	int number1 = 0;
//	int number2 = 0;
//
//	cin >> number1 >> number2;
//	if (number2 < number1) { // 나중에 입력받은 수가 더 클 경우 정렬
//		int temp = 0;
//		temp = number2;
//		number2 = number1;
//		number1 = temp;
//	}
//
//	for (int i = number1; i <= number2; i++) { // number1부터 number2까지 검사.
//		int div = 2;
//		int notPrime = 0;
//
//			if (i < 2) {
//				//cout << "2보다 작음" << endl;
//				continue;
//			}
//			else {
//				while (div * div <= i) {
//					if (i % div == 0) {
//						notPrime = 1;
//						break;
//					}
//					else {
//						div += 1;
//					}
//				}
//				if (notPrime)continue;
//				cout << i << endl;
//			}
//	}
//	return 0;
//}