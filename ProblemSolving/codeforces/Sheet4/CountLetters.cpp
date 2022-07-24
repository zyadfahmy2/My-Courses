#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <map>

#include <iterator> // for iterators
using namespace std;

int main(void)
{
    string s;
    cin >> s;
    bool sorted = true;
    // for (int i = 0; i < s.size() - 1; i++)
    // {
    //     for (int j = 0; j < s.size() - i - 1; j++)
    //     {
    //         if ((int)s[j] > (int)s[j + 1])
    //             swap(s[j], s[j + 1]);
    //         sorted = false;
    //     }
    //     if (sorted)
    //     {
    //         break;
    //     }
    //     sorted = true;
    // }
    // cout << s << endl;
    // map<char, int> umap;

    // for (int i = s.size() - 1; i >= 0; i--)
    // {
    //     umap[s[i]]++;
    // }
    // // auto it1 = prev(ptr, 3);
    // for (auto x : umap)
    // {
    //     cout << x.first << " : " << x.second << endl;
    // }
    int i = 0;
    int alphabet[26] = {0};
    while (s[i] != '\0')
    {
        int j = s[i] - 'a';
        alphabet[j]++;
        i++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (alphabet[i] != 0)
        {
            cout << (char)(i + 'a') << " : " << alphabet[i] << endl;
        }
    }
}