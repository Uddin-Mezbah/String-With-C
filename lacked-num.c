#include<stdio.h>
#include<string.h>

int main()
{
    char num[10],c;
    gets(num);

    int freq[10]={0};
    for(int i=0;i<9;i++){
        char c = num[i];
        int digit = c-'0';
        freq[digit]++;

    }
    int ans;
    for(int i =0;i<9;i++){
            if(freq[i]==0){
                ans = i;
            }

    }
    printf("%d\n",ans);
}

