//#include <iostream>
//#include <string>
//#include <queue>
//#include <cstring>
//#include <algorithm>
//using namespace std ;
//
//struct Position
//{
//    int x ;
//    int y ;
//};
//
//Position p[31] ;
//int s_x , s_y  ;
//int dir[][2] = {{-1,-2},{1,-2},{2,-1},{2,1},{1,2},{-1,2},{-2,1},{-2,-1}} ;
//bool visit[5][6] , flag ;
//int start ;
//
//void print()
//{
//    cout << start ;
//    for(int i = 2 ; i < 31 ; i ++)
//    {
//        cout << " "<< p[i].x * 6 + p[i].y + 1  ;
//    }
//    cout << endl;
//}
//
// 
//
//void search(int x , int y ,int step ) 
//{               
//    if( step == 30 )
//    {
//        flag = 1;
//        return ;
//    }
//	//print();
//    int next_x , next_y ;
//    for(int i = 0 ;i  < 8 ;i ++)
//    {
//        next_x = x + dir[i][0] ;
//        next_y = y + dir[i][1] ;
//        if( next_x >= 0 && next_x <= 4 &&  next_y >= 0 && next_y <= 5 && visit[next_x][next_y] == 0 )
//        {
//                step ++ ;
//                p[step].x = next_x ;
//                p[step].y = next_y ;
//
//                visit[next_x][next_y] = 1 ;
//                search(next_x , next_y,step) ;  
//                if(flag == 1) return ;
//
//                visit[next_x][next_y] = 0 ;
//                step -- ;
//        }
//    }
//}
//
// 
//
//int main()
//{
//
//    while(cin >> start && start != -1 ) 
//    {
//        s_x =( start - 1 ) / 6 ;
//        s_y = start - 1 - s_x * 6 ;
//        p[1].x = s_x ;
//        p[1].y = s_y ;
//        memset(visit,0,sizeof(visit)) ;
//        visit[s_x][s_y] = 1 ;
//        flag = 0 ;
//        search(s_x,s_y,1) ;
//        print() ;
//    }
//}