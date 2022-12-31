#include <iostream>
#include <string>
#include "Group.h"
//1. ƒва способа создать конструктор по умолчанию 
class Student {
public:
	//1. ƒва способа создать конструктор по умолчанию 
	Student() :_age(18) {}
	//Student() { this->_age = 18; } закоментированно изза ошибки при переопределении функции
	
	//2. —пособ удалить конструктор по умолчанию
	//Student() = delete; закоментированно изза ошибки при переопределении функции

	//3. ќбъ€вление и определение дл€ operator[] дл€ доступа к элементам пол€ std::string по индексу
	Student(const std::string& name) :_name(name) {}
	const char operator[](int index) {
		return _name[index];
	}
	//4. ќбъ€вление и определение дл€ любого константного метода по своему	желанию
	const std::string& GetName()const {
		return _name;
	}
private:
	int _age;
	std::string _name;
};
int main() {
	
	///5.  ласс, в конструкторе которого выдел€етс€ пам€ть, а в деструкторе - удал€етс€
	Group students(16);
	return 0;
}