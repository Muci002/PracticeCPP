#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;
const int N = 10;
int e[N], ne[N], h, id;

//打印
void Print()
{
	for (int i = ne[h]; i; i = ne[i])
	{
		cout << e[i] << " ";
	}
	cout << endl << endl;
}

//头插
void Head(int x)
{
	e[++id] = x;
	ne[id] = ne[h];
	ne[h] = id;
}

int main()
{

	Head(1);
	Head(2);
	Head(3);

	Print();

	return 0;
}