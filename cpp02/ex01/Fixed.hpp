#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
	public:
	Fixed();
	Fixed(const int n);
	Fixed(const float n);
	Fixed(Fixed const &src);
	~Fixed();
	Fixed &operator=(Fixed const &src);
	
	int getRawBits() const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;

	private:
	int _val;
	static const int bits = 8;
};

std::ostream &	operator<<(std::ostream & out, Fixed const & inst);

#endif
