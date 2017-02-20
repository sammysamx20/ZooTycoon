#ifndef MONKEY_HPP
#define MONKEY_HPP
#include"animal.hpp"
class Monkey: public Animal{
	private:
		float cost;
		float revenue;
		//int dayage;
	public:
		Monkey();
		Monkey(int age);

		float get_cost();
		float get_revenue();
		//void increase_dayage();
		//int get_dayage();



};

#endif
