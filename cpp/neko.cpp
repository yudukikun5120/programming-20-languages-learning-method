#include <iostream>
#include <string>
using namespace std;

class Neko
{
    string name;

public:
    Neko(string s)
    {
        name = s;
    }
    void naku() const
    {
        cout << "にゃあ。俺様は" << name << "だ。" << endl;
    }
};

int main()
{
    Neko tm("タマ"), mk("ミケ");
    tm.naku();
    mk.naku();
}
