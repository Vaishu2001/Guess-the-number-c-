//Guessing a number
#include<iostream>
using namespace std;
int main()
{
int snum=30,num,x=0,chance=5;
while(x!=5)
{
cout<<"Guess a number out of "<<chance <<" chances"<<endl;
cout<<"Enter a number in the range of 1 to 100 :"<<endl;
cin>>num;
if(num==snum)
{
cout<<"Right answer!!!You nailed it!!!";
break;
}
else if(num>30)
{
cout<<"lesser\n";
}

else
{
cout<<"greater\n";
}
x++;
chance--;
}
if(x==5)
{
cout<<"You lost!!!Try again...";
}
return 0;
}


