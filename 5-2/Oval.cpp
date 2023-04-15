/***************************************************************/
/*             HW#4 : �����ڿ� �Ҹ���, ���� ������             */
/*  �ۼ��� : ������                    ��¥ : 2023�� 4�� 15��  */
/*                                                             */
/* ���� ���� :   Oval Ŭ������ �����ϰ� �ʺ�� ���̸� ����     */
/*                  �ϰ� ���, �Ҹ��ϴ� ������ ��Ÿ��          */
/***************************************************************/
#include <iostream>
using namespace std;

class Oval { // Oval Ŭ���� ����
	int width, height; // ���̿� ���� ���� ����
public: 
	Oval(); // �⺻ ������ ����
	Oval(int w, int h); // ���ڰ� �ΰ��� ������ ����
	~Oval(); // �Ҹ� ������ ����
	int getWidth(); // Ÿ���� �ʺ� �����ϴ� �Լ�
	int getHeight(); // Ÿ���� ���̸� �����ϴ� �Լ�
	void set(int w, int h); // Ÿ���� �ʺ�� ���̸� �����ϴ� �Լ�
	void show(); // Ÿ���� �ʺ�� ���̸� ����ϴ� �Լ�
};
Oval::Oval() { // �⺻ �������� ���̿� ���̸� 1�� �ʱ�ȭ
	width = 1; height = 1;
}
Oval::Oval(int w, int h) { // �ʺ�� ������ ���� �Ű������� ����
	width = w; height = h;
}
Oval::~Oval() { // �ʺ�� ���̸� ����ϸ鼭 �Ҹ� , b��ü�� ���߿� �����ǹǷ� ���� �Ҹ� �ȴ�
	cout << "Oval �Ҹ� : width = " << width << ", height = " << height << endl;
}
int Oval::getWidth() { // Ÿ���� �ʺ� �����Ѵ�
	return width;
}
int Oval::getHeight() { // Ÿ���� ���̸� �����Ѵ�
	return height;
}
void Oval::set(int w, int h) { // Ÿ���� �ʺ�� ���̸� �������ش�
	width = w; height = h;
}
void Oval::show() { // Ÿ���� �ʺ�� ���̸� �����
	cout << "width = " << width << ", height = " << height << endl;
}
int main() {
	Oval a, b(3, 4); // a�� b ��ü�� �ʺ�� ���̸� 3, 4�� ����
	a.set(10, 20); // a��ü�� �ʺ�� ���̸� 10,20���� ����
	a.show(); // ���
	cout << b.getWidth() << "," << b.getHeight() << endl; // b ��ü�� �� ���
}