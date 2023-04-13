#include <stdio.h>

int underrecursion(int num, int base) { // 10진법을 2진법 ~ 10진법으로 변환하는 함수
	if (num < base) {
		printf("%d", num); // 변환된 수의 일의자리수 출력
	}
	else {
		underrecursion(num / base, base); // 재귀함수 이용 : 입력된 수를 진수로 나눔
		printf("%d", num & base); // 변환된 수를 자리수 순서대로 출력
	}
}

int overreucursion(int num, int base) { // 10진법을 11진법 ~ 16진법으로 변환하는 함수
	if (num < base) {
		trans(num, base); // 변환된 수의 일의자리수 출력
	}
	else {
		overreucursion(num / base, base); // 재귀함수 이용 : 입력된 수를 진수로 나눔
		trans(num % base); // trans 함수 이용 : 변환된 수를 자리수 순서대로 출력
	}
}

int trans(int num) { // 10보다 큰 숫자를 문자로 변환하는 함수 (11진법 이상만 필요)
	if (num < 10) {
		printf("%d", num); // 숫자가 10보다 작으면 그대로 숫자 출력
	}
	else { 
		printf("%c", 'A' + num - 10); // 숫자가 10보다 크면 문자로 변환하여 출력
	}
}

int main(void){
	int num, base; // int 정수형으로 num, base 변수 받음

	printf("변환할 10진수 양수 입력 : ");
	scanf_s("%d", &num); // num 변수에 변환하고 싶은 수 받음
	printf("변환할 진법 입력 (2~16) : ");
	scanf_s("%d", &base); // base 변수에 변환하고 싶은 진법 받음

	if (num <= 0) {
		printf("양수를 입력해주세요.");
		return 0; // 10진수 양수가 아닐 시 함수 종료
	}
	else if (base < 2 || base > 16) {
		printf("2~16의 진법을 입력해주세요.");
		return 0; // 2에서 16 사이의 진법이 아닐 시 함수 종료
	}
	else if (base <= 10) {
		underrecursion(num, base); // 10진법 이하 진법 변환인 경우 underrecursion 함수 실행
	}
	else if (base > 10) {
		overreucursion(num, base); // 11진법 이상 진법 변환인 경우 overrecursion 함수 실행
	}
}