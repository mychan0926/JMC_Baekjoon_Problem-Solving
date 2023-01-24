#include <iostream>
#include <vector>
#include <string>
using namespace std;



class Deque{
    int size = 0;
    class Node {


    public:
        int element;
        Node* pointer=NULL;
        Node()
        {
            pointer = NULL;
        }

    };
private:
    Node* front = NULL;
    Node* end = NULL;
public:
    int qfront();
    int qpop_front();
    bool qempty();
    int qsize();
    void qpush_front(int i);
    void qpush_back(int i);
    int qback();
    int qpop_back();
    
};

int Deque::qfront() {
    if (size != 0)
    {
        return front->element;
    }
    else
    {
        return -1;
    }

}
int Deque::qpop_front() {
    if (size == 0)
    {
        return -1;
    }
    else if (size == 1)
    {
        int tem = front->element;
        front = NULL;
        end = NULL;
        size--;
        return tem;
    }
    else
    {

        int tem = front->element;
        Node* T = front->pointer;
        front = T;
        size--;
        return tem;
    }
}
bool Deque::qempty()
{
    if (size == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int Deque::qsize()
{
    return size;
}

void Deque::qpush_front(int i) {

    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->pointer = NULL;
    newNode->element = i;
    if (size == 0)
    {
        front = newNode;
        end = newNode;
    }
    else
    {
        Node* T = (Node*)malloc(sizeof(Node));
        T = newNode;
        T->pointer = front;
        front = T;
    }
    size++;

}
void Deque::qpush_back(int i) {

    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->pointer = NULL;
    newNode->element = i;
    if (size == 0)
    {
        front = newNode;
        end = newNode;
    }
    else if(size == 1)
    {
        end = newNode;
        front->pointer = end;

    }
    else
    {
        end->pointer = newNode;
        end = newNode;
        
    }
    size++;

}
int Deque::qback() {
    if (size != 0)
    {
        return end->element;
    }
    else
    {
        return -1;
    }
}
int Deque::qpop_back() {
    if (size == 0)
    {
        return -1;
    }
    else if (size == 1)
    {
        int tem = end->element;
        front = NULL;
        end = NULL;
        size--;
        return tem;
    }
    else
    {
        int tem = end->element;
        Node* T = front;
        while (T->pointer != end)
        {
            T = T->pointer;
        }

        end = T;
        size--;
        return tem;
    }
}



int main()
{
    Deque a;
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string f;
        int g;
        cin >> f;
        if (f == "push_front")
        {
            cin >> g;
            a.qpush_front(g);
        }
        else if (f == "push_back")
        {
            cin >> g;
            a.qpush_back(g);
        }
        else if (f == "pop_front")
        {
            cout << a.qpop_front()<<"\n";
        }
        else if (f == "pop_back")
        {
            cout << a.qpop_back() << "\n";
        }
        else if (f == "size")
        {
            cout << a.qsize() << "\n";
        }
        else if (f == "empty")
        {
            cout << a.qempty() << "\n";
        }
        else if (f == "front")
        {
            cout << a.qfront() << "\n";
        }
        else if (f == "back")
        {
            cout << a.qback() << "\n";
        }
    }

}





