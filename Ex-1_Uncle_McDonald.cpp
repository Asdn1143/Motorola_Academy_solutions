#include <iostream>
#include <cmath>

using namespace std;

class Solution
{
public:
    int wallCount = 1;
    int perimeter = 0;
    float area = 0;

    void getInput() {
        cout << "Input perimeter: ";
        while (!(cin >> perimeter)) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid perimeter. Please try again"<<endl;
        }
        cout << "Input amount of walls: ";
        while (!(cin >> wallCount) || wallCount > 2 ) {
            
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid amount of walls. Please try again"<<endl;
        }
    }
    void calcArea() {
        int sides = 4 - wallCount;
        int side = perimeter / sides;
        area = pow(side, 2);
    }
    void display() {
        cout << "For a rectangle with a perimeter of " << perimeter << " and " << wallCount << " infinite wall(s), the optimal area is " << area << endl;
    }
};

void clear() {
    cout << "\x1B[2J\x1B[H";
}


int main()
{
    Solution sol;
    while (true) {
        sol.getInput();
        sol.calcArea();
        clear();
        sol.display();
    }

    return 0;
}
