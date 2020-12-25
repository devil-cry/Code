#include <bits/stdc++.h>
using namespace std;typedef long long ll;
mt19937 mrand(random_device{}());
int rnd(int x) {return mrand()%x;} // [0 to x-1]
int Tn;//test_file_number
char fn[30];//file_name
FILE* fin;

void getData(int x)
{
    int T=rnd(1e3)+1;
    fprintf(fin,"%d\n",T);
    int n;
    char ch[105];
    while(T--){
        if(x<5) n=rnd(100)+1;
        else n=100;
        for(int i=0,t;i<n;i++){
            t=rnd(2);
            ch[i]='0'+t;
        }
        ch[n]='\0';
        fprintf(fin,"%s\n",ch);
    }
}

int main(int argc,char** argv)
{
    Tn=5;
    srand(time(0));
    for(int i=1;i<=Tn;i++){
        sprintf(fn,"%d.in",i);
        fin=fopen(fn,"w+");
        getData(i);
        fclose(fin);
    }
    return 0;
}
