#include <bits/stdc++.h>
using namespace std;

class cuboid
{
public:
    int l,w,h;
    cuboid()
    {
        cin>>l>>w>>h;
    }
    int face_area ()
    {
        return l*w;
    }
    int volume ()
    {
        return l*w*h;
    }
    int Lsa ()
    {
        return (2*(l+w))*h;
    }
    int Tsa()
    {
        return ((2*(l+w))*h)+2*l*w;
    }
    void showall()
    {
        cout<<face_area()<<" "<<volume()<<" "<<Lsa()<<" "<<Tsa()<<endl;
    }
};

int main()
{
    cuboid lq;
    lq.showall();
    return 0;
}
