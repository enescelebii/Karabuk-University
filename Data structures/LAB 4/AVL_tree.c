#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>
#include<unistd.h>
#include<ctype.h>
struct node{
	int data;
	int height;
	struct node *left;
	struct node *right;
};
typedef struct node avltree;
int maxValue(int a, int b) {
    return (a > b) ? a : b;
}
avltree *newnode(int x) {
    avltree *p = (avltree *)malloc(sizeof(avltree));
    p->data = x;
    p->left = p->right = NULL;
    return p;
}
void inorder(avltree *root){
	
	if(root != NULL){
		inorder(root->left);
		printf("\ndata->%d",root->data);
		inorder(root->right);
	}
}


int height(avltree *root){
	if(root == NULL){
		return -1;
	}else{
		int Lheight,Rheight;
		Lheight = height(root->left);
		Rheight = height(root->right);
		if(Rheight>Lheight){
			return Lheight +1 ;
		}else{
			return Rheight +1 ;
		}
	}
}



avltree *right_rotate(avltree *z){
	avltree* temp = z -> left;
	z->left = temp->right;
	temp->right = z;
	z->height = maxValue(height(temp->left),height(temp->right)) + 1;
	return temp;
}
avltree *left_rotate(avltree *z){
	avltree* temp = z->right;
	z->right = temp->left;
	temp->left = z;
	z->height = maxValue(height(temp->left),height(temp->right)) + 1;
	return temp;
}
avltree *left_right_rotate(avltree *z){
	z->left = left_rotate(z->left);
	return right_rotate(z);
}
avltree *right_left_rotate(avltree *z){
	z->right = right_rotate(z->right);
	return left_rotate(z);
}
avltree *insert_to_avl(int x, avltree *tree){
	if(tree != NULL){
		if(x<tree->data)
			tree->left = insert_to_avl(x, tree->left);
		else if(x>tree->data)
			tree->right = insert_to_avl(x, tree->right);
		else
			return tree;
		tree->height = maxValue(height(tree->left), height(tree->right)) + 1;
		if((height(tree->left) - height(tree->right)) > 1 && x < tree->left->data)
			return right_rotate(tree);
		if((height(tree->left) - height(tree->right)) > 1 && x > tree->left->data)
			return left_right_rotate(tree);
		if((height(tree->left) - height(tree->right)) < -1 && x > tree->left->data)
			return left_rotate(tree);
		if((height(tree->left) - height(tree->right)) < -1 && x < tree->left->data)
			return right_left_rotate(tree);
	}
	else
		tree = newnode(x);
return tree;
}
int main(){
	int x;
	avltree *tree;
	while(1){
		scanf("%d",&x);
		if(x == -1 )
			break;
		tree = insert_to_avl(x,tree);
	}
	printf("height: %d",tree->height+1);
	inorder(tree);
	return 0;
}
