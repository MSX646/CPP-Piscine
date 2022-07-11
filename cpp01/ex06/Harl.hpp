#ifndef HARL_HPP
# define HARL_HPP
# include <iostream>
# include <string>
# define str std::string

class Harl
{
	public:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );

	Harl();
	~Harl();
	void complain(str level);
};

#endif
