#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Place
{
    string name;
    int left, right;

public:
    Place(string s, int l, int r)
    {
        name = s;
        left = l;
        right = r;
    }
    int ask() const
    {
        cout << "\nここは" << name << "です" << endl;
        cout << "どちらに行きますか？" << endl;
        cout << "1 左 2 右" << endl;
        int a;
        cin >> a;
        if (a == 1)
        {
            return left;
        }
        else if (a == 2)
        {
            return right;
        }
        else
        {
            return 0;
        }
    }
};

class AdvGame
{
    vector<Place>::size_type pos;
    vector<Place> bs;

public:
    AdvGame();
    void play();
};

AdvGame::AdvGame() : pos(0)
{
    bs.push_back(Place("町", 1, 2));
    bs.push_back(Place("海", 0, 3));
    bs.push_back(Place("山", 1, 0));
}

void AdvGame::play()
{
    cout << "さあ、冒険だ！！！" << endl;
    for (int i = 0; i < 5; ++i)
    {
        pos = bs[pos].ask();
        if (pos == bs.size())
        {
            cout << "\nゴール！！！" << endl;
            return;
        }
    }
    cout << "\n残念！時間切れです" << endl;
}

int main()
{
    AdvGame game;
    game.play();
}
