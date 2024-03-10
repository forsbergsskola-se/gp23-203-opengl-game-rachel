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

	// writing virtual method to take damage
	virtual void takeDamage(int damage){
		health -= damage;
	}

	// writing attack method on another unit 
	// takes a reference to the target unit and the damage 
	virtual void attack(Unit& target, int damage) {
		std::cout << name << "attacks" << target.name << "" << std::endl;
		target.takeDamage(damage);
	}
};

int main() {

}