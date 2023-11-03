#include <fstream>
using namespace std;
ifstream fin("numere.in");
ofstream fout("numere.out");
int cmmdc(int, int);
void rezolva(int, int);
int main()
{
	int n, i, a, b;
	fin >> n;
	for (i = 0; i < n; i++)
	{
		fin >> a >> b;
		rezolva(a, b);
	}
	fin.close();
	fout.close();
	return 0;
}
int cmmdc(int a, int b)
{
	while (b)
	{
		int r = a%b;
		a = b;
		b = r;
	}
	return a;
}
void rezolva(int a, int b)
{
	int c, d;
	c = cmmdc(a, b);
	d = a/c * b;
	fout << c << ' ' << d << '\n';
}
