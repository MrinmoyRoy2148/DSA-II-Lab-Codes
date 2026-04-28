#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int count;
    char ch;
    Node*left,*right;
    Node(int n,char c)
    {
        count=n;
        ch=c;
        left=right=nullptr;
    }
};
    struct Compare{

    bool operator()(Node*a,Node*b)
    {
        return a->count<b->count;
    }


    };

void print(Node*root,string code)
{
    if(!root) return;
    if (!root->left && !root->right) {
        cout << root->ch << ": " << code << endl;
        return;
    }


    print(root->left, code + "0");
    print(root->right, code + "1");
}

int main()
{
   string text="i love baust";

   map<char,int>mp;
   for(int i=0;i<text.length();i++)
   {
       if(text[i]==' ')
       {
           continue;
       }
      mp[text[i]]++;
   }
   priority_queue<Node*, vector<Node*>, Compare> pq;

for(auto it:mp)
{
    pq.push(new Node(it.second,it.first));
}
while(pq.size()>1)
{
    Node*left=pq.top();
    pq.pop();
    Node*right=pq.top();
    pq.pop();

Node* merged = new Node(left->count + right->count, '$');
merged->left=left;
merged->right=right;
pq.push(merged);

}
Node*root=pq.top();
cout<<"Huffman codes are:"<<endl;
print(root," ");

   }



