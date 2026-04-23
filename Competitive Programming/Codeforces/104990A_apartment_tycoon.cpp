#include <bits/stdc++.h>

using namespace std;

int a, b, c;

int main(){

    cin >> a >> b >> c;

    int apartments = 1;
    int money = 0;
    int months = 0;


    while (apartments < c) {
        months++;

        int income = apartments * b;
        money += income;

        if (money >= a) {
            int bought = money / a;
            apartments += bought;
            money -= bought * a;
        }
    }

    cout << months << "\n";
    return 0;
}