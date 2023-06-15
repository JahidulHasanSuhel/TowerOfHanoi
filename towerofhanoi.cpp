#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
void tower(int n,char s,char h,char d){
    if(n==0) return;
    tower(n-1,s,d,h);
    cout<<s<<" -> "<<d<<endl;
    tower(n-1,h,s,d);
    return ;
}

int main(){
system("cls");
    int n;
    cout<<"enter a number of plate: ";
    cin>>n;
    tower(n, 'a','b','c');
    getch();
    return 0;
}