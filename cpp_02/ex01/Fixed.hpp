#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int _raw;
		static const int _fractionalBits = 8;
	public:
		Fixed();
		Fixed(const Fixed &other);
		Fixed &operator=(const Fixed &other);
		Fixed(const int n);
		Fixed(const float n	);
		~Fixed();
		
		int 	toInt(void) const;
		float 	toFloat(void) const;
		int		getRawBits(void);
		void	setRawBits(int const raw);
};
	
std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif