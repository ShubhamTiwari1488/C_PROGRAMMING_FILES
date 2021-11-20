

#include<stdio.h>
#include<stdlib.h>
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

void printlevel(struct node *tree,int desired,int current)
{
    if(tree){
        if(desired==current){
            printf("%d\t",tree->data);
        }else{
            printlevel(tree->l,desired,current+1);
            printlevel(tree->r,desired,current+1);
        }
    }
}
int main ()
{
    int level;
    
    printf("Insert the tree : \n\n");
    tree=insert(tree);
    printf("\nEnter the level of the tree ");
    scanf("%d",&level);
    
    printf("\nNodes which are at the entered level are :=\t");
    printlevel(tree,level,0);
    printf("\n");
    
    return 0;
}

