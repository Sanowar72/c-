#include <iostream>
using namespace std;

int main()
{

    char ch;

    cout << "enter the character";
    cin >> ch;

    switch (ch)
    {
    case 'a':
        cout << "its vowel";
        break;
    case 'e':
        cout << "its vowel";
        break;
    case 'i':
        cout << "its vowel";
        break;
    case 'o':
        cout << "its vowel";
        break;
    case 'u':
        cout << "its vowel";
        break;
    default:
        cout << "its consonant";
        break;
    }

    return 0;
}