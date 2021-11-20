

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
int depth(struct node *tree)
{
    if(tree==NULL)
    return 0;
    int ld=depth(tree->l),rd=depth(tree->r);
    if(ld>rd){
        return ld+1;
    }else{
        return rd+1;
    }
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
    int d;
    printf("Inserted tree : \n");
    tree=insert(tree);
    d=depth(tree)-1;
    printf("\nNodes which are at maximum depth are :=\t");
    printlevel(tree,d,0);
    printf("\n");
    
    return 0;
}

