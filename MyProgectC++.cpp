#include <iostream>
#include <string>
#include "Group.h"
//1. ��� ������� ������� ����������� �� ��������� 
class Student {
public:
	//1. ��� ������� ������� ����������� �� ��������� 
	Student() :_age(18) {}
	//Student() { this->_age = 18; } ���������������� ���� ������ ��� ��������������� �������
	
	//2. ������ ������� ����������� �� ���������
	//Student() = delete; ���������������� ���� ������ ��� ��������������� �������

	//3. ���������� � ����������� ��� operator[] ��� ������� � ��������� ���� std::string �� �������
	Student(const std::string& name) :_name(name) {}
	const char operator[](int index) {
		return _name[index];
	}
	//4. ���������� � ����������� ��� ������ ������������ ������ �� ������	�������
	const std::string& GetName()const {
		return _name;
	}
private:
	int _age;
	std::string _name;
};
int main() {
	
	///5. �����, � ������������ �������� ���������� ������, � � ����������� - ���������
	Group students(16);
	return 0;
}