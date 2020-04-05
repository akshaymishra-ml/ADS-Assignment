/*
AIM -  Optimal Sequence of insertion of keys in an AVL Tree such that there is no need of rotation.
*/
#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node *left;
    node *right;
    node(int d)
    {
        data = d;
        left = nullptr;
        right = nullptr;
    }
};
node *sortedArrayToBST(vector<int> arr, int low, int high)
{
    if(low>high)
    return nullptr;

    int mid = low + (high-low)/2;
    node *root = new node(arr[mid]);

    root->left = sortedArrayToBST(arr, low, mid-1);
    root->right = sortedArrayToBST(arr, mid+1, high);

    return root;
}

void printAVL(node *root)
{
    cout<<"The order of insertion is as follows:"<<endl;
    if(root==nullptr)
        return;
    queue<node *> q;
    q.push(root);
    
    while(q.empty()==false)
    {
        node *curr = q.front();
        cout<< curr->data<<" ";
        q.pop();

        if(curr->left!=nullptr)
            q.push(curr->left);
        if(curr->right!=nullptr)
            q.push(curr->right);    
    }
    cout<<endl;
}

int main()
{
    int n;
    cout<<"Enter number of elements of tree:"<<endl;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element "<<i+1<<" :";
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    node *root = sortedArrayToBST(v, 0, n-1);
    printAVL(root);
}
 




















