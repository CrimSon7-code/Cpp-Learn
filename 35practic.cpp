#include <iostream>
#include <string>
using namespace std;

class Cat {
private:
    string name;
    string color;
    string breed;
    int age;

public:
    
    string getName() const {
        return name;
    }
    string getColor() const {
        return color;
    }
    string getBreed() const {
        return breed;
    }
    int getAge() const {
        return age;
    }

    
    void setName(const string& n) {
        name = n;
    }
    void setColor(const string& c) {
        color = c;
    }
    void setBreed(const string& b) {
        breed = b;
    }
    void setAge(int a) {
        if (a >= 0)
            age = a;
        else
            age = 0;
    }
};

int main() {
    
    Cat Cat1, Cat2, Cat3;

    Cat1.setName("Muся");
    Cat1.setColor("Black");
    Cat1.setBreed("British");
    Cat1.setAge(3);

    Cat2.setName("Juli");
    Cat2.setColor("White");
    Cat2.setBreed("Siamese");
    Cat2.setAge(2);

    Cat3.setName("Luna");
    Cat3.setColor("Gray");
    Cat3.setBreed("Maine Coon");
    Cat3.setAge(4);


    cout << "[ 1 ] Object:" << endl;
    cout << "\tName: " << Cat1.getName() << endl;
    cout << "\tColor: " << Cat1.getColor() << endl;
    cout << "\tBreed: " << Cat1.getBreed() << endl;
    cout << "\tAge: " << Cat1.getAge() << " years" << endl;

    cout << "[ 2 ] Object:" << endl;
    cout << "\tName: " << Cat2.getName() << endl;
    cout << "\tColor: " << Cat2.getColor() << endl;
    cout << "\tBreed: " << Cat2.getBreed() << endl;
    cout << "\tAge: " << Cat2.getAge() << " years" << endl;

    cout << "[ 3 ] Object:" << endl;
    cout << "\tName: " << Cat3.getName() << endl;
    cout << "\tColor: " << Cat3.getColor() << endl;
    cout << "\tBreed: " << Cat3.getBreed() << endl;
    cout << "\tAge: " << Cat3.getAge() << " years" << endl;

    return 0;
}
