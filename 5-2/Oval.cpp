/***************************************************************/
/*             HW#4 : 생성자와 소멸자, 분할 컴파일             */
/*  작성자 : 김태형                    날짜 : 2023년 4월 15일  */
/*                                                             */
/* 문제 정의 :   Oval 클래스를 선언하고 너비와 높이를 변경     */
/*                  하고 출력, 소멸하는 과정을 나타냄          */
/***************************************************************/
#include <iostream>
using namespace std;

class Oval { // Oval 클래스 선언
	int width, height; // 넓이와 높이 변수 선언
public: 
	Oval(); // 기본 생성자 선언
	Oval(int w, int h); // 인자가 두개인 생성자 선언
	~Oval(); // 소멸 생성자 선언
	int getWidth(); // 타원의 너비를 리턴하는 함수
	int getHeight(); // 타원의 높이를 리턴하는 함수
	void set(int w, int h); // 타원의 너비와 높이를 변경하는 함수
	void show(); // 타원의 너비와 높이를 출력하는 함수
};
Oval::Oval() { // 기본 생성자의 넓이와 높이를 1로 초기화
	width = 1; height = 1;
}
Oval::Oval(int w, int h) { // 너비와 높이의 값을 매개변수로 받음
	width = w; height = h;
}
Oval::~Oval() { // 너비와 높이를 출력하면서 소멸 , b객체가 나중에 생성되므로 먼저 소멸 된다
	cout << "Oval 소멸 : width = " << width << ", height = " << height << endl;
}
int Oval::getWidth() { // 타원의 너비를 리턴한다
	return width;
}
int Oval::getHeight() { // 타원의 높이를 리턴한다
	return height;
}
void Oval::set(int w, int h) { // 타원의 너비와 높이를 변경해준다
	width = w; height = h;
}
void Oval::show() { // 타원의 너비와 높이를 출력함
	cout << "width = " << width << ", height = " << height << endl;
}
int main() {
	Oval a, b(3, 4); // a와 b 객체의 너비와 높이를 3, 4로 지정
	a.set(10, 20); // a객체의 너비와 높이를 10,20으로 변경
	a.show(); // 출력
	cout << b.getWidth() << "," << b.getHeight() << endl; // b 객체의 값 출력
}