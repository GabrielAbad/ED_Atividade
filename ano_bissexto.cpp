#include <iostream>
using std::cout;
using std::cin;
using std::endl;

bool is_leap_year(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return true;
    } else {
        return false;
    }
}

int main(){

    cout << "Digite o ano: ";
    int iYear;
    cin >> iYear;
    
    bool bIsLeapYear = is_leap_year(iYear);
    
    if(bIsLeapYear) cout << "Ano bissexto";
    else cout << "It is not a leap year";

}