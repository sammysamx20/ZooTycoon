/************************************************
 * Program: monkey.hpp
 * Author: Sam Young
 * Date: 2/20/2017
 * Description: Holds functions and variables for monkey.cpp
 * Input: None
 * Output: None
 * *****************************************************/


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
