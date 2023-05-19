
#include<stdio.h>
#include<stdlib.h>

typedef struct treenode{

	int data;
	struct treenode *left;
	struct treenode *right;
}treenode;
 
treenode* constBt(int inOrder[] ,int preOrder[] ,int inStart ,int inEnd ,int preStart ,int preEnd) {

	if( inStart > inEnd){
	
		return NULL;
	}
	int rootdata = preOrder[preStart];

	treenode *temp = (treenode*)malloc(sizeof(treenode));
	temp->data = rootdata;

	int idx;
	for(idx = inStart ; idx <= inEnd ; idx++ ){
	
		if(rootdata == inOrder[idx])
			break;
	}
	int len = idx - inStart;

	temp->left = constBt(inOrder ,preOrder ,inStart , idx-1 ,preStart+1 ,preStart+len);
	
	temp->right = constBt(inOrder ,preOrder ,idx+1 ,inEnd ,preStart+1+len ,preEnd);

	return temp;
}
void inOrderTraversal(treenode *root){

	if(root == NULL)
		return;

	inOrderTraversal(root->left);
	printf("%d ",root->data);
	inOrderTraversal(root->right);
}
void preOrderTraversal(treenode *root){

	if(root == NULL)
		return;

	
	printf("%d ",root->data);
	preOrderTraversal(root->left);
	preOrderTraversal(root->right);
}
void postOrderTraversal(treenode *root){

	if(root == NULL)
		return;
	
	postOrderTraversal(root->left);
	postOrderTraversal(root->right);
	printf("%d ",root->data);
}
void main(){

	int inOrder[] = {4,2,5,1,6,7,3};
	int preOrder[] = {1,2,4,5,3,6,7};

	int inStart = 0, inEnd = 6;
	int preStart = 0 ,preEnd = 6;

	treenode *root = constBt(inOrder ,preOrder ,inStart ,inEnd ,preStart ,preEnd);

	inOrderTraversal(root);
	printf("\n");
	preOrderTraversal(root);
	printf("\n");
	postOrderTraversal(root);
	printf("\n");


}
