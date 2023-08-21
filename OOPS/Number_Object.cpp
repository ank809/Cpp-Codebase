# include<iostream>
using namespace std;
class Object{
    public:
    static int count;
    Object(){
        count++;
    }
};
int Object::count=0;
int main(){
    Object o1;
    Object o2;
    Object o3;
    cout<<"Total object"<<Object::count;

}