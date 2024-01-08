#include <iostream>
#include <sstream>
#include <string>
#include <set>
#include <vector>
using namespace std;

class node
{
public:
    struct Compare {
        bool operator() (const pair<string, node*>& a, const pair<string, node*>& b) const {
            return a.first < b.first;
        }
    };
    set<pair<string, node*>, Compare> v;
    string index;
};

void printer(node& n, int a)
{
    if (a != 0)
    {
        for (int i = 0; i < a - 1; i++)
        {
            cout << " ";
        }
        cout << n.index << "\n";

    }

    if (n.v.empty())
    {
        return;
    }
    else
    {

        for (auto k = n.v.begin(); k != n.v.end(); k++)
        {

            printer(*(k->second), a + 1);
        }
    }

}

vector <string> split(string t)
{
    vector <string> result;
    string g;
    for (int i = 0; i < t.size(); i++)
    {
        if (t[i] == '\\')
        {
            result.push_back(g);
            g = "";
        }
        else
        {
            g.push_back(t[i]);
        }
    }

    result.push_back(g);

    return result;
}


int main()
{
    node head;
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        node* point = &head;
        string tm;
        cin >> tm;
        vector <string> vt = split(tm);

        for (int j = 0; j < vt.size(); j++)
        {
            string tmp = vt[j];
            pair<string, node*> value(tmp, nullptr);
            auto it = point->v.find(value);
            if (it != point->v.end()) {
                point = it->second;
            }
            else {
                node* tnode = new node;
                tnode->index = tmp;
                point->v.insert({ tmp,tnode });
                point = tnode;

            }
        }
    }
    printer(head, 0);
}