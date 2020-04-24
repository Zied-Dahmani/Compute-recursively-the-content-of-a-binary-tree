#include <stdio.h>
#include <stdlib.h>
#include "head.h"

int calculate(tree R)
{
    if(R!=NULL)
    {
    return R->val+calculate(R->l)+calculate(R->r);
    }

}

tree add(tree R,int val)
{
    struct node* neww;
    if(R==NULL)
    {
        neww=(struct node*)malloc(sizeof(struct node));
        neww->val=val;
        neww->l=NULL;
        neww->r=NULL;
        R=neww;
    }
    else
    {
        if(val<=R->val)  R->l=add(R->l,val);
        else  R->r=add(R->r,val);
    }
    return R;
}

int main()
{
    tree R=NULL ;
    int i,val ;

     // to fill a tree with 7 nodes for example
     for(i=1;i<=7;i++)
    {
        printf("val of tree1= ");
        scanf("%d",&val);
        R=add(R,val);
    }

        printf("\n");

    // Compute recursively the content of a binary tree
    printf("\n%d",calculate(R));
    return 0;
}













