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
    cout << "�g��(cm)����͂��Ă�������:";
    cin >> height;
    cout << "�̏d(kg)����͂��Ă�������:";
    cin >> weight;
    bmi = getBmi(height, weight);
    obesity = getObesity(bmi);
    switch (obesity)
    {
    case -1:
        i = "�����Ă�";
        break;
    case 0:
        i = "����";
        break;
    case 1:
        i = "�얞�i1�x�j";
        break;
    case 2:
        i = "�얞�i2�x�j";
        break;
    case 3:
        i = "�얞�i3�x�j";
        break;
    case 4:
        i = "�얞�i4�x�j";
        break;
    }
    cout << "���Ȃ���BMI�́A" << bmi << "�ł��B" << endl;
    cout << i;
    cin >> j;
    return 0;
}
