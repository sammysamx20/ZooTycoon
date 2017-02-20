#include"otter.hpp"

Otter::Otter(){
	age = 3;
	cost= 10; 
	revenue = 250;
	dayage = 0;
}

Otter::Otter(int age){
	this ->age =age;
	cost = 20;
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
