#include <bits/stdc++.h>
using namespace std;
int soma=0;
void recursiva(int n)
{
    soma++;
    if(n==0) return;
    if(n==1) return;
    recursiva (n-1);
    recursiva (n-2); 

}
