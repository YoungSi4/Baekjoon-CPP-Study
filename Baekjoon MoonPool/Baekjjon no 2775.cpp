// no 2775 �γ�ȸ���� ���׾�
// ���� �����Ҵ� �Ἥ �غ���
#include<iostream>
using namespace std;

int main() {
	/*
	 ���� 5�� 5ȣ�� ��� �;�
	 �׷���,
	 4�� 1ȣ ~ 5ȣ���� ����� �� �ո�ŭ...

	 0��: 1 2 3 4 5
	 1��: 1 3 6 10 15
	 2��: 1 4 10 16 31
	 3��: 1 5 15 31 62
	 4��: 1 6 21 52 114
	 5��: 1 7 28 80 194
	 ...
	 Resident[0][i-1] = i
	 Resident[a][0] = 1
	 Resident[a][b-1] = Resident[a-1][b] + Resident[a][b-1]
	 b > 1

	 �����Ҵ� �ؾ��ϳ�.
	 Apartment = [a][b]
	 */
	
	