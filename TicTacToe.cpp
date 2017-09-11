#include <iostream>
#include <iomanip>
#include <conio.h>
#include <cstdlib>
using namespace std;

void map();
bool logic_1();
bool logic_2();
int check(int);
void invalid();
int control_1();
int control_1();
char position(int);
void display();
void result(int);

const int height=13;
const int width=30;
const int area=360;
int x,y,inv=0;
int a[area]={0};
int chk[10]={0};
int s[10]={0};
bool go;
string p1,p2;


void map()
{

	for(int j=0;j<height;j++)
	{
		for(int i=0;i<width;i++)
		{
			if(i==10)
				a[10 + j*width]=-1;
		   else if(i==20)
				a[20 + j*width]=-1;
            if(j==4)
                a[i + 4*width]=-2;
            else if(j==8)
                a[i + 8*width]=-2;
        }
	}
}

bool logic_1()
{
    if(s[1]==1 && s[2]==2 &&s[3]==3)
        return true;
    else if(s[4]==4 && s[5]==5 && s[6]==6)
        return true;
    else if(s[7]==7 && s[8]==8 && s[9]==9)
        return true;
    else if(s[1]==1 && s[4]==4 && s[7]==7)
        return true;
    else if(s[2]==2 && s[5]==5 && s[8]==8)
        return true;
    else if(s[3]==3 && s[6]==6 && s[9]==9)
        return true;
    else if(s[1]==1 && s[5]==5 && s[9]==9)
        return true;
    else if(s[3]==3 && s[5]==5 && s[7]==7)
        return true;
    else
        return false;
}

bool logic_2()
{
    if(s[1]==-1 && s[2]==-2 &&s[3]==-3)
        return true;
    else if(s[4]==-4 && s[5]==-5 && s[6]==-6)
        return true;
    else if(s[7]==-7 && s[8]==-8 && s[9]==-9)
        return true;
    else if(s[1]==-1 && s[4]==-4 && s[7]==-7)
        return true;
    else if(s[2]==-2 && s[5]==-5 && s[8]==-8)
        return true;
    else if(s[3]==-3 && s[6]==-6 && s[9]==-9)
        return true;
    else if(s[1]==-1 && s[5]==-5 && s[9]==-9)
        return true;
    else if(s[3]==-3 && s[5]==-5 && s[7]==-7)
        return true;
    else
        return false;
}

int check(int c)
{
    if(chk[c]==0)
        return 1;
    else
        return 0;
}
void invalid()
{
    cout<<"\nINVALID REQUEST!!! TRY AGAIN!!!\n\n";
    inv=1;
}

int control_1()
{
    int c,res;
    switch(x)
    {
        case 1: c=1;
                if(check(c))
                {
                    a[5 + 2*30]=1;
                    chk[c] = -1;
                    s[1]=1;inv=0;
                    break;
                }
                else
                {
                    invalid();
                    break;
                }
        case 2: c=2;
                if(check(c))
                {
                    a[15 + 2*30]=1;
                    chk[c] = -1;
                    s[2]=2;inv=0;
                    break;
                }
                else
                {
                    invalid();
                    break;inv=0;
                }
         case 3: c=3;
                if(check(c))
                {
                    a[25 + 2*30]=1;
                    chk[c] = -1;
                    s[3]=3;inv=0;
                    break;
                }
                else
                {
                    invalid();
                    break;
                }
         case 4: c=4;
                if(check(c))
                {
                    a[5 + 6*30]=1;
                    chk[c] = -1;
                    s[4]=4;inv=0;
                    break;
                }
                else
                {
                    invalid();
                    break;
                }
         case 5: c=5;
                if(check(c))
                {
                    a[15 + 6*30]=1;
                    chk[c] = -1;
                    s[5]=5;inv=0;
                    break;
                }
                else
                {
                    invalid();
                    break;
                }
         case 6: c=6;
                if(check(c))
                {
                    a[25 + 6*30]=1;
                    chk[c] = -1;
                    s[6]=6;inv=0;
                    break;
                }
                else
                {
                    invalid();
                    break;
                }
         case 7: c=7;
                if(check(c))
                {
                    a[5 + 10*30]=1;
                    chk[c] = -1;
                    s[7]=7;inv=0;
                    break;
                }
                else
                {
                    invalid();
                    break;
                }
         case 8: c=8;
                if(check(c))
                {
                    a[15 + 10*30]=1;
                    chk[c] = -1;
                    s[8]=8;inv=0;
                    break;
                }
                else
                {
                    invalid();
                    break;
                }
         case 9: c=9;
                if(check(c))
                {
                    a[25 + 10*30]=1;
                    chk[c] = -1;
                    s[9]=9;inv=0;
                    break;
                }
                else
                {
                    invalid();
                    break;
                }
         default: invalid();
                  break;
    }
}

