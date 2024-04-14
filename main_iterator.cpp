#include <iostream>
#include "std_vector.h"

int main()
{
	double *arr = new double[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i;
	}
	vector p(arr,10);
	iterator it = p.begin();
	std::cout << *it << std::endl;
	it++;
	std::cout << *it << std::endl;
	iterator it2 = p.end();
	std::cout << *(--it2) << std::endl;
	it = it + 5;
	std::cout << *it << std::endl;
	it = it - 2;
	std::cout << *it << std::endl;

	iterator It1 = p.begin();
	iterator It2 = p.end();
	std::cout << *It1 << " "<< * It2 << std::endl;

}