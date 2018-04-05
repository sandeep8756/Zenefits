#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};
struct Node* create(){
struct Node* t=(struct Node*)malloc(sizeof(struct Node));
scanf("%d",&(t->data));
t->left=NULL;
t->right=NULL;
return t;
}

void inorder(struct Node* root){
if(root){
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}
int main(void){
int n,i;
scanf("%d \n",&n);
struct Node* root=NULL;
for(i=0;i<n;i++){
printf("{");
root=create();
printf(",{");
root->left=create();
printf(",");
root->left->left=create();
printf(",");
root->left->right=create();
printf("},{");
root->right=create();
printf(",");
root->right->left=create();
printf(",");
root->right->right=create();
printf("}}");
inorder(root);
}
}
