/**************************************************
 * Program: otter.hpp
 * Author: Sam Young
 * Date: 2/20/2017
 * Description: Holds function and variables for otter.cpp
 * Input: None
 * Output: None
 * *************/


#ifndef OTTER_HPP
#define OTTER_HPP
#include"animal.hpp"
class Otter: public Animal{
	private:
		float cost;
		float revenue;
		int dayage;
	public:
		Otter();
		Otter(int age);

		float get_cost();
		float get_revenue();
		//int get_dayage();
		//void increase_dayage();


};

#endif
