#include "lab6.h"


Item::Item() {
	this->type = 0;
	this->value = 0;
}

Item::Item(int value)
{
	this->type = 0;
	this->value = double(value);
}

Item::Item(float value)
{
	this->type = 1;
	this->value = double(value);
}

Item::Item(double value)
{
	this->type = 2;
	this->value = value;
}

Item Item::operator + (const Item& other_item) const
{
	Item ans = *this;
	ans.value += other_item.value;
	return ans;
}

Item Item::operator - (const Item& other_item) const
{
	Item ans = *this;
	ans.value -= other_item.value;
	return ans;
}

Item Item::operator * (const Item& other_item) const
{
	Item ans = *this;
	ans.value *= other_item.value;
	return ans;
}

Item Item::operator / (const Item& other_item) const
{
	Item ans = *this;
	ans.value /= other_item.value;
	return ans;
}

bool Item::operator == (const Item& item) const
{
	return this->value == item.value;
}

bool Item::operator != (const Item& item) const
{
	return this->value != item.value;
}

bool Item::operator < (const Item& item) const
{
	return this->value < item.value;
}

bool Item::operator > (const Item& item) const
{
	return this->value > item.value;
}

bool Item::operator <= (const Item& item) const
{
	return this->value <= item.value;
}

bool Item::operator >= (const Item& item) const
{
	return this->value >= item.value;
}


