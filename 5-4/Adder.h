#pragma once
#ifndef ADDER_H // �ش����� ����
#define ADDER_H

class Adder { // Adder Ŭ���� ����
	int op1, op2; // Ŭ���� ���� ����
public:
	Adder(int a, int b); // ���ڷ� ���� ���� Ŭ���� ������ ������
	int process(); // process �Լ� ȣ��
};

#endif
