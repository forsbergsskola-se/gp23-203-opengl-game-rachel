#include <iostream>

using namespace std; 

// Make a level class 
class Level {

    /* according to describtion of the exercise
    declare data members as integer */

    int start_level;
    int experience_per_level;
    int level;
    int experience;

    //add constructor 
    Level(int start_level, int experience_per_level);


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
    }

    // write a method to print in the console the level and experience 
    void print() {
        cout << "Level: " << level << ", Experience: " << experience << endl;









    }
};

int main()
{
   
}

