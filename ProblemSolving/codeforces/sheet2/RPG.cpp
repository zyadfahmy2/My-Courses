
#include <bits/stdc++.h>
using namespace std;
int minSplits(int stages, vector<int> types, vector<int> values)
{
    vector<int> type2Index;
    int max = INT32_MIN;
    for (int i = 0; i < stages; i++)
    {
        if (types[i] == 2)
        {
            type2Index.push_back(i);
            if (values[i] > max)
            {
                max = values[i];
            }
        }
    }
    if (type2Index.size() == 0)
    {
        return 0;
    }
    std::vector<int>::iterator it2 = values.begin() + type2Index[0];
    sort(values.begin(), it2, greater<>());
    for (int i = 1; i < type2Index.size(); i++)
    {

        std::vector<int>::iterator it = values.begin() + type2Index[i - 1];
        std::vector<int>::iterator it1 = values.begin() + type2Index[i];
        sort(it, it1, greater<>());
    }
    int j = 0;
    int index = -1;
    int Splits = 0;
    int temp_value = 0;
    int temp_max = 0;
    int temp_index = 0;
    bool flag = false;
    for (int i = 0; i < stages; i++)
    {
        cout << "outer loop" << endl;
        if (types[i] == 2)
        {
            index++;
            for (; j < i; j++)
            {
                cout << "inner loop\n";

                if (!flag && temp_max > values[j])
                {
                    cout << "flag is false or temp > vales\n";
                    j = temp_index;
                    flag = true;
                }

                if (values[j] > values[i] && types[j] != 2 && temp_value < values[i])
                {
                    cout << "values[j] > values[i]\n";
                    Splits++;
                    temp_value += values[j];
                    if (types[j + 1] == 1)
                    {
                        cout << "inner if condition\n";
                        temp_max = values[j + 1];
                        temp_index = j + 1;
                    }
                    break;
                }

                else if (temp_value <= values[i] && types[j] != 2)
                {
                    cout << " else if1\n";
                    temp_value += values[j];
                    Splits++;
                }
                if (temp_value > values[i])
                {
                    cout << "if conditon\n";
                    if (types[j + 1] == 1)
                    {
                        cout << "inner if condition";
                        temp_max = values[j + 1];
                        temp_index = j + 1;
                    }
                    break;
                }
            }
            j = type2Index[index] + 1;
            flag = false;
        }
    }
    // if (temp_value == max)
    //     return -1;
    if (temp_value < max)
    {
        int sum = 0;
        int c = 0;
        for (int i = 0; i < stages; i++)
        {
            if (types[i] == 1)
            {
                sum += values[i];
                c++;
            }
        }
        if (sum < max)
        {
            return -1;
        }
        else
        {
            return c;
        }
    }

    return Splits;
}

int main(void)
{
    // TODO code application logic here
    vector<int> types{1, 1, 2};
    vector<int> values{4, 3, 2};
    int res = minSplits(5, types, values);
    cout << res;
}
