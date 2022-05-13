#include "lista.h";
#include <assert.h>
void teste_prim()
{
	assert(prim(1) == false);
	assert(prim(2) == true);
	assert(prim(4) == false);
	assert(prim(13) == true);
	assert(prim(24) == false);
}


void teste_interval()
{
	assert(interval(1, 5, 3) == true);
	assert(interval(1, 7, 8) == false);
	assert(interval(1, 10, 8) == true);
	assert(interval(1, 14, 37) == false);
	assert(interval(1, 2, 2) == true);
}


void teste_secventa_prim()
{
	int st, end;
	int n;
	n = 5;
	int v[5] = { 4,4,6,7,5 };
	secventa_prim(n, v, st, end);
	assert(st == 3);
	assert(end == 4);

}


void teste_secventa_interval()
{
	int st, end;
	int n;
	n = 5;
	int a = 3;
	int b = 5;
	int v[5] = { 4,4,6,7,5 };
	secventa_interval(n, v, a, b, st, end);
	assert(st == 0);
	assert(end == 1);

}