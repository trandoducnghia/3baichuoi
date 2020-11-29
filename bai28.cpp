#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Vui long nhap N";
    cin >> n;
    int A[n] = {};
    for(int i =1; i<=n;i++)
    {
        cout << "a" << i << "=";
        cin >> A[i];
    }
    int dem = 0;
    int dansen[n] = {};
    int check;
    for(int i=1;i<=n;i++)
    {
        if(check == NULL)
        {
            dem+=1;
        }

        if(A[i]*check < 0)
        {
            dem+=1;
        }
        else
        {
            dem = 0;
        }

        check = A[i];
        // set mảng
        dansen[i] = dem;
    }
    int start = 0, close = 0;
    int c_start = 0, c_close = 0;
    int daimax = 0, cdem = 1;
    for(int i=1;i<=n;i++)
    {
        if(dansen[i] == 1)
        {
            c_start = i;
        }

        if(dansen[i] >=2)
        {
            cdem+=1;
        }

        if(dansen[i+1] <=1)
        {
            c_close = i;
            if(daimax <cdem)
            {
                daimax = cdem;
                close = i;
                start = c_start;
            }
            cdem = 1;
        }
    }
    cout << "chuoi dai nhat" << daimax << "start" << start << "end:" << close;
}
