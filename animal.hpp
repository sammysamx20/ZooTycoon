#ifndef ANIMAL_HPP
#define ANIMAL_HPP


class Animal{
	protected:
		int age;

		int babies;
		int dayage;	
	public:

		Animal();
	
		void set_age(int age);
		void set_babies(int babies);
		void increase_dayage();	
		void increase_age();
		int get_dayage();
		int get_age();
		int get_babies();


};







#endif
