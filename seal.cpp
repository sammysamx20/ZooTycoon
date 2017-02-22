
/*****************************************
 ** Program: seal.cpp
 ** Author: Sam Young
 ** Date: 2/20/2017
 ** Description: Accesses and mutates variables in the seal class
 ** Input: None
 ** Output: Age cost revenue
 ******************************************/



#include"seal.hpp"



/***********************
 ** Function: Seal::Seal()
 ** Description: constructor  for seal class
 ** Parameters: None
 ** Pre: None
 ** Post: None
 *******************************************/




Seal::Seal(){
	age = 3;
	cost= 50; 
	revenue = 100;
	dayage = 0;
}

Seal::Seal(int age){
	this ->age =age;
	cost = 50;
	revenue = 100;
}



/***********************
 ** Function: Seal::get_cost()
 ** Description: accessor  for seal class
 ** Parameters: None
 ** Pre: None
 ** Post: None
 *  ******************************************/



float Seal::get_cost(){
	return cost;
}

float Seal::get_revenue(){
	return revenue;
}

/*int Otter:: get_dayage(){
	return dayage;
}

void Otter::increase_dayage(){
	dayage++;
}
*/
