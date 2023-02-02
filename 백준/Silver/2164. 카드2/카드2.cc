#include <iostream>

using namespace std;

struct node {
	node* head_point;
	node* tail_point;
	int index;

};

class list {
	
public:
	node* head = NULL;
	node* tail = NULL;
	int size = 0;
	list(int size, int num) {
		this->size = size;
		node* n = new node;
		head = n;
		tail = n;
		for (int i = 1; i < size; i++)
		{
			node* t = new node;
			t->index = num;
			tail->tail_point = t;
			t->head_point = tail;

		}
		if (size==0)
		{
			head = NULL;
			tail = NULL;
		}
	}
	int head_index()
	{
		return head->index;
	}
	int tail_index()
	{
		return tail->index;
	}
	void head_pop()
	{
		node* tem;
		tem = head; 
		head = head->tail_point;
		size--;
		delete tem;

	}
	void tail_pop()
	{
		node* tem;
		tem = tail;
		tail = tail->head_point;
		size--;
		delete tem;

	}
	void push_back(int num)
	{
		node* t = new node;
		if (size == 0)
		{
			t->index = num;
			head = t;
			tail = t;
			size++;
		}
		else
		{
			t->index = num;
			tail->tail_point = t;
			t->head_point = tail;
			tail = t;
			size++;
		}
		

	}
};






int main()
{
	int N;
	cin >> N;
	list S(0, 0);
	for (int i = 1; i <= N; i++)
	{
		S.push_back(i);
	}
	int i = 0;
	while (S.size - 1)
	{
		if (i % 2 == 0)
		{
			S.head_pop();
		}
		else
		{
			int tem = S.head_index();
			S.head_pop();
			S.push_back(tem);
		}
		i++;
	}

		cout << S.head_index()<<" ";


}