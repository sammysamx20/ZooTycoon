/*****************************************
 * Program: Monkey.cpp
 * Author: Sam Young
 * Date: 2/20/2017
 * Description: Accesses and mutates variables in the monkey class
 * Input: None
 * Output: Age cost revenue
 * *****************************************/


#include"monkey.hpp"

/***********************
 ** Function: Monkey::Monkey()
 ** Description: Constructor for monkey class
 ** Parameters: None
 ** Pre: None
 ** Post: None
 ******************************************/





Monkey::Monkey(){
	age = 3;
	cost= 50; 
	revenue = 1500;
	dayage = 0;

}

Monkey::Monkey(int age){
	this ->age = age;
	cost = 50;
	revenue = 1500;
}

/**************************************
 ** Function: Monkey::get_cost()
 ** Description: Accesor for the cost of monkey
 ** Parameters: None
 ** Pre: None
 ** Post: None
 *******************************************/


float Monkey::get_cost(){
	return cost;
}

float Monkey::get_revenue(){
	return revenue;
}

/*int Monkey::get_dayage(){
	return dayage;
}

void Monkey::increase_dayage(){
	dayage++;
}*/
