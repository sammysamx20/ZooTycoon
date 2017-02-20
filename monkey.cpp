#include"monkey.hpp"

Monkey::Monkey(){
	age = 3;
	cost= 50; 
	revenue = 1500;
	dayage = 0;

}

Monkey::Monkey(int age){
	this ->age = age;
	cost = 20;
	revenue = 1500;
}

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
