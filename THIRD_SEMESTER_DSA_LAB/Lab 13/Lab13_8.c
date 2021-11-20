#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
       /*25
    13        40
  10  15   28    50
  */

struct node 
{
    int data;
    struct node *l,*r;
};
struct node *tree=NULL;
struct node *insert(struct node *tree)
{
    int val;
    scanf("%d",&val);
    while(val!=-1){
    struct node *ptr=NULL,*childrenptr,*parentptr;
    ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=val;
    ptr->l=NULL;
    ptr->r=NULL;
    
    
        if(tree==NULL)
        {
            tree=ptr;
            tree->l=NULL;
            tree->r=NULL;
        }
        else
        {
            parentptr=NULL;
            childrenptr=tree;
            while(childrenptr!=NULL){
                parentptr=childrenptr;
                if(val<childrenptr->data){
                childrenptr=childrenptr->l;
                }else{
                childrenptr=childrenptr->r;
                }
            }
            if(val<parentptr->data){
            parentptr->l=ptr;
            }else{
            parentptr->r=ptr;
            }
        }
        scanf("%d",&val);
    }
    return tree;
}
struct node* findLCA(struct node* root, int n1, int n2)
{
    if (root == NULL)
        return NULL;
    if (root->data == n1 || root->data == n2){
        return root;
    }
    struct node* left_lca = findLCA(root->l, n1, n2);
    struct node* right_lca = findLCA(root->r, n1, n2);
    if (left_lca && right_lca)
        return root;
    return (left_lca != NULL) ? left_lca : right_lca;
}
bool printAncestors(struct node* root, int target)
{
    if (root == NULL)
        return false;
 
    if (root->data == target) {
        printf("%d\t",root->data);
        return true;
    }
    if (printAncestors(root->l, target) ||printAncestors(root->r, target)) {
        printf("%d\t",root->data);
        return true;
    }
    return false;
}
bool findCommonNodes(struct node* root, int first,int second)
{
    struct node* LCA = findLCA(root, first, second);
    if (LCA == NULL)
        return false;
 
    printAncestors(root,LCA->data);
}
int main ()
{
    printf("insert element in a tree :\n");
    tree=insert(tree);
    printf("enter numbers you need to find its ancestor : \n");
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    findCommonNodes(tree,n1,n2);
}

