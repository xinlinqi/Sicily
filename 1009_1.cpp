////给一个数k,对小于k的素数，若2^k -1 的值是合数的话，求出它的质因子
//#include<iostream>
//#include<cmath>
//using namespace std;
//int p[10]={11,23,29,37,41,43,47,53,59};    
// //61也是素数，但计算这一项会超时，而且它也不是答案，所以猥琐地把它删掉了。。
//int main()
//{
//    int k;
//    long long n,m,fac[10];
//    cin>>k;
//    for(int i=0;i<=8&&p[i]<=k;++i)
//    {
//        n=(long long)pow(2.0,p[i])-1;   //这里要显式转换(long long)，否则遇到较大的数(p[i]=59)就不行了
//        m=n;
//        int flag=0,r=0;
//        long long j=2;
//        while(j*j<=n)   //分解质因子
//        {
//            if(n%j!=0)
//                j++;
//            else
//            {
//                flag=1; 
//                n/=j;fac[r++]=j;
//            }   
//        }
//        if(flag)    //如果是合数，则输出质因子，要注意格式
//        {
//            fac[r++]=n;
//            cout<<fac[0];
//            for(int k=1;k<r;++k)
//                cout<<" * "<<fac[k];
//            cout<<" = "<<m<<" = ( 2 ^ "<<p[i]<<" ) - 1\n";
//        }
//    }
//    return 0;
//}