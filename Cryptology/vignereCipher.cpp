#include <iostream>
#include <string>
#include <vector>

using namespace std;

string encrypt(string sText, string key)
{
    string result;
    int iSpaces = 0;

    for (int i = 0; i < sText.length(); i++)
    {
        if (sText[i] != ' ')
            result += char(int(sText[i] + key[(i - iSpaces) % key.length()] - 130) % 26 + 65);
        else
        {
            result += " ";
            iSpaces++;
        }
    }

    return result;
}

string decrypt(string sText, string key)
{
    string result;
    int iSpaces = 0;

    for (int i = 0; i < sText.length(); i++)
    {
        if (sText[i] != ' ')
            result += char(int(sText[i] - key[(i - iSpaces) % key.length()] + 130) % 26 + 65);
        else
        {
            result += " ";
            iSpaces++;
        }
    }

    return result;
}
int main()
{
    string sTextEncrypted;
    string sTextDecrypted;

    sTextDecrypted = "OMAR";
    sTextEncrypted = "RSJK GMWS CCXYC";
    string key = "OMAR";
    cout << encrypt(sTextDecrypted, key) << endl;
    cout << decrypt(sTextEncrypted, key) << endl;

    return 0;
}