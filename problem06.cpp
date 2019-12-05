#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int second, minute = 60, hour = 60;
    cout << "input your second: ";
    cin >> second;
    int minutes = second / minute;
    int seconds = second % minute;
    int hours = minutes / hour;
    int minutess = minutes % hour;
    cout << "Hour = " << hours << " : " << "Minutes = " << minutess << " : " << "Second = " << seconds << endl;

    return EXIT_SUCCESS;


}

