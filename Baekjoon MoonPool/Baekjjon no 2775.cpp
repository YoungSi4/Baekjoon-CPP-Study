// no 2775 부녀회장이 될테야
// https://www.acmicpc.net/problem/2775
// 성공!
#include<iostream>
using namespace std;

int main() {
	/*
	 내가 5층 5호에 살고 싶어
	 그러면,
	 4층 1호 ~ 5호까지 사람의 수 합만큼...
	 
	 주의: 1 ~ 5호라고 하긴 했는데,
	 실제 인덱스는 0 ~ 4라는 걸 명심하자.0

	 0층: 1 2 3 4 5
	 1층: 1 3 6 10 15
	 2층: 1 4 10 16 31
	 3층: 1 5 15 31 62
	 4층: 1 6 21 52 114
	 5층: 1 7 28 80 194
	 ...
	 Resident[0][i-1] = i
	 Resident[a][0] = 1
	 Resident[a][b-1] = Resident[a-1][b] + Resident[a][b-1]
	 b > 1

	 정적할당 해야하나
	 */

	// 변수 선언 (main함수 지역, 반복 횟수)
	int repeat;
	cin >> repeat;

	// 입력 받는 횟수만큼 반복
	for (int i = 0; i < repeat; i++) {
		// 층과 호수 입력 받음 (지역)
		int floor;
		int room;
		cin >> floor;
		cin >> room;

		// 2차원 배열을 동적할당
		// 층은 0 ~ 입력받은 층까지 == 길이 + 1
		// 호는 1 ~ 입력받은 호까지 == 길이, index에서 1씩 줄여주면 됨.
		int** Apartment = new int*[floor + 1];
		for (int j = 0; j <= floor; j++) {
			Apartment[j] = new int[room];
		}

		// 동적할당된 자리에 값을 채워주기 3단계
		
		// 1.0층 값 넣어주기 (고정임 + 없으면 계산 못함)
		for (int k = 0; k < room; k++) {
			Apartment[0][k] = k + 1;
		}

		// 2. 1호 값 넣어주기. 모두 1로 고정임
		// 0층 1호는 앞에서 채웠으니 1층 1호부터 n층 1호까지 1을 채운다.
		for (int k = 1; k <= floor; k++) {
			Apartment[k][0] = 1;
			// cout << "Apartment[k][0]" << Apartment[k][0] << endl;
		}

		// 3. 우리가 궁금한 호수까지 계산해서 집어넣기.
		for (int j = 1; j <= floor; j++) { // 1층부터 입력 받은 층까지
			for (int k = 1; k < room; k++) { // 2호부터 입력 받은 호까지
				Apartment[j][k] = Apartment[j - 1][k] + Apartment[j][k - 1];
			/*	cout << "Apartment[J-1][k]: " << Apartment[j - 1][k] << endl;
				cout << "Apartment[j][k - 1]" << Apartment[j][k - 1] << endl;*/
			}
		}
		cout << Apartment[floor][room - 1] << endl;

		// 동적할당 회수
		for (int j = 0; j <= floor; j++) {
			delete Apartment[j];
		}
		delete[] Apartment;
	}
	return 0;
}