#include <iostream>

using namespace std; 

// Make a level class 
class Level {
private:
    /* according to describtion of the exercise
    declare data members as integer */

    int start_level;
    int experience_per_level;
    int level;
    int experience;

public:
    //add constructor 
    Level(int start_level, int experience_per_level) : start_level(start_level), level(start_level), experience(0), experience_per_level(experience_per_level){}


    // add method to gain experience 
    void gain_experience(int more_experience) {
        // adding more (gained) experience
        experience += more_experience;
        // if condition to check experience is enough 
        if (experience >= experience_per_level) {
            // decrease experience by level up 
            experience -= experience_per_level;
            // then level up 
            level++; // add to level 
        }
        if (experience >= experience_per_level)
        {
            level++;
            experience = experience_per_level - 1; 
        }
    
    }

    // write a method to print in the console the level and experience 
    void print() {
        cout << "Level: " << level << ", Experience: " << experience << endl;
    }
};

int main()
{
    Level level{ 1, 10 };// from elevel 1 to 10 
    level.print();// output = level 1, experience 0
    level.gain_experience(9);// gain 9 experience 
    level.print();// output = level 1, experience 9
    level.gain_experience(3);// gain 3 more experience 
    level.print();// output = level 2, experience 2
    level.gain_experience(18);// 
    level.print(); // output = level 4, experience 0

    return 0;
}

