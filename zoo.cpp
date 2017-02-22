/***************************************
 ** Program: zoo.cpp
 ** Author: Sam Young
 ** Date: 2/20/2017
 ** Description: A zoo that holds the animals
 ** Input: Buying
 ** Output: number of animals, money
 ** *************************************/





#include"seal.hpp"
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
	n_seals=0;
	food_cost = 0;
	revenue = 0;

	monkey = 0;
	sloth = 0;
	otter = 0;
	seal =0;
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
void Zoo::set_n_seals(){
	n_seals++;
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

int Zoo::get_n_seals(){
	return n_seals;
}
Zoo::~Zoo(){
	delete [] monkey;
	delete [] otter;
	delete [] sloth;
	delete [] seal;
}


/***********************
 * Function: Zoo::number_of_animals()
 * Description: Prints out information about number of animals and money
 * Parameters: None
 * Pre: None
 * Post: None
 * ***************************************/
void Zoo::number_of_animals(){
	cout << "Money: "<< money<< endl;
	cout << "Monkey: "<< n_monkies << endl; 
	cout << "Sloth: "<< n_sloths << endl;
	cout << "Otter: "<< n_otters << endl;
	cout << "Seal: "<< n_seals << endl;

	for(int i = 0; i < n_monkies; i++){
		cout<< "Monkey number "<< i << " Year Age: " << monkey[i].get_age()<< " Day Age: " <<  monkey[i].get_dayage()<< endl;
	}	
	for(int i = 0; i < n_sloths; i++){
		cout<< "Sloth number "<< i << " Year Age: " << sloth[i].get_age()<< " Day Age: " << sloth[i].get_dayage()<<endl;
	}
	for(int i = 0; i < n_otters; i++){
		cout<< "Otter  number "<< i << " Year Age: " << otter[i].get_age()<< " Day Age: "<< otter[i].get_dayage()<<endl;
	}
	for(int i = 0; i < n_seals; i++){
                cout<< "Seal number "<< i << " Year Age: " << seal[i].get_age()<< " Day Age: "<< seal[i].get_dayage()<<endl;
        }


}

/***********************
 ** Function: Zoo::buying()
 ** Description: Where the game runs through.  can add monkey otter or sloth too zoo.
 ** Parameters: loop
 ** Pre: None
 ** Post: None
 ****************************************/

void Zoo::buying(int loop, int anloop){
	int option;
	
	
	while(loop==1){
		
		number_of_animals();

		cout << "Choose the Animal that you want by typing the number, choose 2,1, or none!"<<endl;
		cout<<"1. Monkey"<<endl;
		cout<<"2. Otter"<<endl;
		cout<<"3. Sloth"<<endl;
		cout<<"4. Seal"<<endl;
		cout<<"5. Finish buying animals for today"<<endl;
		cout<<"6. Quit game"<<endl;
		cout<< "Which choice: ";
		cin>>option;

		if(option== 1){
			if(money - 15000 < 0){
				cout<< "You're out of money so you lose :(" <<endl;			
				loop = 0;		
			}

			else{
				cout<<"How many monkeys(0,1,2) do you want to buy before your day ends?"<<endl;
				cin>>anloop;
				if((anloop>2) || (anloop<0)){
				cout<<"Put a number between 0 and 2"<<endl;
				loop=1;	
				}
				else{
				for(int x=0;x<anloop;x++){	
				
				set_n_monkies();
				money -= 15000;

				monkey_bought(3);
				
				}
			start();	
			}
				
			
			}
		}
		if(option==2){
			if(money - 5000 < 0){
				cout<< "You're out of money so you lose :(" <<endl;					
				loop = 0;
			}
			else{
				cout<<"How many otters(0,1,2) do you want to buy before your day ends?"<<endl;
				cin>>anloop;
				if((anloop>2) || (anloop<0)){
				cout<<"Put a number between 0 and 2"<<endl;
				loop=1;
				}
				else{
				for(int x = 0; x<anloop; x++){
				set_n_otters();
				money -= 5000;
				otter_bought(3);
				}
			start();
			}
			
			}
		}
		if (option ==3){
			if(money - 2000 < 0){
				cout<< "You're out of money so you lose :(" <<endl;
				loop = 0;
			}
			else{
				cout<< "How many sloths do you want to buy before your day ends?"<<endl;
				cin>>anloop;	
				if((anloop>2) || (anloop<0)){
				cout<<"Put a number between 0 and 2"<<endl;
				loop = 1;
				}
				else{
				for(int x = 0; x < anloop; x++){

				set_n_sloths();
				money -= 2000;
				sloth_bought(3);
			}
			start();
			}
		}
	}
		if (option ==4){
                        if(money - 1000 < 0){
                                cout<< "You're out of money so you lose :(" <<endl;
                                loop = 0;
                        }
                        else{
                        	cout<<"How many seals do you want to buy before your day ends?"<<endl;
				cin>>anloop;
				if((anloop>2) || (anloop<0)){
				cout<<"put a number between 0 and 2"<<endl;
				loop = 1;
				}
				else{
				for(int x =0; x< anloop; x++){

			        set_n_seals();
                                money -= 500;
                                seal_bought(3);
                        }
			start();	
		}
                }
	
}
		if (option == 5){

			loop = start();

		}
		if (option == 6){
			loop = 0;



		}
		
	}	

}


/***********************
 ** Function: Zoo::monkey_bought()
 ** Description: Adds a monkey to the monkey array
 ** Parameters: age
 ** Pre: None
 ** Post: None
 ****************************************/





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


void Zoo::seal_bought(int age){
        if(seal == 0){
                Seal temp_seal;
                seal = new Seal[n_seals];
                seal[n_seals-1] = temp_seal;
        }
        else{
                Seal *temp_seal2 = new Seal[n_seals];
                for(int i = 0; i < n_seals; i++){
                        temp_seal2[i] =  seal[i];
                }
                delete [] seal;

                Seal temp_seal(age);
                temp_seal2[n_seals-1] = temp_seal;
                seal = temp_seal2;
                cout<< "Seal age: "<< seal[n_seals-1].get_age()<<endl;
                temp_seal2 = 0;
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


/***********************
 *  Function: Zoo::delete_monkey()
 *  Description: Delete  a monkey from the monkey array
 *  Parameters: None
 *  Pre: None
 *  Post: None
 *****************************************/





void Zoo::monkey_delete(){
	Monkey *temp_monkey2 = new Monkey[n_monkies - 1];

	for(int i = 1; i < n_monkies-1; i++){
		temp_monkey2[i] = monkey[i];
	}	
	n_monkies--;


	if(monkey != 0){
		delete [] monkey;
	}	
	monkey = temp_monkey2;
	
}

void Zoo::seal_delete(){
        Seal *temp_seal2 = new Seal[n_seals - 1];

        for(int i = 1; i < n_seals-1; i++){
                temp_seal2[i] = seal[i];
        }
        n_seals--;


        if(seal != 0){
                delete [] seal;
        }
        seal = temp_seal2;

}





void Zoo::sloth_delete(){
	Sloth *temp_sloth2 = new Sloth[n_sloths - 1];

	for(int i = 1; i < n_sloths-1; i++){
		temp_sloth2[i] = sloth[i];
	}
	n_sloths--;


	if(sloth != 0){
		delete [] sloth;
	}	
	sloth = temp_sloth2;
	
}

void Zoo::otter_delete(){
	Otter *temp_otter2 = new Otter[n_otters - 1];

	for(int i = 1; i < n_otters-1; i++){
		temp_otter2[i] = otter[i];
	}
	n_otters--;


	if(otter != 0){
		delete [] otter;
	}
	otter = temp_otter2;
	
}


/***********************
 ** Function: Zoo::money_food_cost()
 ** Description: takes away money from the owner to feed the animals
 ** Parameters: None
 ** Pre: None
 ** Post: None
 ****************************************/





int Zoo::money_food_cost(){

	srand(time(NULL));
	float percent = rand() % (126-75) +75;
	float new_base= ((percent/100)+1);


	cout<< "animals fed"<<endl;
	for(int i = 0; i< n_monkies; i++){

		if (day==1){
			money -= ((monkey[i].get_cost())*4);
		}
		else{

			money -= (((monkey[i].get_cost())* new_base) * 4);
		}
	}

	for(int i = 0; i< n_seals; i++){

                if (day==1){
                        money -= ((seal[i].get_cost())*5);
                }
                else{

                        money -= (((seal[i].get_cost())* new_base) * 5);
                }
        }




	for(int i = 0; i< n_sloths; i++){


		if(day==1){
			money -= sloth[i].get_cost();
		}
		else{
			money -= ((sloth[i].get_cost()*new_base));
		}



	}





	for(int i = 0; i< n_otters; i++){


		if(day=1){
			money -= ((otter[i].get_cost())* 2);
		}
		else{
			money-= (((otter[i].get_cost())*new_base)*2);
		}
	}
}



/***********************
 ** Function: Zoo::money_revenue()
 ** Description: Adds money to the owners money from the animals 
 ** Parameters: None
 ** Pre: None
 ** Post: None
 ****************************************/



void Zoo::money_revenue(){

	cout<<"getting money revenue"<<endl;


	for(int i = 0; i < n_monkies; i++){
		if((monkey[i].get_dayage() < 30) && (monkey[i].get_age() < 3)){
			money += (monkey[i].get_revenue() *2);
		}
		else{
			money += monkey[i].get_revenue();
		}

	}


	for(int i = 0; i < n_seals; i++){
                if((seal[i].get_dayage() < 30) && (seal[i].get_age() < 3)){
                        money += (seal[i].get_revenue() *2);
                }
                else{
                        money += seal[i].get_revenue();
                }

        }



	for(int i = 0; i < n_sloths; i++){
		if((sloth[i].get_dayage() < 30) && (sloth[i].get_age() < 3)){
			money += (sloth[i].get_revenue() *2);
		}
		else{
			money += sloth[i].get_revenue();
		}
	}

	for(int i = 0; i < n_otters; i++){
		if((otter[i].get_dayage() < 30) && (otter[i].get_age() < 3)){
			money += (otter[i].get_revenue() *2);
		}
		else{



			money += otter[i].get_revenue();
		}
	}
}


/***********************
 ** Function: Zoo::animal_older()
 ** Description: increases an animal's dayage
 ** Parameters: None
 ** Pre: None
 ** Post: None
 ****************************************/




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
	for(int i = 0; i < n_seals; i++){
                seal[i].increase_dayage();

        }




}


/***********************
 * Function: Zoo::check_money()
 ** Description: Checks if the money owner has is 0
 ** Parameters: None
 ** Pre: None
 * Post: None
 *****************************************/


int Zoo::check_money(){
	if(money<=0){
		cout<<"You lost sorry:("<<endl;
		return 0;
	}
	else{
		return 1;

	} 
} 


/***********************
 ** Function: Zoo::start()
 ** Description: Starts the day and goes through many actions
 ** Parameters: None
 ** Pre: None
 ** Post: None
 * ****************************************/


int Zoo::start(){

	set_day();

	cout<<"Day " << day<< endl;

	money_revenue();	
	animal_older();
	money_food_cost();
	random();
	check_money();

}


/***********************
 ** Function: Zoo::random()
 ** Description: Chooses a random action to happen
 ** Parameters: None
 ** Pre: None
 ** Post: None
 ** ****************************************/


void Zoo::random(){
	int random = rand()%4;
	if(random == 0){
		sick();
	}
	else if(random == 1){
		baby();
	}
	else if (random==2){
		boom();
	}
	else{
	cout<<"nothing happens today"<<endl;
}
}


/***********************
 * Function: Zoo::sick()
 * Description: Chooses a random animal to get sick
 ** Parameters: None
 ** Pre: None
 ** Post: None
 * ****************************************/



void Zoo::sick(){
	int option;
	int option2;

	cout<< "Oh no an animal got sick"<< endl;

	srand(time(NULL));
	option = rand()% 4;
	if(option == 0){
		if(n_monkies==0){
			cout<<"no monkies to get sick"<<endl;
		}
		else{	
			cout<< "Your monkey is sick. Will you pay half to have it live(1) or let it die(2): ";
			cin >> option2;
			if(option2 == 1){
				//for(int i = 0; i<n_monkies; i++){
					if((monkey[0].get_age() == 0) && (monkey[0].get_dayage() <30)){
						money -= 15000;
					}
					else{
						money -= 7500;
				//	}
				}
			}


			else{


				monkey_delete();

			}
		}
	}

	else if(option == 1){
		if(n_sloths==0){
			cout<< "no sloths to get sick"<<endl;
		}
		else{
			cout<< "Your sloth is sick. Will you pay half to have it live(1) or let it die(2): ";
			cin >> option2;
			if(option2 == 1){
		//		for(int i = 0; i < n_sloths; i++){
					if((sloth[0].get_age() == 0) && (sloth[0].get_dayage() <30)){
						money -= 2000;
					}
					else{

						money -= 1000;
					}
				}
		//	}
			else{
				sloth_delete();

			}
		}
	}	


	else if(option ==2){
		if(n_otters==0){
			cout<<"no otters to get sick"<<endl;
		}
		else{
			cout<< "Your otter is sick. Will you pay half to have it live(1) or let it die(2): ";
			cin >> option2;
			if(option2 == 1){
					if((otter[0].get_age() == 0) && (otter[0].get_dayage() <30)){
						money -= 5000;
					}
					else{


						money -= 2500;
					}
				}
		
			else{
				otter_delete();

			}
		}
	}







	
	else{
                if(n_seals==0){
                        cout<<"no seals to get sick"<<endl;
                }
                else{
                        cout<< "Your seal is sick. Will you pay half to have it live(1) or let it die(2): ";
                        cin >> option2;
                        if(option2 == 1){
                                        if((seal[0].get_age() == 0) && (seal[0].get_dayage() <30)){
                                                money -= 1000;
                                        }
                                        else{


                                                money -= 500;
                                        }
                                }

                        else{
                                seal_delete();

                        }
                }
        }
}

/***********************
 ** Function: Zoo::baby()
 ** Description: Chooses a random animal to have a baby
 ** Parameters: None
 ** Pre: None
 ** Post: None
 ************************************/






void Zoo::baby(){
	int option;
	int option2;
	cout<< "Your animal is pregnant."<<endl;
	srand(time(NULL));
	option = rand() % 3;
	if(option == 0){

		if(n_monkies==0){
			cout << "no monkies in zoo to birth"<<endl;
		}
		else{


			cout<< "Your monkey is pregnant. It popped out a baby"<<endl;
			n_monkies++;

			monkey_bought(0);
		}

	}

	else if(option == 1){

		if(n_sloths==0){
			cout << "no sloths in zoo to birth"<<endl;
		}
		else{
			cout<< "Your sloth is pregnant. It popped out a baby"<<endl;
			n_sloths+=3;
			for(int x=0; x<3; x++){
				sloth_bought(0);
			}
		}

	}
	else if(option == 2){
		if(n_otters == 0){
			cout<< "no otters in zoo to birth"<<endl;
		}
		else{

			cout<< "Your otter is pregnant. It popped out a baby"<<endl;
			n_otters+=2;
			for(int x=0; x<2; x++){
				otter_bought(0);
			}	

		}

	}

	else if(option == 3){
                if(n_seals == 0){
                        cout<< "no seals in zoo to birth"<<endl;
                }
                else{

                        cout<< "Your seal is pregnant. It popped out a baby"<<endl;
                        n_seals+=2;
                        for(int x=0; x<2; x++){
                                seal_bought(0);
                        }

                }

        }


}


/***********************
 ** Function: Zoo::boom()
 ** Description: Chooses a random day for monkeies to get more money
 * Parameters: None
 ** Pre: None
 ** Post: None
 * ****************************************/





void Zoo::boom(){
	if (n_monkies == 0){
		cout<<"No monkies for bonus attendence boom"<<endl;
	}
	else if (n_monkies>0){

		cout<<"Woah everyone wants to see monkies"<<endl;
		srand(time(NULL));
		int extra = rand() % (501-250) + 250;
		money += extra*n_monkies;
		cout <<"Extra: "<< extra<<endl;
	}
}

