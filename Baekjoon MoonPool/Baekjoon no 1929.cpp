//// �ð��ʰ��� ���� -> ���� �߹�
//// ������׽��� ä + �����Ҵ��� �̿��ؼ� �ִ��� �ٿ�����.
//#include<iostream>
//using namespace std;
//
////int isprimeNumber(int number) { // �Ҽ��� ��ȯ
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
////		//cout << "number�� ��: " << number << endl; // Ȯ�ο�
////		//cout << "div�� ��: " << div << endl; // Ȯ�ο�
////		return number;
////	}
////}
//
//int main() {
//	int number1 = 0;
//	int number2 = 0;
//
//	cin >> number1 >> number2;
//	if (number2 < number1) { // ���߿� �Է¹��� ���� �� Ŭ ��� ����
//		int temp = 0;
//		temp = number2;
//		number2 = number1;
//		number1 = temp;
//	}
//
//	for (int i = number1; i <= number2; i++) { // number1���� number2���� �˻�.
//		int div = 2;
//		int notPrime = 0;
//
//			if (i < 2) {
//				//cout << "2���� ����" << endl;
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