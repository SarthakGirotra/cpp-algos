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
void enter(int x)
{
    Node *new_node = new Node();

    new_node->data = x;

    if (head == NULL)
    {

        head = new_node;

        return;
    }
    new_node->next = NULL;
    last->next = new_node;
    last = new_node;

    return;
}
void printList(Node *node)
{
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
}
int main()
{
#ifdef sarthak

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif

    int x;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        int temp;
        cin >> temp;
        enter(temp);
    }
    printList(head);
    return 0;
}
