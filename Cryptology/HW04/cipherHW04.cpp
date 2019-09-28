#include <iostream>
#include <string>
#include <bitset>

void trim(std::string &sText)
{
    std::string result;
    int i = 0;

    while (sText[i] == '0')
        i++;

    for (int j = i; j < sText.size(); j++)
        result += sText[j];

    sText = result;
}

void generateRandom(std::vector<int> &vNum)
{
    int random_integer;
    int lowest = 0, highest = 25;
    int range = (highest - lowest) + 1;

    //range *(rand() / (RAND_MAX + 1.0))
}
int main()
{
    int key;
    //Integer to Binary
    std::string binary = std::bitset<32>(980).to_string();
    trim(binary);
    std::cout << binary << "\n";

    unsigned long decimal = std::bitset<32>(binary).to_ulong();
    std::cout << decimal << "\n";
    return 0;
}
