//	������� ������, ��� ���-�� � ����� ��������� ����, � ������� ��������� ��������� �����������: 
//	�� ��������� ��������� 3 �������� �������, �� ���� �� ������� ��� ���������� ���� ������ ������� 64 ������� ����� 
//	� ���������� ����������, ������ ����� �������� ����� ������� ����, �� ��� � ���� ������� � ��� �����, 
//	���� �� �������� �������� �� �������� ����� ��������� ����. ����� ����� ������� ������������� ����� �� ��������� ��������:
//
//	1. �� ���� ��� ����� ��������� ������ ���� ����. 
//
//	2. ������ ������ ������� ���� �� �������.
//
//	�������������� ����� ��������� ���������, ����� ������ ��������� �������� �������� � 1-�� ������� �� 3-�.
//	��� ������ ��� ��������� � ���� ��������, �������� ����� �����. 

#include<iostream>
#include<Windows.h>
using namespace std;
const int m=3, n=8;
int x[m][n]={0}, y[m], z[m], a[m];
int i, j, u, jj, amax, amin, jjj, s0;

void sortR (int x[][n], const int n)
{
	int v, w;
									for (j=0; j<m; j++)
									{
										for (i=0; i<n; i++)
										{
											a[j] = x[j][i];
											y[j] = j;
											z[j] = i;
											if (x[j][i] != 0) 
												break;
										}
									}
									for (j=0; j<m; j++)									
										if (a[j] == 1) v = j;																		
									w = u % 3;
									if (w == v) 
									{
										u++;
										w = u % 3;
									}
		if (a[w] > 0) z[w] --;
		x[y[w]][z[w]] = x[y[v]][z[v]];
		x[y[v]][z[v]] = 0;

					system("cls");
					cout << "\n\n\n";
					for (i=0; i<n; i++)
					{
						for (j=0; j<m; j++)		
							(x[j][i] == 0) ? cout << "\t" << " " : cout << "\t" << x[j][i];		
						cout << "\n";
					}
					cout << "_______________________________________";
					Sleep(1200);
									for (j=0; j<m; j++)
									{
										for (i=0; i<n; i++)
										{
											a[j] = x[j][i];
											y[j] = j;
											z[j] = i;
											if (x[j][i] != 0) 
												break;
										}
									}
									s0 = 0;
									for (j=0; j<m; j++)		
									{
										if (a[j] == 0) 
										{
											s0 = 1;
											w = j;	
											for (jj=0; jj<m; jj++)
											{
												if (a[jj] > 1) v = jj;
											}
										}
										if (s0 == 0)
										{
											amax = 0;
											amin = n;
											for (jj=0; jj<m; jj++)
											{
												if (a[jj] > amax) 
												{
													amax = a[jj];
													w = jj;												
												}
											}
											 for (jjj=0; jjj<m; jjj++)
											 {
												 if (a[jjj] > 1  &&  a[jjj] < amax ) v = jjj;
											 }
										}
									}
		if (a[w] > 0) z[w] --;
		x[y[w]][z[w]] = x[y[v]][z[v]];
		x[y[v]][z[v]] = 0;

		for (j=0; j<m; j++)
		{
			for (i=0; i<n; i++)
			{
				if (i>0)
				{
					if (x[j][i-1] >= 0   &&  x[j][i] < x[j][i-1]) cout << "\n ERROR !!! ";
				}
			}
		}
		system("cls");
								cout << "\n\n\n";
								for (i=0; i<n; i++)
								{
									for (j=0; j<m; j++)		
										(x[j][i] == 0) ? cout << "\t" << " " : cout << "\t" << x[j][i];		
									cout << "\n";
								}
								cout << "_______________________________________";
								Sleep(1000);

			if (x[2][0] == 1  ||  x[1][0] == 1) 
		{
			cout << u << "\n\n\n";
			return;
		}
		else return sortR (x, n);		
}

void main ()
{
	for (i=0; i<n; i++)
			x[0][i] = i+1;
	sortR (x, n);
}