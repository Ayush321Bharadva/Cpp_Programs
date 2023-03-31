// WAP to calculate an angle between hour and minute hand. (Hours and minutes should be taken from user).
// Formula : Angle = ((11*min)-(60*h))/2
#include<iostream>
using namespace std;

void calculateAngle(double h, double m){

    int angle = 0;
    angle = ((11*m)-(60*h))/2;
    
    cout << "Angle between h and m hand is : " << angle << " degrees";
}

int main()
{
    int h, m;
    cout << "Enter time: ";
    cin >> h >> m;
    calculateAngle(h,m);
    return 0;
}
