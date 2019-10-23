#include<conio.h>
#include<iostream.h>
#include<dos.h>

void main()
{
 char a[50];
 int i;
 clrscr();
 cout<<"enter any name ...";
 cin>>a;

 for(i=1;i<=70;i++)
 {
 delay(50);
 clrscr();
  gotoxy(i,12);
  cprintf(a);
  textcolor(i);

  }

  getch();
  }
