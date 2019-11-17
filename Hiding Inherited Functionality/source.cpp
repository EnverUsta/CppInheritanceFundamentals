#include <iostream>


class Base{
public:
	int m_value;

	Base(int value)
		:m_value(value)
	{
	}
	int getValue()const{return m_value;}
};


class Derived : public Base{
private:
	using Base:m_value;
public:
	Derived(int value)
		:Base(value)
	{
	}

	int getValue() = delete;	//mark this function as inaccesible
};



int main(){
	Derived derived(7);

	//This code won't work because m_value has been redefined as private!
	derived.m_value;

	//The following don't work because getValue has been deleted!
	std::cout << derived.getValue() << '\n';

	// We can still access the function deleted in the Derived class through the Base class
	std::cout << static_cast<Base>(derived).getValue(); 
}	