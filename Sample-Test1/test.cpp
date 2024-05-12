#include "pch.h"
#include <vector>
#include "..\Lab6\sorts.h"
#include "..\Lab6\lab6.h"

TEST(TestSotrs, TestQsort) {
  std::vector<Item> vec;
  Item ans[5] = { Item(-8), Item(-7), Item(-2), Item(1), Item(3) };

  vec.push_back(Item(1));
  vec.push_back(Item(3));
  vec.push_back(Item(-8));
  vec.push_back(Item(-7));
  vec.push_back(Item(-2));
  qsort(vec.begin(), vec.end() - 1);

  for (int ind{ 0 }; ind < 5; ++ind) EXPECT_TRUE(ans[ind] == vec[ind]);
}

TEST(TestSotrs, TestInsertionSort) {
	std::vector<Item> vec;
	Item ans[5] = { Item(-8), Item(-7), Item(-2), Item(1), Item(3) };

	vec.push_back(Item(1));
	vec.push_back(Item(3));
	vec.push_back(Item(-8));
	vec.push_back(Item(-7));
	vec.push_back(Item(-2));
	insertionsort(vec.begin(), vec.end() - 1);

	for (int ind{ 0 }; ind < 5; ++ind) EXPECT_TRUE(ans[ind] == vec[ind]);
}

TEST(TestSotrs, TestShakerSort) {
	std::vector<Item> vec;
	Item ans[5] = { Item(-8), Item(-7), Item(-2), Item(1), Item(3) };

	vec.push_back(Item(1));
	vec.push_back(Item(3));
	vec.push_back(Item(-8));
	vec.push_back(Item(-7));
	vec.push_back(Item(-2));
	shakersort(vec.begin(), vec.end() - 1);

	for (int ind{ 0 }; ind < 5; ++ind) EXPECT_TRUE(ans[ind] == vec[ind]);
}