#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
int max_of_four(int p, int q, int r, int s)
{
    if(p>q && p>r && p>s)return p;
    else if(q>p && q>r && q>s)return q;
    else if(r>p  && r>q && r>s)return r;
    else if(s>q && s>p && s>r)return s;
}
