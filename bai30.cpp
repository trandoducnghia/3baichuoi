#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "n=";
    cin >> n;
    int A[n] = {};
    for(int i =1;i<=n;i++)
    {
        cout << "A" << i << "=";
        cin >> A[i];
    }
    int khongtang[n] = {};
    int value = 1;
    int defu = NULL;
    for(int i=1;i<=n;i++)
    {
      if(defu == NULL)
      {
          defu = A[i];
          value = 1;
      }
      else
      if(defu == A[i])
      {
          value+=1;
      }
      else
      {
          value = 1;
      }
      khongtang[i] = value;
      defu = A[i];
    }
    int length = 0, length_check = 1;
    int c_start = 0, c_close = 0;
    int start = 0, close = 0;
    for(int i=1;i<=n;i++)
    {
        if(khongtang[i] == 1)
        {
            c_start = i;
        }

        if(khongtang[i] >=2)
        {
            length_check+=1;
        }

        if(khongtang[i+1] <=1)
        {
            c_close = i;
            if(length < length_check)
            {
                length = length_check;
                start = c_start;
                close = c_close;
            }
            length_check = 1;
        }
    }
    cout << "Chuoi dai nhat" << length << "start" << start << "end" << close;
    return 0;
}
