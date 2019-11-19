#ifndef H_H_
#define H_H_
#include <iostream>

class TicketMaker
{
public:

	TicketMaker() = default;
	~TicketMaker() = default;

	int getNextTicket;

	static TicketMaker& get_instance(){}


private:
	int ticket = 1000;
	static TicketMaker* instance;
};


class CoordinateX
{
public:
	CoordinateX(int x) :x(x) {}

	CoordinateX& operator++ ()
	{
		x++;
		return *this;
	}

	CoordinateX operator++ (int)
	{
		CoordinateX temp = *this;
		++* this;
		return *this;
	}
	
private:
	int x;
	int old;


};

#endif // !H_H_

