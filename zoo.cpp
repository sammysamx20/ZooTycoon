#include<iostream>
#include "zoo.hpp"
#include"monkey.hpp"
#include"otter.hpp"
#include"sloth.hpp"
#include<cstdlib>
using namespace std;



Zoo::Zoo(){

	day = 0;
	money = 100000.00;
	n_monkies= 0;
	n_sloths = 0;
	n_otters=0;
	food_cost = 0;
	revenue = 0;

	monkey = 0;
	sloth = 0;
	otter = 0;

}


void Zoo::set_money(float money){
	this -> money = money;
}

void Zoo::set_food_cost(float food_cost){
	this -> food_cost = food_cost;
}

void Zoo::set_revenue(float revenue){
	this -> revenue = revenue;
}

void Zoo::set_day(){
	day++;
}

void Zoo::set_n_monkies(){
	n_monkies++;
}

void Zoo::set_n_sloths(){
	n_sloths++;
}

void Zoo::set_n_otters(){
	n_otters++;
}

float Zoo::get_money(){
	return money;
}
float Zoo::get_revenue(){
	return revenue;
}
float Zoo::get_food_cost(){
	return food_cost;
}
int Zoo::get_day(){
	return day;
}

int Zoo::get_n_monkies(){
	return n_monkies;
}

int Zoo::get_n_sloths(){
	return n_sloths;
}

int Zoo::get_n_otters(){
	return n_otters;
}

Zoo::~Zoo(){
	delete [] monkey;
	delete [] otter;
	delete [] sloth;
}

void Zoo::number_of_animals(){
	cout << "Money: "<< money<< endl;
	cout << "Monkey: "<< n_monkies << endl; 
	cout << "Sloth: "<< n_sloths << endl;
	cout << "Otter: "<< n_otters << endl;

	for(int i = 0; i < n_monkies; i++){
		cout<< "Monkey number "<< i << " Year Age: " << monkey[i].get_age()<< " Day Age: " <<  monkey[i].get_dayage()<< endl;
	}	
	for(int i = 0; i < n_sloths; i++){
		cout<< "Sloth number "<< i << " Year Age: " << sloth[i].get_age()<< " Day Age: " << sloth[i].get_dayage()<<endl;
	}
	for(int i = 0; i < n_otters; i++){
		cout<< "Otter  number "<< i << " Year Age: " << otter[i].get_age()<< " Day Age: "<< otter[i].get_dayage()<<endl;
	}
}


void Zoo::buying(){
	int option;
	int loop = 1;
	
	while(loop == 1){
		
		number_of_animals();
	
		cout << "Choose the Animal that you want by typing the number!"<<endl;
		cout<<"1. Monkey"<<endl;
		cout<<"2. Otter"<<endl;
		cout<<"3. Sloth"<<endl;
		cout<<"4. Finish buying animals for today"<<endl;
		cout<<"5. Quit game"<<endl;
		cout<< "Which choice: ";
		cin>>option;
		
		if(option== 1){
			if(money - 15000 < 0){
				cout<< "You're out of money so you lose :(" <<endl;			
				loop = 0;		
			}

			else{

				set_n_monkies();
				money -= 15000;

				monkey_bought(3);
				
			
			}
		}
		if(option==2){
			if(money - 5000 < 0){
				cout<< "You're out of money so you lose :(" <<endl;					
				loop = 0;
			}
			else{
				set_n_otters();
				money -= 5000;
				otter_bought(3);
			}
		}
		if (option ==3){
			if(money - 2000 < 0){
				cout<< "You're out of money so you lose :(" <<endl;
				loop = 0;
			}
			else{
				set_n_sloths();
				money -= 2000;
				sloth_bought(3);
			}
		}
		if (option == 4){

			start();

		}
		if (option == 5){
			loop = 0;
		}
	}	

}



