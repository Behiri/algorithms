#include <iostream>
using namespace std;

bool connected( int, int );
void Union( int, int );
int find( int );

static int count = 10;
static int id[10];

int main()
{
    for (int i = 0; i < 10; i++)
    {
        id[i] = i;
    }
    int p, q = 0;
    for (int i = 0; i < 10; i++)
    {
        cin >> p;
        cin >> q;
        if (connected(p,q)) continue;
        Union(p,q);
        cout << p << " " << q << endl;
    }
    return 0;
}

void Union(int m, int n)
{
    int mID = find(m);
    int nID = find(n);

    if (mID == nID) return;

    for (int i = 0; i < 10; i++)
    {
        if( id[i] == mID ) id[i] = nID;
    }
    count--;
}

bool connected(int m, int n)
{
    return find(m) == find(n);
}

int find(int m)
{
    return id[m];
}
