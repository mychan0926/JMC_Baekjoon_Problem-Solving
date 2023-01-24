#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int a, b, c, n, m;
	cin >> n;
	vector <int> v1(3,0);
	vector <int> v2(3, 0);
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b >> c;
		if (i==0)
		{
			v1[0] = a;
			v1[1] = b;
			v1[2] = c;
			v2[0] = a;
			v2[1] = b;
			v2[2] = c;
		}
		else
		{
			int v1_0 = v1[0];
			int v1_1 = v1[1];
			int v1_2= v1[2];
			int v2_0 = v2[0];
			int v2_1 = v2[1];
			int v2_2 = v2[2];

			v1[0] = min(v1_0 + a, v1_1 + a);
			v1[1] = min(min(v1_0 + b, v1_1 + b) , v1_2 + b);
			v1[2] = min(v1_1 + c, v1_2 + c);
			v2[0] = max(v2_0 + a, v2_1 + a);
			v2[1] = max(max(v2_0 + b, v2_1 + b), v2_2 + b);
			v2[2] = max(v2_1 + c, v2_2 + c);

		}
	}
	cout<< max(max(v2[0], v2[1]), v2[2])<<" ";
	cout << min(min(v1[0], v1[1]), v1[2]);
}


