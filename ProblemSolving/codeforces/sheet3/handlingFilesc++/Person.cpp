#include <iostream>
#include <string>
#include <set>
using namespace std;

template <typename T, typename U>
class Person
{
public:
    T height;
    U weight;
    static int numOfPersons;
    Person(T h, U w)
    {
        height = h;
        weight = w;
        numOfPersons++;
    }
};
template <typename T, typename U>
int Person<T, U>::numOfPersons;

int main(void)
{
    Person<int, double> mike(5, 4.3);
    cout << mike.height << " " << mike.weight << endl;
    // you have to call the static variable by the object if the class is template class
    cout << mike.numOfPersons;
    cout << Person<int, double>::numOfPersons;
    set<string> st;
    st.insert({"geeks", "for", "geeks", "org"});

    // 'it' evaluates to iterator to set of string
    // type automatically
    for (auto it = st.begin(); it != st.end(); it++)
        cout << *it << " ";
}