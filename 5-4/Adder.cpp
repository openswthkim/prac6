#include "Adder.h"

Adder::Adder(int a, int b) { // ���ڷ� ���� ���� Ŭ���� ������ ����
	op1 = a; op2 = b;
}

int Adder::process() { // op1�� op2�� ���� ���Ϲ���
	return op1 + op2;
}