#include <iostream>
using namespace std;

int main()
{
    int day, month, year;
    int month_match[13] = {0, 11, 12, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cin >> day >> month >> year;
    int weekOfDay;
    if (month == 1 || month == 2)
        year--;
    weekOfDay = (day + int(2.6*month_match[month] - 0.2)%7 + year + year/4 - year/100 + year/400)%7;
    cout << weekOfDay;
    return 0;
}
