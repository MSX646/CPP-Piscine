#ifndef BRAIN_HPP
# define BRAIN_HPP
# define str std::string
# include <iostream>
# include <string>

class Brain
{
	public:
		Brain();
		Brain(const Brain & src);
		~Brain();
		Brain & operator=(const Brain & src);
		
		str getIdea();
		void setIdeas();
	protected:
		str ideas[100];
};

#endif
