#include <stdio.h>

int LCM(int a, int b) {
	int lcm = 0;

	for (int i = 1; 1; ++i) { // 무한 반복문
		if (i % a == 0 && i % b == 0) { // i가 a와 b로 나누어진 나머지가 둘 다 0일 때
			lcm = i; // i의 값을 lcm으로 주고
			break;  // for문 강제 중단
		}
	}

	printf("%d와 %d의 최소 공배수 : %d\n", a, b, lcm);

	return lcm; // 최소 공배수 리턴
}

int LCMSCAN(void) {
	int num1, num2;
	int lcm = 0;

	printf("판별하고 싶은 첫번째 정수 입력: ");
	scanf_s("%d", &num1);
	printf("판별하고 싶은 두번째 정수 입력: ");
	scanf_s("%d", &num2); // 판별하고 싶은 두 수 정수 자료형으로 받음

	for (int i = 1; 1; ++i) { // 무한 반복문
		if (i % num1 == 0 && i % num2 == 0) { // i가 num1과 num2로 나누어진 나머지가 둘 다 0일 때
			lcm = i; // i의 값을 lcm으로 주고
			break;  // for문 강제 중단
		}
	}

	printf("%d와 %d의 최소 공배수 : %d\n", num1, num2, lcm);

	return lcm; // 최소 공배수 리턴
}

int GCD(int c, int d) {
	int gcd = 0;

	for (int i = 1; i <= c && i <= d; ++i) { // i가 1부터 c와 d 중 더 낮은 수까지 올라가는 반복문
		if (c % i == 0 && d % i == 0) { // c와 d 둘 다 i로 나누어 떨어지는 때
			gcd = i; // i를 gdc에 반복 입력 > 그 중 제일 큰 수가 gcd에 마지막으로 입력됨
		}
	}

	printf("%d 와 %d의 최대 공약수: %d\n", c, d, gcd);

	return gcd; // 최대 공약수 리턴
}

int GCDSCAN(void) {
	int num1, num2;
	int gcd = 0;

	printf("판별하고 싶은 첫번째 정수 입력: ");
	scanf_s("%d", &num1);
	printf("판별하고 싶은 두번째 정수 입력: ");
	scanf_s("%d", &num2); // 판별하고 싶은 두 수 정수 자료형으로 받음

	for (int i = 1; i <= num1 && i <= num2; ++i) { // i가 1부터 num1과 num2 중 더 낮은 수까지 올라가는 반복문
		if (num1 % i == 0 && num2 % i == 0) { // num1과 num2가 둘 다 i로 나누어 떨어지는 때
			gcd = i; // i를 gdc에 반복 입력 > 그 중 제일 큰 수가 gcd에 마지막으로 입력됨
		}
	}

	printf("%d와 %d의 최대 공약수 : %d\n", num1, num2, gcd);

	return gcd; // 최대 공약수 리턴
}

int PRIME(int e){
	int result = 1; // 소수라면 result는 초기값 1로 남음
	for (int i = 2; i < e; i++) { // i가 2부터 e보다 1 낮은 수까지 올라가는 반복문 실행
		if (e % i == 0) { // 소수가 아니라면 i로 나누어지고,
			result = 0; // result 값은 0으로 바뀜
			break; // for문 중단
		}
	}
	if (e < 1) { // e를 1보다 낮은 수를 입력하면
		printf("1 이상의 정수를 입력해주세요.\n");
		return 0; // false 리턴
	}
	else if (result == 0) {
		printf("해당 수는 소수가 아닙니다.\n"); // result 값이 0으로 바뀌었기에 소수가 아님
		return 0; // false 리턴
	}
	else {
		printf("해당 수는 소수입니다.\n"); // result 값이 1로 남았기 때문에 소수가 맞음
		return 1; // true 리턴
	}
}

int PRIMESCAN(void){
	int result = 1;
	int num;
	printf("판별하고 싶은 1 이상의 수 입력 : ");
	scanf_s("%d", &num); // 원하는 수 정수 자료형으로 받음
	for (int i = 2; i < num; i++) { // i가 2부터 num보다 1 낮은 수까지 올라가는 반복문 실행
		if (num % i == 0) { // 소수가 아니라면 i로 나누어지고,
			result = 0; // result 값은 0으로 바뀜
			break; // for문 강제 중단
		}
	}
	if (num < 1) { // num을 1보다 낮은 수를 입력하면
		printf("1 이상의 정수를 입력해주세요.\n");
		return 0;  // false 리턴
	}
	else if (result == 0) {
		printf("해당 수는 소수가 아닙니다.\n"); // result 값이 0으로 바뀌었기에 소수가 아님
		return 0; // false 리턴
	}
	else {
		printf("해당 수는 소수입니다.\n"); // result 값이 1로 남았기 때문에 소수가 맞음
		return 1; // true 리턴
	}
}