#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>


class Fixed
{
	public:
	Fixed();
	Fixed(Fixed const &src);
	~Fixed();
	Fixed &operator=(Fixed const &src);
	
	int getRawBits() const;
	void setRawBits(int const raw);
	
	private:
	int _val;
	static const int bits = 8;
};

#endif
