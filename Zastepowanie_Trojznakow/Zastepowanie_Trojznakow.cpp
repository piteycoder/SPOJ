// Zastepowanie_Trojznakow.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

std::string tri[9] = { "??=","??/","??'","??(","??)","??!","??<","??>","??-" };
std::string uno[9] = { "#","\\","^","[","]","|","{","}","~" };

void cout_char(std::string);
void check_line(std::string, int);
bool check_cpp(std::string);
int main()
{
	std::string line;
	int length;
	while (std::getline(std::cin, line))
	{
		length = line.length();
		if (length < 3)
			std::cout << line << std::endl;
		else
			check_line(line, length);
	}
    return 0;
}
void check_line(std::string line, int length) {
	std::string check;
	int i = 0;
	for (i = 0; i < length - 3; i++) {
		check = line[i];
		check += line[i + 1];
		check += line[i + 2];
		if (check_cpp(check) == true) {
			cout_char(check); i += 2;
		}
		else
			std::cout << line[i];
	}
	check = line[length - 3];
	check += line[length - 2];
	check += line[length - 1];
	if (check_cpp(check) == true)
		cout_char(check);
	else {
		if (i == length - 3)
			std::cout << check;
		else if (i == length - 2)
			std::cout << check[1] << check[2];
		else
			std::cout << check[2];
	}
	std::cout << std::endl;
}
void cout_char(std::string line) {
	int i = 0;
	while (line != tri[i])
		i++;
	std::cout << uno[i];
}
bool check_cpp(std::string line)
{
	for (int i = 0; i < 9; i++) {
		if (line == tri[i])
			return true;
	}
	return false;
}
