#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

class Person
{
public:
    string sortValue;
    string name;

    void displayName()
    {
        cout << name << endl;
    }
    Person(string n)
    {
        sortValue = "";
        sortValue += n[0];
        sortValue += n[1];
        this->name = n;
    }
};

vector<Person> mergeVec(vector<Person> left, vector<Person> right)
{
    vector<Person> result;

    while (!left.empty() && !right.empty())
    {
        if (left[0].sortValue <= right[0].sortValue)
        {
            result.push_back(left[0]);
            left.erase(left.begin());
        }
        else
        {
            result.push_back(right[0]);
            right.erase(right.begin());
        }
    }
    while (!left.empty())
    {
        result.push_back(left[0]);
        left.erase(left.begin());
    }
    while (!right.empty())
    {
        result.push_back(right[0]);
        right.erase(right.begin());
    }
    return result;
}
vector<Person> mergeSort(vector<Person> list)
{
    if (list.size() <= 1)
    {
        return list;
    }

    int mid = list.size() / 2;
    vector<Person> left(list.begin(), list.begin() + mid);
    vector<Person> right(list.begin() + mid, list.end());

    left = mergeSort(left);
    right = mergeSort(right);
    return mergeVec(left, right);
};

int main()
{
    int input;
    while (cin >> input && input != 0)
    {
        int n = input;
        vector<Person> list;
        for (int i = 0; i < n; i++)
        {
            string temp;
            cin >> temp;
            list.push_back(Person(temp));
        }
        vector<Person> sortedList = mergeSort(list);
        for (int i = 0; i < n; i++)
        {
            sortedList[i].displayName();
        }
    }
}