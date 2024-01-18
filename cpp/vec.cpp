#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> ds;
    ds.push_back(10);
    ds.push_back(20);
    ds.push_back(30);
    for (vector<int>::size_type i = 0; i < ds.size(); i++)
    {
        cout << ds[i] << endl;
    }
    
}
