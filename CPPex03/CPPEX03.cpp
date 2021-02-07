#include <iostream>
using namespace std;
#include "getObesity.h"
int main()
{
    double height;
    double weight;
    double bmi;
    int obesity;
    string i;
    int j;
    cout << "身長(cm)を入力してください:";
    cin >> height;
    cout << "体重(kg)を入力してください:";
    cin >> weight;
    bmi = getBmi(height, weight);
    obesity = getObesity(bmi);
    switch (obesity)
    {
    case -1:
        i = "痩せてる";
        break;
    case 0:
        i = "普通";
        break;
    case 1:
        i = "肥満（1度）";
        break;
    case 2:
        i = "肥満（2度）";
        break;
    case 3:
        i = "肥満（3度）";
        break;
    case 4:
        i = "肥満（4度）";
        break;
    }
    cout << "あなたのBMIは、" << bmi << "です。" << endl;
    cout << i;
    cin >> j;
    return 0;
}
