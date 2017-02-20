#include<iostream>
#include "animal.hpp"

Animal::Animal(){
	babies = 0;
	dayage = 0;
}


void Animal::set_age(int age){
	this -> age = age;
}

void Animal::set_babies(int babies){
	this -> babies = babies;
}

void Animal::increase_age(){
	age++;

}

int Animal::get_age(){
	return age;
}

int Animal::get_babies(){
	return babies;
}

int  Animal::get_dayage(){
	return dayage;
}
void Animal::increase_dayage(){	
	dayage++;
}
