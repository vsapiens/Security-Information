#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

string encrypt(string sText, int shift)
{
    string result;
    for (int i = 0; i < sText.length(); i++)
    {
        if (sText[i] != ' ')
            result += char(int(sText[i] + shift + (i % 3) + 65) % 26 + 65);
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
            result += char(int(sText[i] - shift - (i % 3) + 65) % 26 + 65);
        else
            result += " ";
    }

    return result;
}
int main()
{
    string sTextEncrypted;
    ifstream file;
    ofstream output;

    vector<string> vDecrypted;
    vector<string> vEncrypted;
    string input;

    file.open("words.txt");
    output.open("words2.txt");

    while (!file.eof())
    {
        file >> input;
        vDecrypted.push_back(input);
    }
    string key = "ZYKZA";

    for (string x : vDecrypted)
    {
        vEncrypted.push_back(encrypt(x, key.size()));
    }

    for (string x : vEncrypted)
    {
        cout << decrypt(x, key.size()) << endl;
        output << x << endl;
    }

    file.close();
    output.close();
    return 0;
}