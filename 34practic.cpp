#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    // Properties
    string brand;
    int year;
    float engine_capacity;

    // Constructor
    Car(string b, int y, float e) {
        brand = b;
        year = y;
        engine_capacity = e;
    }

    // Methods
    void startEngine() {
        cout << brand << " engine starting..." << endl;
    }

    void accelerate() {
        cout << brand << " is accelerating." << endl;
    }

    void stop() {
        cout << brand << " has stopped." << endl;
    }
};

int main() {
    // Creating three objects
    Car car1("Dodge Charger", 1968, 3.8);
    Car car2("Pontiac Firebird", 1988, 1.8);
    Car car3("Ferrari Testarossa", 1978, 2.6);

    // Object 1
    cout << "[ 1 ] Car1:" << endl;
    cout << "Brand: " << car1.brand << endl;
    cout << "Year: " << car1.year << endl;
    cout << "Engine Capacity: " << car1.engine_capacity << "L" << endl;
    car1.startEngine();
    car1.accelerate();
    car1.stop();

    cout << endl;

    // Object 2
    cout << "[ 2 ] Car2:" << endl;
    cout << "Brand: " << car2.brand << endl;
    cout << "Year: " << car2.year << endl;
    cout << "Engine Capacity: " << car2.engine_capacity << "L" << endl;
    car2.startEngine();
    car2.accelerate();
    car2.stop();

    cout << endl;

    // Object 3
    cout << "[ 3 ] Car3:" << endl;
    cout << "Brand: " << car3.brand << endl;
    cout << "Year: " << car3.year << endl;
    cout << "Engine Capacity: " << car3.engine_capacity << "L" << endl;
    car3.startEngine();
    car3.accelerate();
    car3.stop();

    return 0;
}
