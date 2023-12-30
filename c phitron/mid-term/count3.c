#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
     
    while (t--)
    {
        int cap = 0, sm = 0, other = 0;
        char a[10000];
        scanf(" %s", a);
        int t = strlen(a);

        for (int i = 0; i < t; i++)
        {

            if (a[i] >= 'A' && a[i] <= 'Z')
            {
                cap++;
            }
            else if (a[i] >= 'a' && a[i] <= 'z')
            {
                sm++;
            }
            else
            {
                other++;
            }
        }
        /* code */
        printf("%d %d %d\n", cap, sm, other);
    }
    

    /* code */
}