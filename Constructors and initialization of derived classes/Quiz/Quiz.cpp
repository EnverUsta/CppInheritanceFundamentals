#include <iostream>

//Definition of fruit class
class Fruit {
private:
	std::string m_name;
	std::string m_color;
public:
	Fruit(const std::string name = "", const std::string color = "")
		:m_name(name),
		m_color(color)
	{}

	const std::string& getName()const { return m_name; }
	const std::string& getColor()const { return m_color; }
};


//Definition of banana class
class Banana : public Fruit {

public:
	Banana(const std::string name = "", const std::string color = "Yellow")
		:Fruit(name, color)
	{}

};

class Apple : public Fruit {
private:
	double m_fiber;
public:
	Apple(std::string name = "", std::string color = "red", double fiber = 0.0)
		:Fruit(name, color),
		m_fiber(fiber)
	{}


	double getFiber()const { return m_fiber; }

};


std::ostream& operator<<(std::ostream &out, const Apple &a) {
	out << "Apple(" << a.getName() << ", " << a.getColor() << ", " << a.getFiber() << ")\n";
	return out;
}

std::ostream& operator<<(std::ostream &out, const Banana &b){
	out << "Banana(" << b.getName() << ", " << b.getColor() <<")\n";
	return out;
}


int main() {
	const Apple a("Red delicious", "red", 4.2);
	std::cout << a;

	const Banana b("Cavendish", "yellow");
	std::cout << b;
}