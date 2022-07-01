#include <bits/stdc++.h>
using namespace std;
struct Rectangle{
    int x1{0},x2{0},y1{0},y2{0};
    long long width;
    long long height;
    long long area;
    Rectangle(int x1,int x2,int y1,int y2){
        this->x1 = x1;
        this->x2 = x2;
        this->y1 = y1;
        this->y2 = y2;
        width = x2 - x1;
        height = y2-y1;
        area = width * height;
    }
};


//Area of intersection of black 1 with white sheet + Area of intersection of black 2 with white sheet - intersection of black 1 and black 2;

long long intersectionArea(Rectangle rect1,Rectangle rect2);
long long intersectionBlack(Rectangle rect1,Rectangle rect2,Rectangle offset);
int main(){
    int x1,x2,y1,y2;
    cin>>x1>>y1>>x2>>y2;
    Rectangle whiteSheet(x1,x2,y1,y2);
    cin>>x1>>y1>>x2>>y2;
    Rectangle blackSheet1(x1,x2,y1,y2);
    cin>>x1>>y1>>x2>>y2;
    Rectangle blackSheet2(x1,x2,y1,y2);
    long long interArea = (intersectionArea(whiteSheet,blackSheet1)+ intersectionArea(whiteSheet,blackSheet2) -
            intersectionBlack(blackSheet1,blackSheet2,whiteSheet));
    if((whiteSheet.area - interArea)==0){
        cout<<"NO";
    }else{
        cout<<"YES";
    }

    return 0;
}
long long intersectionArea(Rectangle rect1,Rectangle rect2){
    long long height = max(min(rect1.y2,rect2.y2)-max(rect1.y1,rect2.y1),0);
    long long width  = max(min(rect1.x2,rect2.x2)-max(rect1.x1,rect2.x1),0);
    return height*width;
}

long long intersectionBlack(Rectangle rect1,Rectangle rect2,Rectangle offset){
    rect1.y1 = rect1.y1<offset.y1 ? rect1.y1 = offset.y1 : rect1.y1 = rect1.y1;
    rect1.x1 = rect1.x1<offset.x1 ? rect1.x1 = offset.x1 : rect1.x1 = rect1.x1;
    rect1.y2 = rect1.y2>offset.y2 ? rect1.y2 = offset.y2 : rect1.y2 = rect1.y2;
    rect1.x2 = rect1.x2>offset.x2 ? rect1.x2 = offset.x2 : rect1.x2 = rect1.x2;
    rect2.y1 = rect2.y1<offset.y1 ? rect2.y1 = offset.y1 : rect2.y1 = rect2.y1;
    rect2.x1 = rect2.x1<offset.x1 ? rect2.x1 = offset.x1 : rect2.x1 = rect2.x1;
    rect2.y2 = rect2.y2>offset.y2 ? rect2.y2 = offset.y2 : rect2.y2 = rect2.y2;
    rect2.x2 = rect2.x2>offset.x2 ? rect2.x2 = offset.x2 : rect2.x2 = rect2.x2;
    return intersectionArea(rect1,rect2);
}
