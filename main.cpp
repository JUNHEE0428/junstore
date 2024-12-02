#include <iostream>

using namespace std;

int main(){
    int point;

    cin >> point;
    if (point == 100) {
        cout << "축하합니다. 만점입니다!\n";
    } else if (point == 90) {
        cout << "거의 백점입니다.";
    } else if (point == 80) {
        cout << "조금 더 노력하십시오.";
    } else if (point == 70) {
        cout << "고생했습니다.";
    } else {
        cout << "분발하세요.ㅠㅠ";
    }

    return 0;
}