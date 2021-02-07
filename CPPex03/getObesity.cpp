int getObesity(double bmi)
{
    int obesity;
    if (bmi < 18.5f) {
        obesity = -1;
    }
    else if (bmi < 25.0f) {
        obesity = 0;
    }
    else if (bmi < 30.0f) {
        obesity = 1;
    }
    else if (bmi < 35.0f) {
        obesity = 2;
    }
    else if (bmi < 40.0f) {
        obesity = 3;
    }
    else {
        obesity = 4;
    }
    return obesity;
}