
#include <iostream>
using namespace std;


struct node
{
	
	int data;
	node* left;
	node* right;
};


int search(int arr[], int strt, int end, int value)
{
	
	for (int i = strt; i <= end; i++)
	{
		if (arr[i] == value)
			return i;
	}
}
node* newNode(int data)
{
	node* Node = new node();
	Node->data = data;
	Node->left = NULL;
	Node->right = NULL;

	return Node;
}


node* tree(int in[], int pre[], int inStrt, int inEnd)
{
	static int preIndex = 0;

	if (inStrt > inEnd)   //if stat crosses the end index invalid situation
		return NULL;


	node* node = newNode(pre[preIndex++]);

	
	if (inStrt == inEnd) // if single node ifs left
		return node;

	
	int pos = search(in, inStrt, inEnd, node->data);

	
	node->left = tree(in, pre, inStrt, pos - 1);
	node->right = tree(in, pre, pos + 1, inEnd);

	return node;
}







int pathsum(node* root,int sum)
    {
        if(root == NULL)
        {
            return 0;
        }
        if(root->left == NULL && root->right == NULL && root->data - sum == 0)
        {
            return 1;
        }
        

        return pathsum(root->left,sum - root->data) || pathsum(root->right,sum - root->data);;
    }

int main()
{   int n,sum;
    cin>>n>>sum;
    int pre[n],in[n];
    for(int i=0;i<n;i++){cin>>pre[i];}
    for(int i=0;i<n;i++){cin>>in[i];}
	
	
	node* root = tree(in, pre, 0, n-1);

	
	if(pathsum(root,sum)){
        cout<<"true";
        }
    else{
        cout<<"false";
        }
}


