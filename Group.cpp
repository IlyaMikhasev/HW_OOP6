#include "Group.h"
Group::Group(int capacity){
	std::cout << "Memory allocated" << std::endl;
	_delevopments = new int(capacity);
}

Group::~Group(){
	std::cout << "Memory deleted" << std::endl;
	delete[] _delevopments;
}
