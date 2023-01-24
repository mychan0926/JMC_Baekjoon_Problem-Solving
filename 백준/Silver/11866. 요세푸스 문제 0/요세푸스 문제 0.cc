#include <iostream>
#include <vector>
using namespace std;



int main()
{


	class node {

	public:
		int dex;
		node* pointer;

	};
	node* p = (node*)malloc(sizeof(node));
	p->pointer = p;
	p->dex = 1;

	node* sun = p;

	int a, b, c, d, n, m,k;
	cin >> n>>k;
	vector <int> s;
 	for (int i = 2; i < n+1; i++)
	{
		node* l= (node*)malloc(sizeof(node));
		l->dex = i;
		sun->pointer = l;
		sun = l;
	}
	sun->pointer = p;
	node* l = (node*)malloc(sizeof(node));
	node* t = (node*)malloc(sizeof(node));
	l = p;
	cout << "<";
	while (1)
	{
		
		
		if (n == 0)
		{
			break;
		}
		else
		{
			
			for (int i = 0; i < k-1; i++)
			{
				t = l;
				l = l->pointer;
				
			}
			cout << l->dex;
			t->pointer = l->pointer;
			l = l->pointer;
			
			n--;
			if (n != 0)
			{
				cout << ", ";
			}
		}
	}
	cout << ">";

}