int control_2()
{
    int c;
    switch(y)
    {
        case 1: c=1;
                if(check(c))
                {
                    a[5 + 2*30]=2;
                    chk[c] = -1;
                    s[1]=-1;inv=0;
                    break;
                }
                else
                {
                    invalid();
                    break;
                }
        case 2: c=2;
                if(check(c))
                {
                    a[15 + 2*30]=2;
                    chk[c] = -1;
                    s[2]=-2;inv=0;
                    break;
                }
                else
                {
                    invalid();
                    break;
                }
         case 3: c=3;
                if(check(c))
                {
                    a[25 + 2*30]=2;
                    chk[c] = -1;
                    s[3]=-3;inv=0;
                    break;
                }
                else
                {
                    invalid();
                    break;
                }
         case 4: c=4;
                if(check(c))
                {
                    a[5 + 6*30]=2;
                    chk[c] = -1;
                    s[4]=-4;inv=0;
                    break;
                }
                else
                {
                    invalid();
                    break;
                }
         case 5: c=5;
                if(check(c))
                {
                    a[15 + 6*30]=2;
                    chk[c] = -1;
                    s[5]=-5;inv=0;
                    break;
                }
                else
                {
                    invalid();
                    break;
                }
         case 6: c=6;
                if(check(c))
                {
                    a[25 + 6*30]=2;
                    chk[c] = -1;
                    s[6]=-6;inv=0;
                    break;
                }
                else
                {
                    invalid();
                    break;
                }
         case 7: c=7;
                if(check(c))
                {
                    a[5 + 10*30]=2;
                    chk[c] = -1;
                    s[7]=-7;inv=0;
                    break;
                }
                else
                {
                    invalid();
                    break;
                }
         case 8: c=8;
                if(check(c))
                {
                    a[15 + 10*30]=2;
                    chk[c] = -1;
                    s[8]=-8;inv=0;
                    break;
                }
                else
                {
                    invalid();
                    break;
                }
         case 9: c=9;
                if(check(c))
                {
                    a[25 + 10*30]=2;
                    chk[c] = -1;
                    s[9]=-9;inv=0;
                    break;
                }
                else
                {
                    invalid();
                    break;
                }
        default: invalid();
                 break;
    }
}

char position(int val)
{
	switch(val)
	{
	    case 1: return 'X';
	    case 2: return 'O';
		case -1: return '|';
		case -2: return '-';
	}
}

void display()
{
    cout<<"\n\t\t\t\t\t\t  TIC TAC TOE";
    cout<<"\n\n";
	for (int i = 0; i <height; ++i)
	{
		cout<<"\t\t\t\t\t";
		for (int j = 0; j < width; ++j)
		{
			cout<<position(a[j + i*width]);
		}
		cout<<endl;
	}
	cout<<"\n\n";
}
void result(int flag)
{
    if(flag==1)
        cout<<"\n\t\t\t\t\t  "<<p1<<" WINS!!!\n";
    else if(flag==-1)
        cout<<"\n\t\t\t\t\t  MATCH DRAWN!!!\n";
    else
        cout<<"\n\t\t\t\t\t  "<<p2<<" WINS!!!\n";
}

int main()
{
	map();
	display();
	cout<<"\nEnter Player-1 Name: ";
    cin>>p1;
    cout<<"\nEnter Player-1 Name: ";
    cin>>p2;
    system("cls");
    display();
    int cnt=0,i;
    go=false;
    int flag=0,fl=0;
    while(go==false)
    {
        do{
            cout<<p1<<" Your Turn : ";
            cin>>x;
            control_1();
         }while(inv==1);

        system("cls");
        display();
        go=logic_1();
        if(go==true)
        {
            flag=1;
            break;
        }
        for(i=1;i<10;i++)
        {
            if(s[i]==0)
                break;
        }
        if(i==10)
        {
            flag=-1;
            break;
        }

        do{
            cout<<p2<<" Your Turn : ";
            cin>>y;
            control_2();
        }while(inv==1);

        system("cls");
        display();
        go=logic_2();
        if(go==true)
            break;
        for(i=1;i<10;i++)
        {
            if(s[i]==0)
                break;
        }
        if(i==10)
        {
            flag=-1;
            break;
        }
    }
    result(flag);

	return 0;
}
