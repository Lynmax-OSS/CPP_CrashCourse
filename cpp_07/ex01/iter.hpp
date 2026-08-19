#ifndef ITER_HPP
# define ITER_HPP

template<typename T1, typename F>
void	iter(T1 *arr, const int len, F func)
{
	for (size_t i = 0; i < len; i++)
	{
		F(T1[i]);
	}
}

#endif