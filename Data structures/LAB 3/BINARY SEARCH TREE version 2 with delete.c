#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *left;
	struct node *right;
};

typedef struct node *btree;

void inorder(btree root);
btree insert(btree root,int x);
btree newnode(int x);
btree deleteNode(btree,int);
int height(btree root);
int depthNodes(btree root,int depth);

int main(){
	btree root = NULL;
	int i = 0,temp;
	do {
		printf("\n\nAgaca veri eklemek icin sayi giriniz...\nSayi = ");
		scanf("%d", &i);
		if(i != -1)
		root = insert(root, i);
		temp = i;
	} while(i != -1);
	

	traverse(root);
	printf("\nKucukten buyuye inorder:\n");
	inorder(root);
	
	printf("\n\n delete last item\n\nheight is %d\n\n",height(root));
	root = deleteNode(root,i);
	
	traverse(root);
	
	
	printf("\n\nagactaki dugum sayisi = %d\n",size(root));
	int sonuc = countParent(root);
	printf("\nparents: %d\n",sonuc);
	printf("\n----AGACTAKILER----");
	return 0;
}

void mirror(btree root){
	if(root == NULL){
		return;
	}else{
		btree temp;
		temp = root->left;
		root->left = root->right;
		root->right = temp;
		mirror(root->left);
		mirror(root->right);
	}
}

int height(btree root){
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

int depthNodes(btree root,int depth){
	if(root == NULL){
		return 0;
	}
	if(depth == 0){
		return 1;
	}
	else{
		return depthNodes(root->left,depth-1) + depthNodes(root->right,depth-1);
	}
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
		return 0;
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

btree deleteNode(btree root,int x){
	btree p,q;
	if(root==NULL)
		return NULL;
	if(root->data==x){
		if(root->left==root->right){
			free(root);					//case 1
			return NULL;
		}
		else{
			if(root->left == NULL){
				p=root->right;
				free(root);
				return p;						//case 2
			}
			else if(root->right==NULL){
				p=root->left;
				free(root);
				return p;
			}
			else{
				p=q=root->right;
				while(p->left!=NULL)
					p->left = root->left;		//case 3
					free(root);
					return q;
			}
		}
	}
	if(root->data < x){
		root->right = deleteNode(root->right,x);
	}
	else{
		root->left = deleteNode(root->left,x);
		
	}
	return root;
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