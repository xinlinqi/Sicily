////滚动数组实现0-1背包动态规划
//#include<iostream>
//#include<cmath>
//#include<cstring>//如果在sicily做题,使用memset函数应该包含cstring
//using namespace std;
//int s[1000];
//int main()
//{
//	memset(s,0,sizeof(s));
//	int T,M,t,v,_max = -1;
//	scanf("%d%d",&T,&M);
//	for(int i = 1;i <= M;++i)
//	{
//		scanf("%d%d",&t,&v);
//		for(int j = T;j >= 0;--j)//此处应该逆序枚举
//		{
//			if(j >= t)//因为是逆序枚举，所以s[j]保存的值就是s(i-1,j)的结果，而s[j-t]保存的是s(i-1,j-t)的结果
//				s[j] = max(s[j],s[j-t] + v);//所以max(s[j],s[j-t]+v)就是把max(s(i-1,j),s(i-1,j-t))的结果保存在s[j]中，覆盖掉原来的s(i-1,j)
//			if(s[j] > _max)
//				_max = s[j];
//		}
//	}
//	printf("%d\n",_max);
//	return 0;
//}