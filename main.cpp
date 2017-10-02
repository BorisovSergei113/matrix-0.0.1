#include <iostream>
#include <sstream>
using namespace std;


int main() {
    
    int mat1 [3] [3] ;
    int mat2 [3] [3] ;
    int mat3 [3] [3] ;
    char oper;
    ///
        for (int i =0; i<3 ; i++)
        {
            for (string string; getline(cin, string); )
            {  istringstream stream (string);
                bool failure = false;
                for (int j =0; j<3; j++)
                {
                    if (!(stream>>mat1[i] [j]))
                    {
                        failure = true;
                        break;
                    }
                }
                if(!failure)
                    break;
                else
                {cout<<"An error has occured while reading input data"<<'\n';}
            }
        }
     ///
    cin.get(oper);
    cin.get();
     ///
        for (int i =0; i<3 ; i++)
        {
            for (string string; getline(cin, string); )
            {  istringstream stream (string);
                bool failure = false;
                for (int j=0; j<3; j++)
                {
                    if (!(stream>>mat2[i] [j]))
                    {
                        failure = true;
                        break;
                    }
                }
                if(!failure)
                    break;
                else
                { cout<<"An error has occured while reading input data"<<'\n';}
            }
        }
    ///
    cout<<"  "<<'\n';
    
        switch (oper)
        {
            case '+':
                for (int i = 0; i<3; i++)
                {
                    for( int j = 0; j<3; j++)
                    {
                        int res;
                        res=mat1[i][j]+mat2[i][j];
                        mat3 [i] [j] = res;
                    }
                }
                break;
                case '-':
            
                for (int i = 0; i<3; i++)
                {
                    for( int j = 0; j<3; j++)
                    {
                        int res;
                        res=mat1[i][j]-mat2[i][j];
                        mat3 [i] [j] = res;
                    }
                }
                break;
                case '*':
                for (int i = 0; i<3; i++)
                {
                    for( int j = 0; j<3; j++)
                    {
                        int res;
                        res = (mat1[i][0]*mat2[0][j]) + (mat1[i][1]*mat2[1][j]) + (mat1[i][2]*mat2[2][j]);
                        mat3 [i] [j] = res;
                    }
                }
                break;
        }
    
    ///
    for (int i=0; i<3; i++)
     {
     for (int j =0 ; j<3; j++)
     {
     cout<<mat3[i][j]<<" ";
     }
     cout<<'\n';
     }
    
    return 0 ;
}
