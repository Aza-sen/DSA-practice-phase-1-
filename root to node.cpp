#include <iostream>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
};
node *create_new_node(int x)
{
    node *n = new node;
    n->data = x;
    n->left = nullptr;
    n->right = nullptr;
    return n;
}

node *append(node *r, int x)
{
    if (r == NULL)
    {
        r = create_new_node(x);
        return r;
    }

    if (x >= r->data)
    {
        r->right = append(r->right, x);
    }
    if (x <= r->data)
    {
        r->left = append(r->left, x);
    }

    return r;
}
int search(node* r,int x){
    if(r==NULL){
        return 0;
    }
    else if(r->data==x){
        return 1;
    }
    else if(r->data>x){
        return search(r->left,x);
    }
    else{
        return search(r->right,x);
    }
}
int m = 0;
void rton(node *root, int n)
{
    node *temp = root;
    if(search(root,n))
        while (temp != NULL)
        {
            if (temp->data == n)
            {
                cout << temp->data << " ";
                
                break;
            }
            if (temp->data > n)
            {
                cout << temp->data << " ";
                temp = temp->left;
            }
            if (temp->data < n)
            {
                cout << temp->data << " ";
                temp = temp->right;
            }
        }

    else{cout<<"-1"<<endl;}
    
        }
    

int main()
{
    node *root = nullptr;
    int a, b, temp;
    cin >> a;
    cin >> b;
    for (int i = 0; i < a; i++)
    {
        cin >> temp;
        root = append(root, temp);
        temp = 0;
    }
    for (int j = 0; j < b; j++)
    {
        cin >> temp;
        rton(root, temp);
        cout << endl;
        temp = 0;
        m = 0;
    }

    return 0;
}