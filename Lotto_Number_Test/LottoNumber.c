#include<stdio.h>

// ���� ��ȣ�� ���� 6���� �ζ� ��ȣ �Է�

void input_num(int* lotto_nums);
void print_num(int* lotto_nums);

int main() {
	int lotto_nums[6];

	input_num(lotto_nums);
	print_num(lotto_nums);
}

void input_num(int* lotto_nums)
{
	int num;
	int i, j;
	int overlap;	// �ߺ�

	for (i = 0; i < 6; i++) {
		printf("��ȣ �Է� : ");
		scanf_s("%d", &num);
		overlap = 0;
		for (j = 0; j < i; j++) {		// ���� �Է��� �ѹ��� ���� �ȿ���
			if (num == lotto_nums[j]) {
				overlap = 1;
				break;						// break���� �ݺ����� ��������.
			}
		}
		if (overlap == 0) {				// �ߺ��� ���� �ʾҴٸ�
			lotto_nums[i] = num;
		}
		else {							// �ߺ��� �Ǿ��ٸ� 
			printf("���� ��ȣ�� �ֽ��ϴ�. \n");
			i--;		// �ٽ� ����
		}
	}
}

void print_num(int* lotto_nums)
{
	int i;
	printf("�ζ� ��ȣ : ");
	for (i = 0; i < 6; i++) {
		printf("[%d] ", lotto_nums[i]);
	}
}
