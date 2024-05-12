#pragma once

struct Item {
	char type = 0; //0 - int, 1 - float, 2 - double
	double value = 0;

	Item();
	Item(int value);
	Item(float value);
	Item(double value);

	Item operator + (const Item& other_item) const;
	Item operator - (const Item& other_item) const;
	Item operator * (const Item& other_item) const;
	Item operator / (const Item& other_item) const;

	bool operator == (const Item& item) const;
	bool operator != (const Item& item) const;
	bool operator < (const Item& item) const;
	bool operator > (const Item& item) const;
	bool operator <= (const Item& item) const;
	bool operator >= (const Item& item) const;
};
