#include <stdio.h>

int main(void) {

	char name[30], depart[30]; // ���� name(�̸�), depart(�а���)�� ���� ������ 30����Ʈ�� char�� ���ڿ��� ����
	int birth, number; // ���� birth(�������), number(�й�)�� ���� �ڷ������� ����

	printf("�̸��� �Է��ϼ��� : "); 
	scanf_s(" %s", name, 30); // %s�� �̸� ���� �Է�

	printf("��������� �Է��ϼ��� : ");
	scanf_s(" %d", &birth); // %d�� ������� ���� �Է�

	printf("�й��� �Է��ϼ��� : ");
	scanf_s(" %d", &number); // %d�� �й� ���� �Է�

	printf("�а����� �Է��ϼ��� : ");
	scanf_s(" %s", depart, 30); // %s�� �а��� ���� �Է�

	printf("\n��ſ� ���� �����Դϴ�.\n");
	printf("�̸� : %s\n������� : %d\n�й� : %d\n�а��� : %s\n", name, birth, number, depart); // �Է¹��� ��� ������ printf�� ���
}