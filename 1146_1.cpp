////��������ʵ��0-1������̬�滮
//#include<iostream>
//#include<cmath>
//#include<cstring>//�����sicily����,ʹ��memset����Ӧ�ð���cstring
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
//		for(int j = T;j >= 0;--j)//�˴�Ӧ������ö��
//		{
//			if(j >= t)//��Ϊ������ö�٣�����s[j]�����ֵ����s(i-1,j)�Ľ������s[j-t]�������s(i-1,j-t)�Ľ��
//				s[j] = max(s[j],s[j-t] + v);//����max(s[j],s[j-t]+v)���ǰ�max(s(i-1,j),s(i-1,j-t))�Ľ��������s[j]�У����ǵ�ԭ����s(i-1,j)
//			if(s[j] > _max)
//				_max = s[j];
//		}
//	}
//	printf("%d\n",_max);
//	return 0;
//}