/***************************************************************/
/*             HW#4 : �����ڿ� �Ҹ���, ���� ������             */
/*  �ۼ��� : ������                    ��¥ : 2023�� 4�� 15��  */
/*                                                             */
/* ���� ���� :   Rectangle Ŭ������ �����ϰ� �ʺ�� ���̸�     */
/*               ���� ���簢�������� �Ǵ��Ѵ�                */
/***************************************************************/

#include <iostream>
using namespace std;

class Rectangle { // Rectangle Ŭ���� ����
public:
	int width; // �ʺ� ���� ����
	int height; // ���� ���� ����
	Rectangle(); // �⺻ ������ ����
	Rectangle(int w, int h); // ���ڰ� �ΰ��� ������ 
	Rectangle(int length); // ���ڰ� �Ѱ��� ������
	bool isSquare(); // bool �Լ� ����
};

Rectangle::Rectangle() { // �⺻ �����ڴ� �ʺ�� ���̰� 1�� ����
	width = height = 1 ;
}
Rectangle::Rectangle(int w, int h) { // �ʺ�� ���̿� ���� ������ �޾Ƽ� ������
	width = w; height = h;
}
Rectangle::Rectangle(int length) { // �ʺ�� ���̿� length������ �Է¹��� ���� ������
	width = height = length;
}

bool Rectangle::isSquare() {
	if (width == height) // �ʺ�� ���̰� ������ true�� ��ȯ�ϰ� �׷��� ������ false�� ��ȯ��
		return true;
	else
		return false;
}

int main() {
	Rectangle rect1; // �⺻ �����ڴ� �ʺ�� ���̰� �����Ƿ� ���
	Rectangle rect2(3, 5); // �ʺ� 3 ���̰� 5�� �ٸ��Ƿ� ������� �ʴ´�
	Rectangle rect3(3); // �ʺ�� ���̰� 3���� �����Ƿ� ����Ѵ�
	if (rect1.isSquare()) cout << "rect1�� ���簢���̴�." << endl;
	if (rect2.isSquare()) cout << "rect2�� ���簢���̴�." << endl;
	if (rect3.isSquare()) cout << "rect3�� ���簢���̴�." << endl;
}