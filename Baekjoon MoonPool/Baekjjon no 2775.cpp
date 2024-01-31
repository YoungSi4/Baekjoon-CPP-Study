// no 2775 �γ�ȸ���� ���׾�
// https://www.acmicpc.net/problem/2775
// ����!
#include<iostream>
using namespace std;

int main() {
	/*
	 ���� 5�� 5ȣ�� ��� �;�
	 �׷���,
	 4�� 1ȣ ~ 5ȣ���� ����� �� �ո�ŭ...
	 
	 ����: 1 ~ 5ȣ��� �ϱ� �ߴµ�,
	 ���� �ε����� 0 ~ 4��� �� �������.0

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

	 �����Ҵ� �ؾ��ϳ�
	 */

	// ���� ���� (main�Լ� ����, �ݺ� Ƚ��)
	int repeat;
	cin >> repeat;

	// �Է� �޴� Ƚ����ŭ �ݺ�
	for (int i = 0; i < repeat; i++) {
		// ���� ȣ�� �Է� ���� (����)
		int floor;
		int room;
		cin >> floor;
		cin >> room;

		// 2���� �迭�� �����Ҵ�
		// ���� 0 ~ �Է¹��� ������ == ���� + 1
		// ȣ�� 1 ~ �Է¹��� ȣ���� == ����, index���� 1�� �ٿ��ָ� ��.
		int** Apartment = new int*[floor + 1];
		for (int j = 0; j <= floor; j++) {
			Apartment[j] = new int[room];
		}

		// �����Ҵ�� �ڸ��� ���� ä���ֱ� 3�ܰ�
		
		// 1.0�� �� �־��ֱ� (������ + ������ ��� ����)
		for (int k = 0; k < room; k++) {
			Apartment[0][k] = k + 1;
		}

		// 2. 1ȣ �� �־��ֱ�. ��� 1�� ������
		// 0�� 1ȣ�� �տ��� ä������ 1�� 1ȣ���� n�� 1ȣ���� 1�� ä���.
		for (int k = 1; k <= floor; k++) {
			Apartment[k][0] = 1;
			// cout << "Apartment[k][0]" << Apartment[k][0] << endl;
		}

		// 3. �츮�� �ñ��� ȣ������ ����ؼ� ����ֱ�.
		for (int j = 1; j <= floor; j++) { // 1������ �Է� ���� ������
			for (int k = 1; k < room; k++) { // 2ȣ���� �Է� ���� ȣ����
				Apartment[j][k] = Apartment[j - 1][k] + Apartment[j][k - 1];
			/*	cout << "Apartment[J-1][k]: " << Apartment[j - 1][k] << endl;
				cout << "Apartment[j][k - 1]" << Apartment[j][k - 1] << endl;*/
			}
		}
		cout << Apartment[floor][room - 1] << endl;

		// �����Ҵ� ȸ��
		for (int j = 0; j <= floor; j++) {
			delete Apartment[j];
		}
		delete[] Apartment;
	}
	return 0;
}