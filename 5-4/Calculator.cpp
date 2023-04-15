#include <iostream>
using namespace std;

#include "Calculator.h" // 해더 파일 선언
#include "Adder.h"

void Calculator::run() { // 클래스 함수 선언
	cout << "두 개의 수를 입력하세요>>";
	int a, b; // 변수 a,b 선언 후 두 수를 입력받음
	cin >> a >> b; 
	Adder adder(a, b);;; // 두 변수 값을 클래스 변수에 저장하고
	cout << adder.process(); // 두 수의 합을 리턴 받아서 출력한다
}