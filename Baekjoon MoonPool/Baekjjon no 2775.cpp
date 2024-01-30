// no 2775 부녀회장이 될테야
// ㄴㄴ 동적할당 써서 해보셈
#include<iostream>
using namespace std;

int main() {
	/*
	 내가 5층 5호에 살고 싶어
	 그러면,
	 4층 1호 ~ 5호까지 사람의 수 합만큼...

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

	 정적할당 해야하나.
	 Apartment = [a][b]
	 */
	
	