#include <bits/stdc++.h>
#include<sstream>
using namespace std;
/*
 * Complete the timeConversion function below.
 */
    /*
     * Write your code here.
     */
int main()
{
    string time;
    int hours,seconds,minutes;
    string s;
    char d;
    stringstream ss;

    cin >> time;
    ss << time;
    ss >> hours >> d >> minutes >> d >> seconds >> s;

    if((s=="PM"&&hours!=12)||(s=="AM"&&hours==12))
        hours=(hours+12)%24;

    printf("%02d:%02d:%02d", hours, minutes, seconds);

    return 0;
}
