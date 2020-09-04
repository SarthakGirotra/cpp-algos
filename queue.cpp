#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
struct Node
{
    int data;
    Node *next;
};
Node *head = NULL;
Node *last = NULL;
void enqueue(int n)
{
    Node *new_node = new Node();
    new_node->data = n;
    if (head == NULL)
    {
        head = new_node;
        last = new_node;
        return;
    }
    last->next = new_node;
    last = new_node;
    last->next = NULL;
}
int isEmpty()
{
    if (head == NULL)
        return 1;
    else
        return 0;
}
void dequeue()
{
    if (isEmpty())
    {
        cout << "Queue is empty\n";
        return;
    }
    Node *new_node = head;
    head = head->next;
    delete new_node;
}

void print()
{
    Node *node = head;
    if (node == NULL)
    {
        cout << "Queue is empty\n";
        return;
    }
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}
int main()
{
#ifdef sarthak

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif
    int t;
    cin >> t;
    while (t--)
    {
        int temp;
        cin >> temp;
        enqueue(temp);
    }
    print();

    return 0;
}
