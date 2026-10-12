#include<iostream>
#include<cmath>
using namespace std;

class point
{
    int x,y;
    public:
        point(int a  , int b){x = a ; y = b;};
        void printpoint(){cout<<"The point is ("<<x<<","<<y<<")"<<endl;}
        friend float distance_between_two_points(point,point);
};

float distance_between_two_points(point a,point b)
{
    float distance = float(sqrt(pow(a.x-b.x , 2)+pow(a.y-b.y , 2)));
    return float(distance);
}
 
int main()
{
    point p(1,2);
    point q(2,3);
    p.printpoint();
    q.printpoint();
    float distance = distance_between_two_points(p,q);
    cout<<"The diatance between two points is "<<distance<<endl;
    return 0;
}
