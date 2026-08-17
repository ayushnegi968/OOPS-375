#include<iostream>
using namespace std;

class Point{  
    private:
        int x, y;  
    public:
        Point() : x{0}, y{0} 
        {
            // cout << "default constructor" << endl;
        }

        Point(int p=0, int q=0) : x{p}, y{q}
        {
            cout << "parametric constructor" << endl;
        }

        void show(){
            cout << x << " " << y << endl;  
        }

        
        Point add(Point &p1, Point &p2){
            Point temp;  
            temp.x = p1.x + p2.x;
            temp.y = p1.y + p2.y;
            return temp;
        }
         mnn 
};  

int main()
{
    Point p(5,10), q(20,50);
    p.show();
    q.show();

    Point r;
    r = r.add(p, q);  
    r.show();
    
    return 0;
}