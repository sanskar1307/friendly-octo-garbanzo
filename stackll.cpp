#include <bits/stdc++.h>
using namespace std;

class StackNode
{
public:
    char data;
    StackNode *next;
};

StackNode *newNode(char data)
{
    StackNode *node = new StackNode;
    node->data = data;
    node->next = NULL;
    return node;
}

char isEmpty(StackNode *root)
{
    return !root;
}

StackNode *push(StackNode **root, char data)
{
    StackNode *node = newNode(data);
    node->next = *root;
    *root = node;
    cout << data << " pushed to stack\n";
}

char pop(StackNode **root)
{
    if (isEmpty(*root))
        return char_MIN;
    StackNode *temp = *root;
    *root = (*root)->next;
    char popped = temp->data;
    free(temp);

    return popped;
}

char peek(StackNode *root)
{
    if (isEmpty(root))
        return char_MIN;
    return root->data;
}



int main()
{
    StackNode *root = NULL;
    char str[]="Welcome to IIITM";
    reverse(str);

    cout<<str<<endl;
   

    return 0;
}