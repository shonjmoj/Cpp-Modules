#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl {
	std::string levels[4];
	void (Harl::*f[4])(void);
	
	void debug();
	void info();
	void warning();
	void error();

	public :
		Harl();
		~Harl();
		
		void	complain(std::string level);
};


#endif