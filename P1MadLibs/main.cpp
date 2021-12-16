//
// main.cpp
// My Lunch Madlib
// CSCI 151
// Created by Yuna Kim on 11/11/21
//

#include <iostream>
#include <string>


int main() {

	// asks for user input for each type of word
	std::cout << "Enter an adjective: ";
	std::string adj;
	std::cin >> adj;

	std::cout << "Enter a verb (simple present tense): ";
	std::string verb;
	std::cin >> verb;

	std::cout << "Enter another adjective: ";
	std::string adj2;
	std::cin >> adj2;

	std::cout << "Enter a singular noun: ";
	std::string noun;
	std::cin >> noun;

	std::cout << "Enter a color: ";
	std::string color;
	std::cin >> color;

	std::cout << "Enter another adjective: ";
	std::string adj3;
	std::cin >> adj3;

	std::cout << "Enter a plural noun: ";
	std::string plnoun;
	std::cin >> plnoun;

	std::cout << "Enter an adverb: ";
	std::string adverb;
	std::cin >> adverb;

	std::cout << "Enter a name: ";
	std::string name;
	std::cin >> name;

	std::cout << "Enter a location: ";
	std::string location;
	std::cin >> location;

	// prints out the madlib based on user input for each word
	std::cout << "Our school cafeteria has really " << adj << " food. Just thinking about it makes my stomach " << verb << ". The " << adj2 <<
		" spaghetti tastes like a " << noun << ". I swear the meatball was strangely " << color << "! The turkey tacos are totally " << adj3 <<
		" and looks like a bunch of " << plnoun << ". The cafeteria had a " << adverb << " vibe. I wanted to try something new, so " << name <<
		" made me a sandwich. However it didn't fit my taste. I think I will try getting my lunch from a " << location << " next time!\n";

}