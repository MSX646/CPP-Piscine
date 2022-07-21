#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"
# include "Ice.hpp"
# include "Cure.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(const MateriaSource & src);
		virtual ~MateriaSource();
		MateriaSource &operator=(const MateriaSource & src);

		virtual void learnMateria(AMateria *materia);
		virtual AMateria *createMateria(const std::string &type);
	
	private:
		AMateria *materias[4];
		int nbr;
};

#endif
