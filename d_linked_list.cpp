#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
struct Node
{
    int data;
    Node *next;
    Node *prev;
};
Node *head = NULL;
Node *last = NULL;
void enter(int n)
{
    Node *new_node = new Node();
    new_node->data = n;
    if (head == NULL)
    {
        head = new_node;
        head->prev = NULL;
        head->next = NULL;
        last = head;
        return;
    }
    new_node->next = NULL;
    last->next = new_node;
    new_node->prev = last;
    last = new_node;
}
void print()

{
    Node *node = head;
    if (node == NULL)
    {
        cout << "list empty\n";
        return;
    }
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}
void print_Rev()
{
    Node *node = last;
    if (node == NULL)
    {
        cout << "list empty\n";
        return;
    }
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->prev;
    }
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
        enter(temp);
    }
    print();
    print_Rev();

    return 0;
}
