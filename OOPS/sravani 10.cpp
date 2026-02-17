#include<iostream>
using namespace std;
class rectangle{
    private:
    float length;
    float width;
    public:
    void input(){
        cout<<"enter length of rectangle:";
        cin>>length;
        cout<<"enter width of rectangle:";
        cin>>width;
    }
    float area(){
        return length*width;
    }
    float perimeter(){
        return 2*(length+width);
    }
};
int main(){
    rectangle rect;
    rect.input();
    cout<<"\n rectangle details:"<<endl;
    cout<<"area="<<rect.area()<<endl;
    cout<<"perimeter="<<rect.perimeter()<<endl;
    return 0;
}
