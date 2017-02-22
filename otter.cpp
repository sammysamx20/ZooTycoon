
/*****************************************
 ** Program: otter.cpp
 ** Author: Sam Young
 ** Date: 2/20/2017
 ** Description: Accesses and mutates variables in the otter  class
 ** Input: None
 ** Output: Age cost revenue
 ******************************************/



#include"otter.hpp"

Otter::Otter(){
	age = 3;
	cost= 50; 
	revenue = 250;
	dayage = 0;
}

Otter::Otter(int age){
	this ->age =age;
	cost = 50;
	revenue = 250;
}

float Otter::get_cost(){
	return cost;
}

float Otter::get_revenue(){
	return revenue;
}

/*int Otter:: get_dayage(){
	return dayage;
}

void Otter::increase_dayage(){
	dayage++;
}
*/
