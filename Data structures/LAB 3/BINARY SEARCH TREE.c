#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>
#include<unistd.h>
#include<ctype.h>
struct node{
	int data;
	struct node *left;
	struct node *right;
};

typedef struct node *btree;

void inorder(btree root);
btree insert(btree root,int x);
btree newnode(int x);



int main(){
	btree root = NULL;
	root = insert(root,25);
	root = insert(root,12);
	root = insert(root,8);
	root = insert(root,32);
	root = insert(root,6);
	root = insert(root,88);
	traverse(root);
	printf("\nagactaki dugum sayisi = %d\n",size(root));
	int sonuc = countParent(root);
	printf("\nparents: %d\n",sonuc);
	printf("\n----AGACTAKILER----");
	return 0;
}

void inorder(btree root){
	if(root != NULL){
		inorder(root->left);
		printf("\ndata->%d",root->data);
		inorder(root->right);
	}
}
btree insert(btree root,int x){
	if(root == NULL){
		root = newnode(x);
	}
	else{
		if(x<root->data)
			root->left = insert(root->left,x);
		else
			root->right = insert(root->right,x);
	}
	return root;
}
btree newnode(int x){
	btree p;
	p = (btree)malloc(sizeof(struct node));
	p->data = x;
	p->left = p->right = NULL;
	return p;
}
void traverse(btree root){
	if(root == NULL)
		return;
	printf("%d\n",root->data);
	traverse(root->left);
	traverse(root->right);
}
int size(btree root){
	if(root==NULL)
		return;
	return size(root->left) + size(root->right) + 1;
}
int countParent(btree root){
	if(root == NULL){
		return 0;
	}
	int parents = 0;
	if(root->left != NULL || root->right != NULL)
		parents++;
	parents+=countParent(root->left);
	parents+=countParent(root->right);
	return parents;
}
int bul(btree root,int aranan){
	if(root == NULL)
		return -1;
	if(root->data == aranan)
		return 1;
	if(bul(root->left,aranan)==1)
		return 1;
	if(bul(root->right,aranan)==1)
		return 1;
	return -1;
}