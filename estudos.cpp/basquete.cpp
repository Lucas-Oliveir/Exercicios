 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
     int s;
     char let;
     int b=0,a=0;
     bool ver=true,jaganhou=false;
     char ganhador;

     while(scanf("%1c %1d",&let,&s)!=EOF)
     {
         if(let=='A') a+=s;
         else b+=s;

         if(a==10 && b==10) ver = false;
         if((a<=11 || b<=11) && ver && !jaganhou)
         {
            jaganhou=true;
            if(a>b) ganhador='A';
            else ganhador ='B'; 
         }
         if(!ver && abs(a-b)==2 && !jaganhou)
         {
            jaganhou=true;
            if(a>b) ganhador='A';
            else ganhador ='B'; 
         }  
     }
     cout<<ganhador<<endl;
     cout << "sexo" << endl;

 }