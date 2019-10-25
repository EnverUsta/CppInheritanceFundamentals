#include <iostream>
#include <string>



class Person{
private:
	std::string m_name;
	int m_age;
public:
	Person(std::string name = "", int age = 0): m_name(name), m_age(age){}

	std::string getName()const{return m_name;}
	int getAge()const{return m_age;}
};


class BaseballPlayer : public Person{
private:
	double m_battingAverage;
	int m_homeRuns;
public:
	BaseballPlayer(double battingAverage = 0.0, int homeRuns = 0)
	: Person(), m_battingAverage(battingAverage),
	m_homeRuns(homeRuns)
	{}

};

int main(){
	BaseballPlayer player(10,15);
}