#include "Fixed.hpp"

Fixed::Fixed():_raw(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	// std::cout << "Copy constructor called" << std::endl;
	_raw = other._raw;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		_raw = other._raw;
	return (*this);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}

Fixed::Fixed(const int n)
{
	// std::cout << "Int constructor called" << std::endl;
	_raw = n << _fractionalBits;
}

Fixed::Fixed(const float n)
{
	// std::cout << "Float constructor called" << std::endl;
	_raw = roundf(n * (1 << _fractionalBits));
}

int Fixed::toInt(void) const
{
	return (_raw >> _fractionalBits);
}

float Fixed::toFloat(void) const
{
	return ((float)_raw / (1 << _fractionalBits));
}

int	Fixed::getRawBits(void)
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (_raw);
}

void	Fixed::setRawBits(int const raw)
{
	_raw = raw;
}

Fixed Fixed::operator+(const Fixed &other) const
{
	return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed Fixed::operator-(const Fixed &other) const
{
	return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed Fixed::operator*(const Fixed &other) const
{
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed Fixed::operator/(const Fixed &other) const
{
	return (Fixed(this->toFloat() / other.toFloat()));
}

bool Fixed::operator>(const Fixed &other) const
{
	return (_raw > other._raw);
}

bool Fixed::operator<(const Fixed &other) const
{
	return (_raw < other._raw);
}

bool Fixed::operator>=(const Fixed &other) const
{
	return (_raw >= other._raw);
}

bool Fixed::operator<=(const Fixed &other) const
{
	return (_raw <= other._raw);
}

bool Fixed::operator==(const Fixed &other) const
{
	return (_raw == other._raw);
}

bool Fixed::operator!=(const Fixed &other) const
{
	return (_raw != other._raw);
}

Fixed &Fixed::operator++()
{
	_raw++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	_raw++;
	return (temp);
}

Fixed &Fixed::operator--()
{
	_raw--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	_raw--;
	return (temp);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}