#include <stdio.h>

int LCM(int a, int b) {
	int lcm = 0;

	for (int i = 1; 1; ++i) { // ���� �ݺ���
		if (i % a == 0 && i % b == 0) { // i�� a�� b�� �������� �������� �� �� 0�� ��
			lcm = i; // i�� ���� lcm���� �ְ�
			break;  // for�� ���� �ߴ�
		}
	}

	printf("%d�� %d�� �ּ� ����� : %d\n", a, b, lcm);

	return lcm; // �ּ� ����� ����
}

int LCMSCAN(void) {
	int num1, num2;
	int lcm = 0;

	printf("�Ǻ��ϰ� ���� ù��° ���� �Է�: ");
	scanf_s("%d", &num1);
	printf("�Ǻ��ϰ� ���� �ι�° ���� �Է�: ");
	scanf_s("%d", &num2); // �Ǻ��ϰ� ���� �� �� ���� �ڷ������� ����

	for (int i = 1; 1; ++i) { // ���� �ݺ���
		if (i % num1 == 0 && i % num2 == 0) { // i�� num1�� num2�� �������� �������� �� �� 0�� ��
			lcm = i; // i�� ���� lcm���� �ְ�
			break;  // for�� ���� �ߴ�
		}
	}

	printf("%d�� %d�� �ּ� ����� : %d\n", num1, num2, lcm);

	return lcm; // �ּ� ����� ����
}

int GCD(int c, int d) {
	int gcd = 0;

	for (int i = 1; i <= c && i <= d; ++i) { // i�� 1���� c�� d �� �� ���� ������ �ö󰡴� �ݺ���
		if (c % i == 0 && d % i == 0) { // c�� d �� �� i�� ������ �������� ��
			gcd = i; // i�� gdc�� �ݺ� �Է� > �� �� ���� ū ���� gcd�� ���������� �Էµ�
		}
	}

	printf("%d �� %d�� �ִ� �����: %d\n", c, d, gcd);

	return gcd; // �ִ� ����� ����
}

int GCDSCAN(void) {
	int num1, num2;
	int gcd = 0;

	printf("�Ǻ��ϰ� ���� ù��° ���� �Է�: ");
	scanf_s("%d", &num1);
	printf("�Ǻ��ϰ� ���� �ι�° ���� �Է�: ");
	scanf_s("%d", &num2); // �Ǻ��ϰ� ���� �� �� ���� �ڷ������� ����

	for (int i = 1; i <= num1 && i <= num2; ++i) { // i�� 1���� num1�� num2 �� �� ���� ������ �ö󰡴� �ݺ���
		if (num1 % i == 0 && num2 % i == 0) { // num1�� num2�� �� �� i�� ������ �������� ��
			gcd = i; // i�� gdc�� �ݺ� �Է� > �� �� ���� ū ���� gcd�� ���������� �Էµ�
		}
	}

	printf("%d�� %d�� �ִ� ����� : %d\n", num1, num2, gcd);

	return gcd; // �ִ� ����� ����
}

int PRIME(int e){
	int result = 1; // �Ҽ���� result�� �ʱⰪ 1�� ����
	for (int i = 2; i < e; i++) { // i�� 2���� e���� 1 ���� ������ �ö󰡴� �ݺ��� ����
		if (e % i == 0) { // �Ҽ��� �ƴ϶�� i�� ����������,
			result = 0; // result ���� 0���� �ٲ�
			break; // for�� �ߴ�
		}
	}
	if (e < 1) { // e�� 1���� ���� ���� �Է��ϸ�
		printf("1 �̻��� ������ �Է����ּ���.\n");
		return 0; // false ����
	}
	else if (result == 0) {
		printf("�ش� ���� �Ҽ��� �ƴմϴ�.\n"); // result ���� 0���� �ٲ���⿡ �Ҽ��� �ƴ�
		return 0; // false ����
	}
	else {
		printf("�ش� ���� �Ҽ��Դϴ�.\n"); // result ���� 1�� ���ұ� ������ �Ҽ��� ����
		return 1; // true ����
	}
}

int PRIMESCAN(void){
	int result = 1;
	int num;
	printf("�Ǻ��ϰ� ���� 1 �̻��� �� �Է� : ");
	scanf_s("%d", &num); // ���ϴ� �� ���� �ڷ������� ����
	for (int i = 2; i < num; i++) { // i�� 2���� num���� 1 ���� ������ �ö󰡴� �ݺ��� ����
		if (num % i == 0) { // �Ҽ��� �ƴ϶�� i�� ����������,
			result = 0; // result ���� 0���� �ٲ�
			break; // for�� ���� �ߴ�
		}
	}
	if (num < 1) { // num�� 1���� ���� ���� �Է��ϸ�
		printf("1 �̻��� ������ �Է����ּ���.\n");
		return 0;  // false ����
	}
	else if (result == 0) {
		printf("�ش� ���� �Ҽ��� �ƴմϴ�.\n"); // result ���� 0���� �ٲ���⿡ �Ҽ��� �ƴ�
		return 0; // false ����
	}
	else {
		printf("�ش� ���� �Ҽ��Դϴ�.\n"); // result ���� 1�� ���ұ� ������ �Ҽ��� ����
		return 1; // true ����
	}
}