#include <iostream>
#include <string>
#include <cstdlib> 
using namespace std;

class Time {
private:
    int hour;
    int minute;
    int second;

public:
    
    Time() : hour(0), minute(0), second(0) {}

    
    Time(int h, int m, int s) : hour(h), minute(m), second(s) {}

    int GetHours() const { return hour; }
    int GetMinutes() const { return minute; }
    int GetSeconds() const { return second; }

    void SetTime(int h, int m, int s) {
        hour = h;
        minute = m;
        second = s;
    }

    
    string FormatTwoDigits(int num) const {
        if (num < 10)
            return "0" + to_string(num);
        else
            return to_string(num);
    }

    string GetTime() const {
        return FormatTwoDigits(hour) + ":" + FormatTwoDigits(minute) + ":" + FormatTwoDigits(second);
    }
};


Time DifferenceTime(const Time& t1, const Time& t2) {
    int totalSeconds1 = t1.GetHours() * 3600 + t1.GetMinutes() * 60 + t1.GetSeconds();
    int totalSeconds2 = t2.GetHours() * 3600 + t2.GetMinutes() * 60 + t2.GetSeconds();

    int diffSeconds = abs(totalSeconds1 - totalSeconds2);

    int h = diffSeconds / 3600;
    diffSeconds %= 3600;
    int m = diffSeconds / 60;
    int s = diffSeconds % 60;

    return Time(h, m, s);
}

int main() {
    setlocale(LC_ALL, "Russian");
    int h1, m1, s1, h2, m2, s2;

    cout << "Введите часы первого времени: ";
    cin >> h1;
    cout << "Введите минуты первого времени: ";
    cin >> m1;
    cout << "Введите секунды первого времени: ";
    cin >> s1;

    cout << "Введите часы второго времени: ";
    cin >> h2;
    cout << "Введите минуты второго времени: ";
    cin >> m2;
    cout << "Введите секунды второго времени: ";
    cin >> s2;

    Time t1(h1, m1, s1);
    Time t2(h2, m2, s2);

    Time t3 = DifferenceTime(t1, t2);

    cout << "Первое время: " << t1.GetTime() << endl;
    cout << "Второе время: " << t2.GetTime() << endl;
    cout << "Разница во времени: "
        << t3.GetHours() << " ч. "
        << t3.GetMinutes() << " мин. "
        << t3.GetSeconds() << " с." << endl;

    return 0;
}
