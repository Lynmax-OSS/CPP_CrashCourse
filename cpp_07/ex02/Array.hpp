#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template<typename T>
class	Array{
	private:
		T *array;
		int _size;
	public:
		Array(): array(NULL), _size(0){}
		Array(unsigned int n):	array(new T[n]()), _size(n){}
		Array(const Array& other): array(new T[other._size]())
		{
			_size = other._size;
			for (int i = 0; i < _size; i++)
				array[i] = other.array[i];
		}
		Array&	operator=(const Array& other)
		{
			if (this != &other)
			{
				if (this->array)
					delete[] this->array;
				this->_size= other._size;
				if (_size > 0)
					this->array = new T[this->_size];
				else
					this->array = NULL;
				for (int i = 0; i < this->_size; i++)
					this->array[i] = other.array[i];
			}
			return (*this);
		}
		~Array()
		{
			delete [] array;
		}
		T& operator[](unsigned int index)
		{
			if (index >= _size)
				throw std::exception();
			return array[index];
		}
		const T& operator[](unsigned int index) const
		{
			if (index >= _size)
				throw std::exception();
			return array[index];
		}
		unsigned int	size() const
		{
			return _size;
		}
};

#endif