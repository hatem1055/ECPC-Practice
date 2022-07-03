
#include <bits/stdc++.h>
using namespace std;
 
struct Rectangle{
    int x1,x2,y1,y2,width,height;
    long long area;
    Rectangle(int x1,int x2,int y1,int y2){
        this->x1 = x1;
        this->x2 = x2;
        this->y1 = y1;
        this->y2 = y2;
        width = x2 - x1;
        height = y2 - y1;
        area = width * height;
    }
};
 
int main(){
    int t;
    cin>>t;
    while (t--){
        int x1,x2,y1,y2;
        cin>>x2>>y2;
        Rectangle room(0,x2,0,y2);
        cin>>x1>>y1>>x2>>y2;
        Rectangle rectMoving(x1,x2,y1,y2);
        cin>>x2>>y2;
        Rectangle rectFixed(0,x2,0,y2);
        int result = INT_MAX;
        if(rectFixed.width + rectMoving.width <=room.width) {
            result = min(result, max(0, rectFixed.width - rectMoving.x1));
            result = min(result, max(0, rectMoving.x2 - (room.width - rectFixed.width)));
        }
        if(rectFixed.height + rectMoving.height <=room.height){
            result = min(result,max(0,rectFixed.height - rectMoving.y1));
            result = min(result, max(0,rectMoving.y2 - (room.height - rectFixed.height)));
        }
        if(result == INT_MAX){
            cout<<-1<<endl;
            continue;
        }
        cout<<fixed<<setprecision(9)<<(double)result<<endl;
    }
    return 0;
}
