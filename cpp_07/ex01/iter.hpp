#ifndef ITER_HPP
# define ITER_HPP

template<typename T1, typename F>
void	iter(T1 *arr, const int len, F func)
{
	for (int i = 0; i < len; i++)
	{
		func(arr[i]);
	}
}

#endif