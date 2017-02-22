/************************************
 * Program: zoo.hpp
 * Author: Sam Young
 * Date: 2/20/2017
 * Description: Holds all function and variables for zoo.cpp
 * Input: None
 * Outout: None
 * **************************************/


#ifndef ZOO_HPP
#define ZOO_HPP
#include"monkey.hpp"
#include"otter.hpp"
#include"sloth.hpp"

class Zoo{
	private:
		int day;
		float money;
		float food_cost;
		float revenue;
		int n_monkies;
		int n_sloths;
		int n_otters;
		int n_seals;
	
		Monkey *monkey;
		Sloth *sloth;
		Otter *otter;
		Seal *seal;
		
		
	public:
		Zoo();
		

		void set_money(float money);
		void set_food_cost(float food_cost);
		void set_revenue(float revenue);
		void set_day(); //Increment day +1
		void set_n_monkies(); //Increases number of 
		void set_n_sloths(); //Increases number of
		void set_n_otters(); //Increases number of 
		void set_n_seals();

		float get_money();
		float get_food_cost();
		float get_revenue();
		int get_day();
		int get_n_monkies();
		int get_n_sloths();
		int get_n_otters();
		int get_n_seals();

		int check_money();
		void number_of_animals();
		void buying(int, int);
		void monkey_bought(int);	
		void sloth_bought(int);
		void otter_bought(int);
		void seal_bought(int);
		void seal_delete();
		void monkey_delete();
		void otter_delete();
		void sloth_delete();
		int money_food_cost(); 
		void animal_older();
		void money_revenue();
		int start(); 
		void sick();
		void baby();
		void boom();
		void random();
		~Zoo();
};







#endif
