#include<iostream>
using namespace std;
class TreeNode{
    TreeNode *parent;
    TreeNode *left;
    TreeNode *right;
    int data;
    friend class Tree ;
    friend int main();
};

class Tree{
public:
    TreeNode *root;
    Tree():
        root(new TreeNode)  
    {};
    ~Tree(){
        delete root;
    }
};
int main(){
    Tree t;
    t.root->data = 10;
    cout<<"our tree pointer is "<<t.root<<"its value is "<<t.root->data<<'\n';

}
