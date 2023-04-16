#include<stdio.h>
#define size 50
int main(){
	int c,x,f,g,h,j;
	char sesli[size],sessiz[size],sayi[size],bosluk[size];
	char one[size];
	gets(one);
		for(c=0;one[c]!=NULL;c++);
		for(x=0,f=0,g=0,h=0,j=0;x<c;x++){
			if(one[x]==97 ||one[x]==101||one[x]==105||one[x]==111||one[x]==117 ||one[x]==65 ||one[x]==69 ||one[x]==73 ||one[x]==79 ||one[x]==85){
				f++;
			}
			else if(one[x]>=65&&one[x]<=90 || one[x]>=97&&one[x]<=122){
				j++;
			}
			if(one[x]>=48&&one[x]<=57){
				g++;
			}
			if(one[x]==32){
				h++;
			}
		}
		printf("Sesli harfler:%d\nSessiz harfler:%d\nSayilar:%d\nBosluklar:%d",f,j,g,h);
}
