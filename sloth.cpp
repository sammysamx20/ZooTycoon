/***************************************
 ** Program: sloth.cpp
 ** Author: Sam Young
 ** Date: 2/20/2017
 ** Description: A sloth child class that holds special info for sloth
 ** Input: None
 ** Output: Sloth cost, revenue
 ** *************************************/






#include"sloth.hpp"
#include<cstdlib>
#include<ctime>
#include<iostream>
#include<cmath>




/***********************
 ** Function: Sloth::Sloth()
 ** Description: constructer  for sloth class
 ** Parameters: None
 ** Pre: None
 ** Post: None
 ******************************************/





Sloth::Sloth(){
	age = 3;
	cost= 50; 
	revenue = 100;
//	dayage=0;
	cost2 = 0;
}

Sloth::Sloth(int age){
	this ->age =age;
	cost = 50;
	revenue = 100;
}


/***********************
 ** Function: Sloth::get_cost()
 ** Description: accessor  for sloth class
 ** Parameters: None
 ** Pre: None
 ** Post: None
 *******************************************/


float Sloth::get_cost(){
	return cost;
}

float Sloth::get_revenue(){
	return revenue;
}

/*int Sloth::get_dayage(){
	return dayage;
}

void Sloth::increase_dayage(){
	dayage++;
}
*/
void  Sloth::set_specialcost(){
	
	
	srand(time(NULL));
	int special = rand() % (126-75) +75  ; 
	
	cost2 = ((cost*(special/100)) + cost);
	std::cout<<"COST::::::" <<cost<<std::endl;
	
}

float Sloth::get_specialcost(){
	return cost2;
}
