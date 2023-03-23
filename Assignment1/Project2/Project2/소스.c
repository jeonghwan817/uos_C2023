#include <stdio.h>

int main(void) {

	char name[30], depart[30]; // 변수 name(이름), depart(학과명)를 여유 공간이 30바이트인 char형 문자열로 생성
	int birth, number; // 변수 birth(생년월일), number(학번)을 정수 자료형으로 생성

	printf("이름을 입력하세요 : "); 
	scanf_s(" %s", name, 30); // %s로 이름 변수 입력

	printf("생년월일을 입력하세요 : ");
	scanf_s(" %d", &birth); // %d로 생년월일 변수 입력

	printf("학번을 입력하세요 : ");
	scanf_s(" %d", &number); // %d로 학번 변수 입력

	printf("학과명을 입력하세요 : ");
	scanf_s(" %s", depart, 30); // %s로 학과명 변수 입력

	printf("\n당신에 대한 정보입니다.\n");
	printf("이름 : %s\n생년월일 : %d\n학번 : %d\n학과명 : %s\n", name, birth, number, depart); // 입력받은 모든 변수를 printf로 출력
}