void Zoo::monkey_bought(int age){
	if(monkey == 0){
		Monkey temp_monkey;
		monkey = new Monkey[n_monkies];
		monkey[n_monkies-1] = temp_monkey;
	}
	else{
		Monkey *temp_monkey2 = new Monkey[n_monkies];
		for(int i = 0; i < n_monkies; i++){
			temp_monkey2[i] =  monkey[i];
		}
		delete [] monkey;

		Monkey temp_monkey(age);
		temp_monkey2[n_monkies-1] = temp_monkey;
		monkey = temp_monkey2;
		cout<< "Monkies age: "<< monkey[n_monkies-1].get_age()<<endl;
		temp_monkey2 = 0;
	}	
}


void Zoo::otter_bought(int age){
	if(otter == 0){
		Otter temp_otter;
		otter  = new Otter[n_otters];
		otter[n_otters-1] = temp_otter;
	}
	else{
		Otter *temp_otter2 = new Otter[n_otters];
		for(int i = 0; i < n_otters; i++){
			temp_otter2[i] =  otter[i];
		}
		delete [] otter;

		Otter temp_otter(age);
		temp_otter2[n_otters-1] = temp_otter;
		otter = temp_otter2;
		cout<< otter[n_otters-1].get_age()<<endl;
		temp_otter2 = 0;
	}
}




void Zoo::sloth_bought(int age){
	if(sloth == 0){
		Sloth temp_sloth;
		sloth = new Sloth[n_sloths];
		sloth[n_sloths-1] = temp_sloth;
	}
	else{
		Sloth *temp_sloth2 = new Sloth[n_sloths];
		for(int i = 0; i < n_sloths; i++){
			temp_sloth2[i] =  sloth[i];
		}
		delete [] sloth;

		Sloth temp_sloth(age);
		temp_sloth2[n_sloths-1] = temp_sloth;
		sloth = temp_sloth2;
		cout<< sloth[n_sloths-1].get_age()<<endl;
		temp_sloth2 = 0;
	}
}

void Zoo::monkey_delete(){
	Monkey *temp_monkey2 = new Monkey[n_monkies - 1];

	for(int i = 1; i < n_monkies; i++){
		temp_monkey2[i] = monkey[i];
		n_monkies--;
	}

	if(monkey != 0){
		delete [] monkey;
		monkey = temp_monkey2;
	}
}


void Zoo::sloth_delete(){
	Sloth *temp_sloth2 = new Sloth[n_sloths - 1];

	for(int i = 1; i < n_sloths; i++){
		temp_sloth2[i] = sloth[i];
		n_sloths--;
	}

	if(sloth != 0){
		delete [] sloth;
		sloth = temp_sloth2;
	}
}

void Zoo::otter_delete(){
	Otter *temp_otter2 = new Otter[n_otters - 1];

	for(int i = 1; i < n_otters; i++){
		temp_otter2[i] = otter[i];
		n_otters--;
	}

	if(otter != 0){
		delete [] otter;
		otter = temp_otter2;
	}
}


void Zoo::money_food_cost(){
	cout<< "animals fed"<<endl;
	for(int i = 0; i< n_monkies; i++){
		if(money - monkey[i].get_cost() < 0){
			cout<<"You're out of money so you lose :("<<endl;
		}
		else{

			money -= monkey[i].get_cost();
		}
	}



	for(int i = 0; i< n_sloths; i++){
		if(money - sloth[i].get_cost() < 0){
			cout<<"You're out of money so you lose :("<<endl;
		}
		else{

			money -= sloth[i].get_cost();
		}
	}



	for(int i = 0; i< n_otters; i++){
		if(money - otter[i].get_cost() < 0){
			cout<<"You're out of money so you lose :("<<endl;
		}
		else{

			money -= otter[i].get_cost();
		}
	}


}

