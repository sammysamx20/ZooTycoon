/***********************************
 * Program: animal.cpp
 * Author: Sam Young
 * Date 2/20/2017
 * Description: Acceses and mutates variables in the animal class
 * Input: None
 * Output: None
 * ***********************************/


#include<iostream>
#include "animal.hpp"


/***********************
 ** Function: Animal::Animal()
 ** Description: Constructor for animal class
 ** Parameters: None
 ** Pre: None
 ** Post: None
 *******************************************/




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



/***********************
 ** Function: Animal::increase_dayage()
 ** Description: increases the age of animals
 ** Parameters: None
 ** Pre: None
 ** Post: None
 ******************************************/

void Animal::increase_age(){
	age++;

}

int Animal::get_age(){
	return age;
}

int Animal::get_babies(){
	return babies;
}

/***********************
 ** Function: Animal::get_dayage()
 ** Description: accessor  for animal class
 ** Parameters: None
 ** Pre: None
 * Post: None
 *******************************************/


int  Animal::get_dayage(){
	return dayage;
}
void Animal::increase_dayage(){	
	dayage++;
}
