#include "lista.h"
#include<iostream>
using namespace std;
void citire(int& n, int* &v)
{
	if (v != NULL)delete[]v;
	cin >> n;
	v = new int[n];
	for (int i = 0; i < n; i++)
		cin >> v[i];
}


void afisare(int& n, int *v)
{
	for (int i = 0; i < n; i++)
		cout << v[i] << " ";
}


bool prim(int n)
{
	if (n < 2)
		return false;
	for (int i = 2; i <= n / 2; i++)
		if (n % i == 0)
			return false;
	return true;
}

void secventa_prim(int& n, int *v, int& p1, int& p2)
{
	p1 = -1, p2 = -1;
	int lmax = 0;
	for (int i = 0; i < n; i++)
		if (prim(v[i]) == true)
		{
			int l = 1;
			for (int j = i + 1; j < n; ++j)
			{
				if (prim(v[j]) == true)
					l++;
				else
					j = n;
			}
			if (l > lmax)
			{
				lmax = l;
				p1 = i;
				p2 = i + lmax - 1;
			}
		}
}


bool interval(int a, int b, int n)
{
	if (n >= a && n <= b)
		return true;
	return false;
}


void secventa_interval(int& n, int *v, int a, int b, int& p1, int& p2)
{
	p1 = -1, p2 = -1;
	int lmax = 0;
	for (int i = 0; i < n; i++)
		if (interval(a, b, v[i]) == true)
		{
			int l = 0;
			for (int j = i + 1; j < n; ++j)
			{
				if (interval(a, b, v[j]) == true)
					l++;
				else
					j = n;
			}
			if (l > lmax)
			{
				lmax = l;
				p1 = i;
				p2 = i + lmax;
			}
		}
}