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
//Node *last = NULL;
int push(int n)
{
    Node *new_node = new Node();
    new_node->data = n;
    if (head == NULL)
    {

        head = new_node;

        new_node->next = NULL;

        return new_node->data;
    }
    new_node->next = head;
    head = new_node;

    return n;
}
int isEmpty(Node *node)
{
    if (node == NULL)
        return 1;
    else
        return 0;
}
int pop(Node *node)
{
    if (isEmpty(node))
    {
        cout << "Stack empty\n";
        return 0;
    }
    else
    {
        Node *new_node = node;
        head = node->next;
        delete node;
    }
    return 1;
}
void peek(Node *node)

{
    cout << node->data << endl;
    return;
}

void print(Node *node)
{
    if (node == NULL)
        cout << "Stack empty";
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
        push(temp);
    }
    print(head);

    // cout << isEmpty(head);
    pop(head);
    print(head);
    pop(head);
    print(head);
    pop(head);
    pop(head);
    print(head);

    return 0;
}