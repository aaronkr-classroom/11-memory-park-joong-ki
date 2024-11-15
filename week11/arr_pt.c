#include <stdio.h>

#define SIZE 10

int main(void) {
	char data[SIZE] = {
		1,2,3,4,5,6,7,8,9,10
	};
	int result = 0, //합산에 사용할 result 변수
		i;
	char* p = data; //data 배열의 시작 위치

	// 10번 반복하면서 포인터 p를 사용하여 배열의 각 요소를 result 변수에 합산함
	for (i = 0; i <SIZE; i++) { 
		printf("지금 result: %d\n", result);
		//포인트 p가 가리키는 대상의 값을 합산함
		result = result + *p;
		// data 배열의 다음 항목으로 주소를 이동함
		p++;
	}

	printf("마지막 result 합: %d\n",result);

	return 0;
}