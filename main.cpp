/******************************************8
 * Program: main.cpp
 * Author: Sam Young
 * Date: 2/20/2017
 * Description: Calls functions from the zoo and runs the game
 * Input:None
 * Output: Zoo
 ******************************/


#include"seal.hpp"
#include"zoo.hpp"
#include"monkey.hpp"
#include"otter.hpp"
#include"sloth.hpp"
#include<string>
#include<iostream>
using namespace std;

int main(){
	int loop=1;
	int anloop = 0;
	Zoo zoo;
	
	cout<< "Tycoon game start"<<endl;
	cout<<"Day " << zoo.get_day()<<endl;
	
	zoo.buying(loop,anloop);

		
	
	
	


}
