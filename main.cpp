#include <iostream>
#include <map>
using namespace std;

int main() {
    string str;
    while (cin >> str)
    {
        map<int, int>MAP;
        for (int i = 0; i<str.size(); i++)
        {
            if (isalpha(str[i])) MAP[tolower(str[i]) - 'a']++;
        }
        int count = 0;
        for (int i = 0; i<26; i++)
        {
            if (MAP[i] % 2 != 0) count += 1;
        }
        if (count > 1) cout << "no..." << endl;
        else cout << "yes !" << endl;
    }
}
