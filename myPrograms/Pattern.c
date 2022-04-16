#include<stdio.h>
#include<string.h>

void Search(char *pat,char *txt)
{
    int m = strlen(pat);
    int n = strlen(txt);

 for(int i=0;i<n-m;i++)
    {
        int j;
        for(j=0;j<m;j++)

        if(txt[i+j] != pat[j])
            break;

        if(j == m)
            printf("The pattern found at index:%d\n\n",i);
    }
}

int main()
{
    char txt[] = "AABAACAADAABAABAA";
    char pat[] = "AABA";
    Search(pat,txt);

    return 0;
}
