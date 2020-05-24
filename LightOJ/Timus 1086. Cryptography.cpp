#include <cstdio>
#include <cstring>

using namespace std;

#define maxN 164000
    bool status[maxN];
    int ans[15000];
int main()
{

    memset(status, true, sizeof(status));


    ///set default
    status[0] = false;
    status[1] = false;

    ans[0]=2;
    int counter =1;

    for(int i =3; i<maxN && counter<15000; i+=2)
    {
        if(status[i])
        {
            ans[counter++] = i;

        if(i <(maxN/i))
            for(int j = i*i; j < maxN; j +=i)
            {
                status[j] = false;
            }
        }
    }

    int T,ind;
    scanf("%d",&T);

    while(T--){
        scanf("%d",&ind);
        printf("%d\n",ans[ind-1]);
    }

    return 0;
}
