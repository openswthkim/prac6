/***************************************************************/
/*             HW#4 : 생성자와 소멸자, 분할 컴파일             */
/*  작성자 : 김태형                    날짜 : 2023년 4월 15일  */
/*                                                             */
/* 문제 정의 :   Rectangle 클래스를 선언하고 너비와 높이를     */
/*               비교해 정사각형인지를 판단한다                */
/***************************************************************/

#include <iostream>
using namespace std;

class Rectangle { // Rectangle 클래스 선언
public:
	int width; // 너비 변수 선언
	int height; // 높이 변수 선언
	Rectangle(); // 기본 생성자 선언
	Rectangle(int w, int h); // 인자가 두개인 생성자 
	Rectangle(int length); // 인자가 한개인 생성자
	bool isSquare(); // bool 함수 선언
};

Rectangle::Rectangle() { // 기본 생성자는 너비와 높이가 1로 같음
	width = height = 1 ;
}
Rectangle::Rectangle(int w, int h) { // 너비와 높이에 새로 변수를 받아서 저장함
	width = w; height = h;
}
Rectangle::Rectangle(int length) { // 너비와 높이에 length변수로 입력받은 값을 저장함
	width = height = length;
}

bool Rectangle::isSquare() {
	if (width == height) // 너비와 높이가 같으면 true를 반환하고 그렇지 않으면 false를 반환함
		return true;
	else
		return false;
}

int main() {
	Rectangle rect1; // 기본 생성자는 너비와 높이가 같으므로 출력
	Rectangle rect2(3, 5); // 너비가 3 높이가 5로 다르므로 출력하지 않는다
	Rectangle rect3(3); // 너비와 높이가 3으로 같으므로 출력한다
	if (rect1.isSquare()) cout << "rect1은 정사각형이다." << endl;
	if (rect2.isSquare()) cout << "rect2는 정사각형이다." << endl;
	if (rect3.isSquare()) cout << "rect3는 정사각형이다." << endl;
}