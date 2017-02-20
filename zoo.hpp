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
	
		Monkey *monkey;
		Sloth *sloth;
		Otter *otter;

		
		
	public:
		Zoo();
		

		void set_money(float money);
		void set_food_cost(float food_cost);
		void set_revenue(float revenue);
		void set_day(); //Increment day +1
		void set_n_monkies(); //Increases number of 
		void set_n_sloths(); //Increases number of 
		void set_n_otters(); //Increases number of 


		float get_money();
		float get_food_cost();
		float get_revenue();
		int get_day();
		int get_n_monkies();
		int get_n_sloths();
		int get_n_otters();


		void number_of_animals();
		void buying();
		void monkey_bought(int);	
		void sloth_bought(int);
		void otter_bought(int);
		void monkey_delete();
		void otter_delete();
		void sloth_delete();
		void money_food_cost(); 
		int  special_money_food_cost();
		void animal_older();
		void money_revenue();
		void start(); 
		void sick();
		void baby();
		void boom();
		void random();
		~Zoo();
};







#endif
