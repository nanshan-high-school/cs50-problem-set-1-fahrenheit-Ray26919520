#include <iostream>
using namespace std;

int main() {
    string idk;
    cout << "溫度單位換算器，請問要攝氏轉華氏還是華氏轉攝氏?\n";
    cin >> idk;
    if (idk == "攝氏轉華氏") {
        float C;
        cout << "攝氏幾度?";
        cin >> C;
        cout << "華氏" << C * 9 / 5 + 32 << "度";
    } else if (idk == "華氏轉攝氏") {
        float F;
        cout << "華氏幾度?";
        cin >> F;
        cout << "攝氏" << (F - 32) * 5 / 9 << "度";
    } else {
        cout << "錯誤";
    }
}
