#include <iostream>
#include <string>
#include <vector>

using namespace std;

string encrypt(string sText, int key)
{
    string result;
    int iSpaces = 0;

    for (int i = 0; i < sText.length(); i++)
    {
        if (sText[i] != ' ')
            result += char((int(sText[i] - 65) * key) % 26 + 65);
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
    string sTextDecrypted;

    sTextDecrypted = "HOLA COMO ESTAS";
    int key = 7;

    cout << encrypt(sTextDecrypted, key) << endl;

    return 0;
}