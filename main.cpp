#include <iostream>
using namespace std;

class gp1 {
  private:
  int hair, eyes, length, nationality, language;
  public:
  void sethair(int h) {
      hair = h;
    }
    int gethair() {
      return hair;
    }
 public:
  void seteyes(int e) {
      eyes = e;
    }
    int geteyes() {
      return eyes;
    }
 public:
  void setlength(int l) {
      length = l;
    }
    int getlength() {
      return length;
    }
 public:
  void setnationaliti(int n) {
      nationality = n;
    }
    int getnationality() {
      return nationality;
    }
 public:
  void setlanguage(int g) {
      language = g;
    }
    int getlanguage() {
      return language;
    }
};
class gp2 {
  private:
  int hair, eyes, length, nationality, language;
  public:
  void sethair(int h) {
      hair = h;
    }
    int gethair() {
      return hair;
    }
 public:
  void seteyes(int e) {
      eyes = e;
    }
    int geteyes() {
      return eyes;
    }
 public:
  void setlength(int l) {
      length = l;
    }
    int getlength() {
      return length;
    }
 public:
  void setnationality(int n) {
      nationality = n;
    }
    int getnationality() {
      return nationality;
    }
 public:
  void setlanguage(int g) {
      language = g;
    }
    int getlanguage() {
      return language;
    }
};
class myparent: public gp1,gp2{
    };
class mygchild: public myparent{
};

int main() {
  gp1 myparent;
  myparent.sethair("black");
  cout << myparent.gethair();
  myparent.seteyes("brown");
  cout << myparent.geteyes();
  myparent.setlength("160 cm");
  cout << myparent.getlength();
  myparent.setnationality("Egyptian");
  cout << myparent.getnationality();
  myparent.setlanguage("Arabic");
  cout << myparent.getlanguage();
  gp2 myparent;
  myparent.sethair("brown, straight");
  cout << myparent.gethair();
  myparent.seteyes("black");
  cout << myparent.geteyes();
  myparent.setlength("165 cm");
  cout << myparent.getlength();
  myparent.setnationality("Egyptian");
  cout << myparent.getnationality();
  myparent.setlanguage("Arabic");
  cout << myparent.getlanguage();
  mygchild myobj;
  myobj.sethair(int h);
  myobj.seteyes(int e);
  myobj.setlength(int l);
  myobj.setnationality(int n);
  myobj.setlanguage(int g);
  return 0;
}
