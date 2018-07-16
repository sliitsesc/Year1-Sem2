#include <iostream>
using namespace std;

struct Rectangle{
    int length;
    int width;
}yard, house;

double area(int length, int width);

int main() {

    cout << "Enter Yard length : ";
    cin >> yard.length;

    cout << "Enter Yard width : ";
    cin >> yard.width;

    cout << "Enter house length : ";
    cin >> house.length;

    cout << "Enter house width : ";
    cin >> house.width;

    cout << "Area : " << area(yard.length, yard.width) - area(house.length, house.width);

    return 0;
}

double area(int length, int width){
    return length * width;
}
