#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int x;
    cout << "Press Enter 3 times to reveal your future." << endl;
    for(x = 0; x < 3; x++){
    cin.get();
    }
    cout << "You will get ";
    srand(time(0)); 
    int grade = rand()%9;

    switch(grade) {
        case 0: cout << "A"; break;
        case 1: cout << "B+"; break;
        case 2: cout << "B" ; break;
        case 3: cout << "C+" ; break;
        case 4: cout << "C" ; break;
        case 5: cout << "D+" ; break;
        case 6: cout << "D" ; break;
        case 7: cout << "F" ; break;
        case 8: cout << "W" ; break;
        
    }

    cout << " in this 261102." << endl;
    return 0;
}
