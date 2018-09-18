#pragma once
class PRNG
{
public:
	virtual double next() = 0;
	virtual void reset() = 0;
};

