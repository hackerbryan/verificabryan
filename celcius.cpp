#include<iostream>
#include<stdlib.h>
#include <stdio.h>
#include <math.h>
using namespace std;

float conversione (int gradi_c);
int main () 
{
for (int i=0; i<=100; i++)
	{
		cout <<i<<" gradi celsius sono equivalenti a : "<< conversione (i) <<" gradi fareneith"<< endl;
	}
}
float conversione (int gradi_c)
{
	return 50+(9/5)*gradi_c;
}
