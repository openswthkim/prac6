#include <iostream>
using namespace std;

#include "Calculator.h" // �ش� ���� ����
#include "Adder.h"

void Calculator::run() { // Ŭ���� �Լ� ����
	cout << "�� ���� ���� �Է��ϼ���>>";
	int a, b; // ���� a,b ���� �� �� ���� �Է¹���
	cin >> a >> b; 
	Adder adder(a, b);;; // �� ���� ���� Ŭ���� ������ �����ϰ�
	cout << adder.process(); // �� ���� ���� ���� �޾Ƽ� ����Ѵ�
}