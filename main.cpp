#include <fstream>
using namespace std;
ifstream f("date.in");
ofstream g("date.out");
int n,lungime,a,b,c,lmax;
int main()
{
    f>>a;
    f>>b;
    while(f>>c)
    {
        if((a!=b)&&(b!=c)&&(c!=a))
            lungime++;
        else
            lungime=0;
        if(lungime>=lmax)
            lmax=lungime;
        a=b;
        b=c;
    }
    g<<lmax+2;
    g.close();
    f.close();
    return 0;
}
