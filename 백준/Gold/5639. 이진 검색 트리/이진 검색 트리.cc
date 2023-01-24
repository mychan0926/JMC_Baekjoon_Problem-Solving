#include <iostream>
#include <vector>
#include <string>
#include <deque>
#include <stack>
#include <math.h>
using namespace std;


class node
{
public:
	int dex;
	node* pointer=NULL;
	node* r=NULL;
	node* l=NULL;

};
vector <int> v;
node* in(vector <int> &v, int s, int e);
void out(node *head);
int main()
{
	node* root = NULL;
	node* head= NULL;
	int a;
	while (cin >> a) {
		v.push_back(a);
	}

	head=in(v,0,v.size()-1);
	out(head);



}

node* in(vector <int> &v,int s,int e)
{
	
	node* n = new node;
	int root = v[s];
	n->dex = root;
	if (s != e)
	{
		bool ou = 0;
		int big = e;
		for (int i = s + 1; i < e + 1; i++)
		{
			if (v[i] > root)
			{
				big = i;
				ou = 1;
				break;
			}
		}


		if (ou == 1)
		{
			n->r = in(v, big, e);
			if (big != s+1)
			{
				n->l = in(v, s + 1, big - 1);
			}
		}
		else
		{
			n->l = in(v, s+1, big);
		}
	}
	return n;
}

void out(node *head)
{
	if (head->l != nullptr)
	{
		out(head->l);
	}
	if (head->r != nullptr)
	{
		out(head->r);
	}
	cout << head->dex<<"\n";
}
