#pragma once
#include <iostream>

class Skeleton {
public: 


};

class Unit {
private:
	// name of the unit
	std::string name;
	// health points of the unit, hole number 
	int health;

public: 
	// writing constructor for initializing name and health
	Unit(std::string name, int health) : name(name), health(health){}

	// writing vitrual method to take damage
	virtual void(take_damage) {
		health -= damage;
	}

	
};

int main() {

}