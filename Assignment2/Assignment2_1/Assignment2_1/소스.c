#include <stdio.h>

int underrecursion(int num, int base) { // 10������ 2���� ~ 10�������� ��ȯ�ϴ� �Լ�
	if (num < base) {
		printf("%d", num); // ��ȯ�� ���� �����ڸ��� ���
	}
	else {
		underrecursion(num / base, base); // ����Լ� �̿� : �Էµ� ���� ������ ����
		printf("%d", num & base); // ��ȯ�� ���� �ڸ��� ������� ���
	}
}

int overreucursion(int num, int base) { // 10������ 11���� ~ 16�������� ��ȯ�ϴ� �Լ�
	if (num < base) {
		trans(num, base); // ��ȯ�� ���� �����ڸ��� ���
	}
	else {
		overreucursion(num / base, base); // ����Լ� �̿� : �Էµ� ���� ������ ����
		trans(num % base); // trans �Լ� �̿� : ��ȯ�� ���� �ڸ��� ������� ���
	}
}

int trans(int num) { // 10���� ū ���ڸ� ���ڷ� ��ȯ�ϴ� �Լ� (11���� �̻� �ʿ�)
	if (num < 10) {
		printf("%d", num); // ���ڰ� 10���� ������ �״�� ���� ���
	}
	else { 
		printf("%c", 'A' + num - 10); // ���ڰ� 10���� ũ�� ���ڷ� ��ȯ�Ͽ� ���
	}
}

int main(void){
	int num, base; // int ���������� num, base ���� ����

	printf("��ȯ�� 10���� ��� �Է� : ");
	scanf_s("%d", &num); // num ������ ��ȯ�ϰ� ���� �� ����
	printf("��ȯ�� ���� �Է� (2~16) : ");
	scanf_s("%d", &base); // base ������ ��ȯ�ϰ� ���� ���� ����

	if (num <= 0) {
		printf("����� �Է����ּ���.");
		return 0; // 10���� ����� �ƴ� �� �Լ� ����
	}
	else if (base < 2 || base > 16) {
		printf("2~16�� ������ �Է����ּ���.");
		return 0; // 2���� 16 ������ ������ �ƴ� �� �Լ� ����
	}
	else if (base <= 10) {
		underrecursion(num, base); // 10���� ���� ���� ��ȯ�� ��� underrecursion �Լ� ����
	}
	else if (base > 10) {
		overreucursion(num, base); // 11���� �̻� ���� ��ȯ�� ��� overrecursion �Լ� ����
	}
}