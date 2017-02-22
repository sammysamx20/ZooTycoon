/***********************************
 * Program: sloth.hpp
 * Author: Sam Young
 * Date: 2/21/2017
 * Description: Holds functions for Sloth.cpp
 * Input: None
 * Output: None
 * *************************************/




#ifndef SLOTH_HPP
#define SLOTH_HPP
#include "animal.hpp"


class Sloth: public Animal{
	private: 
		float cost;
		float revenue;
		int dayage;
		float cost2;
	public:
		Sloth();
		Sloth(int age);

		float get_cost();
		float get_revenue();
		//int get_dayage();
		//void increase_dayage();
		float get_specialcost();
		void set_specialcost();

};

#endif	
