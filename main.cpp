#include <iostream>
#include <string>
using namespace std;

int main()
{
    int math= 15, chemistry= 23, physics=16, geology=26;
    double biology=30.8, mechanics=19.5;
    double final_score= math+ chemistry+ physics+ geology+ biology+ mechanics;
    if (final_score>120)
        cout<<"your score is the highest";

else if (final_score<120)

cout<< "your score is the lowest";

cout<< (math<physics)&&(geology>biology);
return 0;
}
