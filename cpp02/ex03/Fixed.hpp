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
	bool operator>(Fixed  const &right) const;
	bool operator<(Fixed  const &right) const;
	bool operator<=(Fixed const &right) const;
	bool operator>=(Fixed const &right) const;
	bool operator!=(Fixed const &right) const;
	bool operator==(Fixed const &right) const;
	Fixed operator+(Fixed const &right) const;
	Fixed operator-(Fixed const &right) const;
	Fixed operator*(Fixed const &right) const;
	Fixed operator/(Fixed const &right) const;
	Fixed &	operator++();
	Fixed &	operator--();
	Fixed operator++(int);
	Fixed operator--(int);


	int getRawBits() const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;

	static Fixed & min(Fixed &l, Fixed &r);
	static Fixed & max(Fixed &l, Fixed &r);
	static const Fixed & min(Fixed const &l, Fixed const &r);
	static const Fixed & max(Fixed const &l, Fixed const &r);

	private:
	int _val;
	static const int bits = 8;
};

std::ostream &	operator<<(std::ostream & out, Fixed const & inst);

#endif
