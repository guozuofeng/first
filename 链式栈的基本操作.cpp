#include<iostream>
using namespace std;
typedef struct NODE{
	int date;
	struct NODE * next;
}node;

int StackInit(node* & s){//������ջ 
	s=NULL;
}

int StackPush(node* &s,int d){//����Ԫ�� 
	node* p=new node;
	p->date=d;
	p->next=s;
	s=p;
}
int StackDelete(node* &s){//ջ��Ԫ�� 
	if(s==NULL){
		return -1;
	}
	int d=s->date;
	s=s->next;
	return d;
}

int main(){
	node *s;
	StackInit(s);
	int n;
	cin>>n;
	int a;
	for(int i=0;i<n;i++){
		cin>>a;
		StackPush(s,a);
	}
	while(s!=NULL){
		int ans=StackDelete(s);
		cout<<ans<<' '; 
	}
	return 0;
} 
