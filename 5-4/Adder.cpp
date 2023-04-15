#include "Adder.h"

Adder::Adder(int a, int b) { // 인자로 받은 값을 클래스 변수에 대입
	op1 = a; op2 = b;
}

int Adder::process() { // op1과 op2의 합을 리턴받음
	return op1 + op2;
}