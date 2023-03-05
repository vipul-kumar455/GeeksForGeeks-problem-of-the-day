#include <iostream>
#include <string>

using namespace std;

bool areRotations(string s1, string s2)
{
    if (s1.length() != s2.length())
    {
        return false;
    }
    string str = s1 + s1;
    if (str.find(s2) != string::npos)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string s = "dylsebxjwlmpamjneoehhlgayxtgs";
    string s2 = "lsebxjwlmpamjneoehhlgayxfgsdy";
    cout << areRotations(s, s2);

    return 0;
}
