#include <iostream>

using namespace std;
int main()
{
    int allSeconds, hours, minutes, seconds;
    cout << "Enter time in seconds: ";
    cin >> allSeconds;
    minutes = allSeconds / 60;
    seconds = allSeconds % 60;
    hours = minutes / 60;
    minutes %= 60;
    cout << hours << " hours "<< minutes << " minutes " << seconds << " seconds" << endl;

    float money;
    int hryvnias, kopecks;
    cout << "Enter amount of money (like 15.5): ";
    cin >> money;
    hryvnias = money;
    kopecks = money * 100 - hryvnias * 100;
    cout << hryvnias << " hryvnias " << kopecks << " kopecks" << endl;


    int distance, minutes, sec, seconds;
    float time, speed;
    cout << "Calculation of running speed."<< endl;
    cout << "Enter distance length(meters) = ";
    cin >> distance;
    cout << "Enter time(min.sec) = ";
    cin >> time;
    cout << "Distance: " << distance << " m." << endl;
    minutes = time;
    sec = time * 100 - minutes * 100;
    seconds = minutes * 60 + sec;
    cout << "Time : " << minutes << " min " << sec << " sec = " << seconds << " sec." << endl;
    speed = (float(distance) / seconds) * 3.6;
    cout << "You ran at a speed of " << speed << " km / h." << endl;

    int allDays, weeks, days;
    cout << "Enter amount of days: ";
    cin >> allDays;
    weeks = allDays / 7;
    days = allDays % 7;
    cout << weeks << " weeks " << days << " days";
}


