#include <iostream>
#include <string>
#include <vector>

using namespace std;

string encrypt(string sText, int shift)
{
    string result;
    for (int i = 0; i < sText.length(); i++)
    {
        if (sText[i] != ' ')
            result += char(int(sText[i] + shift + 65) % 26 + 65);
        else
            result += " ";
    }

    return result;
}

string decrypt(string sText, int shift)
{
    string result;
    for (int i = 0; i < sText.length(); i++)
    {
        if (sText[i] != ' ')
            result += char(int(sText[i] - shift + 65) % 26 + 65);
        else
            result += " ";
    }

    return result;
}
int main()
{
    string sTextEncrypted;
    string sTextDecrypted;

    sTextDecrypted = "HOLA COMO ESTAS";
    sTextEncrypted = "YFCR TFDF VJKRJ";

    cout << encrypt(sTextDecrypted, 10) << endl;
    cout << "RYVK MYWY OCDKC" << endl;

    cout << decrypt(sTextEncrypted, 17) << endl;
    cout << sTextDecrypted << endl;
    return 0;
}