

class CoodinateX
{
public:
	CoodinateX(int x) :value(x) {}

	int Value() { return this->value; }


	CoodinateX operator ++()
	{
		this->value++;
		return this->value;
	}

	CoodinateX operator ++(int)
	{
		CoodinateX old = this->value;
		++this->value;
		return old;
	}

	


private:
	int value;

};
