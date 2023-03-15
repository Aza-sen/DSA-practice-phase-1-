#include <iostream>

using namespace std;

struct node
{
    int data;
    node *next;
};

node *head = nullptr;

void insert(int x)
{
    node *temp = head;
    if (temp == NULL)
    {
        node *n = new node;
        n->data = x;
        n->next = nullptr;
        head = n;
    }
    else
    {
        while (temp->next)
        {
            temp = temp->next;
        }
        node *n = new node;
        n->data = x;
        n->next = nullptr;
        temp->next = n;
    }
}
void print_list()
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
void middle(int m, node *h)
{
    int l;
    if (h == nullptr)
    {
        return;
    }
    if (h->next == nullptr)
    {
        head = nullptr;
    }
    else
    {
        node *temp = h;
        node* temp2 = h;
        node* tempp = h;
        
        while(temp2!=NULL and temp2->next)
        {   tempp=temp;
            temp = temp->next;
            temp2=temp2->next->next;
        }
        tempp->next = temp->next;
    }
}
int main()
{
    int n = 0, m = 0, temp = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        for (int j = 0; j < m; j++)
        {
            cin >> temp;
            insert(temp);
        }
        middle(m, head);
        print_list();
        cout << endl;
        m = 0;
        head = NULL;
    }

    return 0;
}
