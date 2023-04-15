#pragma once
#ifndef ADDER_H // 해더파일 정의
#define ADDER_H

class Adder { // Adder 클래스 선언
	int op1, op2; // 클래스 변수 선언
public:
	Adder(int a, int b); // 인자로 받은 값을 클래스 변수에 대입함
	int process(); // process 함수 호출
};

#endif
