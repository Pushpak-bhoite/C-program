#include<stdio.h>
int main(){
    char ch[10]="Vovel";
    int v=0,c=0;
    for (int i = 0; ch[i] != 0; i++)
    {
    if((ch[i]=='A' || ch[i]=='E' ||ch[i]=='I' ||ch[i]=='O' ||ch[i]=='U' ||ch[i]=='S' ) ||(ch[i]=='a' ||ch[i]=='e' ||ch[i]=='i' ||ch[i]=='o' ||ch[i]=='u' )){
        v++;
    }else{
        c++;
    }
    }
    printf("consonant = %d Vovels = %d ",c,v);
    
}