int Zoo::special_money_food_cost(){

  cout<< "animals fed"<<endl;
/*  for(int i = 0; i< n_monkies; i++){
  if(money - monkey[i].get_specialcost() < 0){
  cout<<"You're out of money so you lose :("<<endl;
  }
  else{

  money -= monkey[i].get_specialcost();
  }
  }
  */

	sloth->set_specialcost();
      for(int i = 0; i< n_sloths; i++){
	if(money - sloth[i].get_specialcost() < 0){
	cout<<"You're out of money so you lose :("<<endl;
	abort();
	}
	else{

	money -= sloth[i].get_specialcost();
	
	}

	}


/*
    for(int i = 0; i< n_otters; i++){
      if(money - otter[i].get_specialcost() < 0){
      cout<<"You're out of money so you lose :("<<endl;
      }
      else{

      money -= otter[i].get_specialcost();
      }
      }

*/
}

void Zoo::money_revenue(){
	cout<<"getting money revenue"<<endl;
	for(int i = 0; i < n_monkies; i++){
		money += monkey[i].get_revenue();
	}

	
	for(int i = 0; i < n_monkies; i++){
		money += monkey[i].get_revenue();
	}


	for(int i = 0; i < n_sloths; i++){
		money += sloth[i].get_revenue();
	}


	for(int i = 0; i < n_otters; i++){
		money += otter[i].get_revenue();
	}
}

void Zoo::animal_older(){//change
	cout<<"animals getting older"<<endl;
	for(int i = 0; i < n_otters; i++){
		otter[i].increase_dayage(); 
	}
	for(int i = 0; i < n_monkies; i++){
		monkey[i].increase_dayage();

	}
	for(int i = 0; i < n_sloths; i++){
		sloth[i].increase_dayage();

	}
}



void Zoo::start(){
	set_day();

	cout<<"Day " << day<< endl;

	money_revenue();	
	animal_older();
	if(day == 1){
		money_food_cost();
	}
	else{
		
		special_money_food_cost();
	}
	random();
}
void Zoo::random(){
	int random = rand()%3;
	if(random == 0){
		sick();
	}
	else if(random == 1){
		baby();
	}
	else if (random==2){
		boom();
	}
}

void Zoo::sick(){
	int option;
	int option2;
	cout<< "Oh no an animal got sick"<< endl;

	srand(time(NULL));
	option = rand()% 2;
	if(option == 0){
		cout<< "Your monkey is sick. Will you pay half to have it live(1) or let it die(2): ";
		cin >> option2;
		if(option2 == 1){
			money -= 7500;
		}	

		else{
			monkey_delete();

		}
	}
	if(option == 1){
		cout<< "Your sloth is sick. Will you pay half to have it live(1) or let it die(2): ";
		cin >> option2;
		if(option2 == 1){
			money -= 1000;
		}
		else{
			sloth_delete();

		}
	}
	if(option == 2){
		cout<< "Your otter is sick. Will you pay half to have it live(1) or let it die(2): ";
		cin >> option2;
		if(option2 == 1){
			money -= 2500;
		}
		else{
			otter_delete();

		}
	}
}

void Zoo::baby(){
	int option;
	int option2;
	cout<< "Your animal is pregnant."<<endl;
	srand(time(NULL));
	option = rand() % 2;
	if(option == 0){
		

		cout<< "Your monkey is pregnant. It popped out a baby"<<endl;
		n_monkies++;

		monkey_bought(0);
	
		
	}

	else if(option == 1){
	
		cout<< "Your sloth is pregnant. It popped out a baby"<<endl;
		n_sloths+=3;
		for(int x=0; x<3; x++){
			sloth_bought(0);
		}
		
	
}
	else if(option == 2){
		
		cout<< "Your otter is pregnant. It popped out a baby"<<endl;
		n_otters+=2;
		for(int x=0; x<2; x++){
			otter_bought(0);
		}	
		
	

	}
}

void Zoo::boom(){
	cout<<"Woah everyone wants to see monkies"<<endl;
	srand(time(NULL));
	int extra = rand() % (501-250) + 250;
	money += extra*n_monkies;
	cout <<"Extra: "<< extra<<endl;
}
