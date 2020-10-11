//*
//* *
//* * *
//* * * *
//* * * * *

#include<iostream>
using namespace std;
 int i,j,rows;
 int main(){
 cout<<"enter the rows";
 cout>>rows;
 for( int i=0;i<=rows;++1){
     for(int j=1;j<=i;++j){
         cout<<"*";

     }
     cout<<"\n";
 }
 return 0;
 }


 //1
//1 2
//1 2 3
//1 2 3 4
//1 2 3 4 5

#include <iostream>
using namespace std;

int main()
{
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
    return 0;
}


//A
//B B
//C C C
//D D D D
//E E E E E



//* * * * *
//* * * *
//* * * 
//* *
/*


#include <iostream>
using namespace std;

int main()
{
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = rows; i >= 1; --i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << "* ";
        }
        cout << endl;
    }
    
    return 0;
}



//1 2 3 4 5
//1 2 3 4 
//1 2 3
//1 2
//1



1
2 3
4 5 6
7 8 9 10


#include <iostream>
using namespace std;

int main()
{
    int rows, number = 1;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << number << " ";
            ++number;
        }

        cout << endl;
    }

    return 0;
}