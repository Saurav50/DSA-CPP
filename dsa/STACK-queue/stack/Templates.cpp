#include <iostream>
using namespace std;
template <typename T,typename V> 
class Pair{
    T x;
     V y;
    public:
    void setX(T x){
        this->x=x;
    };
    T getX(){
        return this->x;
    }
    void setY(V y){
        this->y=y;
    }
    V getY(){
        return this->y;
    }
};
int main(){
    Pair<Pair<int,int>,int> p;
    p.setY(3);
    Pair<int,int> p1;
    p1.setX(1);
    p1.setY(2);
    p.setX(p1);
    cout<<p.getX().getX()<<" "<<p.getX().getY()<<" "<<p.getY();
}