#include <iostream>

using namespace std;

void put_reverse_snake (int n, int m, int Snake[5][5])
{
    int x = m/2;  //����� �� �����������
    int y = n/2;  //����� �� ���������

    int i=0;  //��������
    int j;
    int k=0;  //�������� �� ������

    Snake[y][x] = i;

    while (i < n*m-1)
    {
        k++;
        for (j=y-k+1; j<=y+k; j++)     //���� (������)
        {
            i++;
            Snake[j][x+k] = i;
        }
        for (j=x+k-1; j>=x-k; j--)     //����� (�����)
        {
            i++;
            Snake[y+k][j] = i;
        }
        for (j=y+k-1; j>=y-k; j--)   //����� (�����)
        {
            i++;
            Snake[j][x-k] = i;
        }
        for (j=x-k+1; j<=x+k; j++)   //������ (������)
        {
            i++;
            Snake[y-k][j] = i;
        }
    }
}

int main()
{
    int n = 5, m = 5;
    int Snake[5][5];

    put_reverse_snake (n, m, Snake);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << Snake[i][j] << "\t";
        }
        cout << endl;
    }
}
