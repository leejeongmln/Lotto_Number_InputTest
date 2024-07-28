#include<stdio.h>

// 같은 번호가 없는 6개의 로또 번호 입력

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
	int overlap;	// 중복

	for (i = 0; i < 6; i++) {
		printf("번호 입력 : ");
		scanf_s("%d", &num);
		overlap = 0;
		for (j = 0; j < i; j++) {		// 기존 입력한 넘버들 범위 안에서
			if (num == lotto_nums[j]) {
				overlap = 1;
				break;						// break문은 반복문을 빠져나옴.
			}
		}
		if (overlap == 0) {				// 중복이 되지 않았다면
			lotto_nums[i] = num;
		}
		else {							// 중복이 되었다면 
			printf("같은 번호가 있습니다. \n");
			i--;		// 다시 시작
		}
	}
}

void print_num(int* lotto_nums)
{
	int i;
	printf("로또 번호 : ");
	for (i = 0; i < 6; i++) {
		printf("[%d] ", lotto_nums[i]);
	}
}
