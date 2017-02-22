/**************************************************
 * Program: seal.hpp
 * Author: Sam Young
 * Date: 2/20/2017
 * Description: Holds function and variables for seal.cpp
 * Input: None
 * Output: None
 * *************/


#ifndef SEAL_HPP
#define SEAL_HPP
#include"animal.hpp"
class Seal: public Animal{
	private:
		float cost;
		float revenue;
		int dayage;
	public:
		Seal();
		Seal(int age);

		float get_cost();
		float get_revenue();
		//int get_dayage();
		//void increase_dayage();


};

#endif
