#pragma once

class iterator
{
private:
	double* ptr = nullptr;
public:
	iterator() :ptr(0) {}
	iterator(double* p) : ptr(p) {}

	double& operator*()
	{
		return *ptr;
	}
	double* operator->()
	{
		return ptr;
	}

	iterator& operator++()
	{
		++ptr;
		return *this;
	}
	iterator operator++(int)
	{
		iterator cp = *this;
		ptr++;
		return cp;
	}
	iterator& operator--()
	{
		--ptr;
		return *this;
	}
	iterator operator--(int)
	{
		iterator cp = *this;
		ptr--;
		return cp;
	}

	iterator operator+(int j) const
	{
		return iterator(ptr + j);
	}
	iterator operator-(int j) const
	{
		return iterator(ptr - j);
	}
	
};