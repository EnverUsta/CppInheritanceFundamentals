#include <iostream>

class Fruit{
protected:
	std::string m_name;
	std::string m_color;
public:
	//Fruit(){}
	Fruit(const std::string &name, const std::string &color)
		:m_name(name), m_color(color)
	{
	}
	const std::string& getName()const{return m_name;}
	const std::string& getColor()const{return m_color;}
};


class Apple: public Fruit{
protected:
	Apple(const std::string &name, const std::string color)
		:Fruit(name, color)
	{
	}

public:
	Apple(const std::string &color = "red")
		:Fruit("Apple", color)
	{
	}
};


class Banana: public Fruit{
public:
	Banana()
		:Fruit("Banana", "Yellow")
	{
	}
};


class GrannySmith: public Apple{
public:
	GrannySmith()
		:Apple("Granny smith apple", "green")
	{
	}
};



int main(){
	Apple a("red");
	Banana b;
	GrannySmith c;
 
	std::cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
	std::cout << "My " << b.getName() << " is " << b.getColor() << ".\n";
	std::cout << "My " << c.getName() << " is " << c.getColor() << ".\n";
}