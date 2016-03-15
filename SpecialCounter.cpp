#include <iostream>
using namespace std;

class Counter
{
	public:
	Counter obj();
	int c1 = 0;
	int c2;
	int stop1 = 0;
	int incr,decr;
	Counter(int val)
	{
		incr = val;
	}
	void stepInc(int inc)
	{
		incr = inc;
	}
	void stepDec(int dec)
	{
		decr = dec;
	}
	void stop(int val)
	{
		if (c1==0)
		{
			stop1 = 255;
		}
		if (c1 == 20)
		{
			stop1 = 210;
		}
		
	}

	void start()
	{
		
		for (int i = 0; i <stop1; i++)
		{
			c1 = c1 + incr;
			if (c1==20)
			{
				c2 = 20;
			}
		}
		cout << "Counter stopped at: " << c1 <<endl;
		stop(c2);
		for (int j = 0; j < 210;j++)
		{
			c2=c2+incr;
		}
		cout << "Counter stopped at: " << c2 << endl;
	}//Count start at 20

	

};//Class

void main()
{
	Counter obj();
	int in;
	cout << "Please enter increment to count in: " << endl;
	cin >> in;
	obj.stepInc(in);
	obj.stepDec(in);
	obj.start();
}
