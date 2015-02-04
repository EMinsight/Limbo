/*************************************************************************
    > File Name: test.cpp
    > Author: Yibo Lin
    > Mail: yibolin@utexas.edu
    > Created Time: Wed 17 Dec 2014 12:47:43 PM CST
 ************************************************************************/

#include <iostream>
#include <string>
#include <limbo/string/String.h>
#include <limbo/preprocessor/AssertMsg.h>
using std::cout;
using std::endl;
using std::string;

int main()
{
	string s1 = "limbo2343slimbo";
	string s2 = "LiMbo2343SliMbo";

	assert_msg(limbo::toupper(s1) == "LIMBO2343SLIMBO", "limbo::toupper failed");
	assert_msg(limbo::tolower(s2) == "limbo2343slimbo", "limbo::tolower failed");
	assert_msg(limbo::iequals(s1, s2), "limbo::iequals failed");

	return 0;
}