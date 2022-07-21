#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : nbr(0)
{}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	*this = src;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destroyed" << std::endl;
	for (int i = 0; i < this->nbr; i++)
		delete materias[i];
}

MateriaSource &MateriaSource::operator=(const MateriaSource & src)
{
	this->nbr = src.nbr;
	for (int i = 0; i < src.nbr; i++)
		this->materias[i] = src.materias[i];
	return *this;
}

void MateriaSource::learnMateria(AMateria *materia)
{
	this->materias[nbr++ % 4] = materia;
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
	int i;
	for (i = 0; i < 4 && i < this->nbr; i++)
	{
		if (type == this->materias[i]->getType())
			break;
	}
	return this->materias[i];
}
