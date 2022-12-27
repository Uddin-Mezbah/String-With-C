//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    int n;
//    int str_1,len;
//    int ans;
//
//    char str[100];
//    scanf("%d",&str);
//    while(str)
//    {
//        scanf("%s",&str);
//        len = strlen(str);
//        int idx = 0;
//        for (int i=1; i<len && !idx; i++)
//        {
//            for (int j=0; j < len-n && !idx; j++)
//            {
//                if (str[i+n] != str[i])break;
//
//                else if ( i== len-n-1 && str[i+n]==str[i] && len%n==0){ idx=1; ans=n;}
//            }
//        }
//        if (idx) printf("%d\n",ans);
//        else printf("%d\n",len);
//        if (str != 0) printf("\n");
//    }
//
//}
#include<stdio.h>
main()
{
    long long n,m,a;
    scanf("%lld %lld %lld",&n,&m,&a);

    printf("%lld",(m+a-1ll)/a*((n+a-1)/a));

}
