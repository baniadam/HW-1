// Programming exercise 6
#include<iostream>
#include<string>

using namespace std;
class Move
{
private:
	double x;
	double y;
public:
	Move(double a = 0, double b = 0)
	{
		x = a;
		y = b;
	}

	void showmove() const
	{
		cout << x << "  " << y << "\n";
	}
	Move add(const Move & m) const
	{
		double a = m.x;
		double b = x;
		double c = a + b;
		a = m.y;
		b = y;
		double d = a + b;
		Move C(c, d);
		return C;

	}

	void reset(double a = 0, double b = 0)
	{
		x = a;
		y = b;
	}
};
void main()
{
	Move x(7, 6), y(3, 4), c;
	x.showmove();
	c = x.add(y);
	c.showmove();
	y.showmove();
	x.showmove();
	x.reset();
	x.showmove();
	c.reset();
	c.showmove();
}