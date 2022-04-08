#include<iostream>
#include<conio.h>

int main()
{
 using namespace std;
int i,j;
int a,b; //satr va soton

 cout << "Satr ra vared konid" << endl;
    cin >> a;
     cout << "soton ra vared konid" << endl;
    cin >> b;
for(i=1;i<=a;i++)
{
for(j=1;j<=b;j++)
cout<<i*j<<"\t";
cout<<"\n";
}
getch();
return 0;
}
