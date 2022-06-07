//sort an one array according to the second array
/*
input: 
a[]={3,1,2}
b[]={g,k,e}

output:
b[]={k,e,g}

input:
 a[]={4,1,3,2}
 b[]={a,x,b,y}
 output:
 b[]={x,y,b,a}
*/

/*
a[]={10,15,5}
b[]={'x','y','z'}
pa[]={(10,x),(15,y),(5,z)}
after sorting:
pa[]={(5,z),(10,x),(15,y)}
output:
z x y

*/
//06/06/2022
#include <bits/stdc++.h>
using namespace std;
void sortChar(int a[],char b[],int n)
{
    pair<int ,char>pa[n];
    for(int i=0;i<n;i++)
    {
        pa[i]={a[i],b[i]};

        //or this can be done in this way also-->
        //pa[i].first=a[i]
        //pa[i].second=b[i] 

    }
    sort(pa,pa+n);
    for(int i=0;i<n;i++)
    {
        cout<<pa[i].second<<" ";
    }
    cout<<endl;
}
int main(){
int a[]={10,15,5};
char b[]={'x','y','z'};

sortChar(a,b,3);


return 0;
}
