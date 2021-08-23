#include <iostream>

using namespace std;

int main() {

    const double small_room_cost {25};
    const double large_room_cost {35};
    const double tax {0.06};
    const int days {30};

    cout << "Estimate for carpet cleaning service" << endl;

    cout << "\nNumber of small rooms:";
    int small_rooms;
    cin >> small_rooms;

    cout << "Number of large rooms:";
    int large_rooms;
    cin >> large_rooms;

    double cost = (small_room_cost * small_rooms) + (large_room_cost * large_rooms);
    double Tax = static_cast<double> (cost) * tax;

    cout << "\nPrice per small room: $" << small_room_cost << endl;
    cout << "Price per small room: $" << large_room_cost << endl;
    cout << "Cost: $" << cost << endl;
    cout << "Tax: $" << Tax << endl;
    cout << "============================================" << endl;
    cout << "Total estimate: $" << cost + Tax << endl;
    cout << "This estimate is valid for " << days << " days" << endl;

    return 0;
}
