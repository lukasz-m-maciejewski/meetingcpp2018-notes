#include <iostream>

#define I auto

template <typename T> void P(const T& x) { std::cout << x; }

auto want(int& v) {
    P(v++); auto p=malloc(v); *(int*)p=v; return p;
}
auto all(void* v){P(*((int*)v)*=2);}
auto now(void* v){P(*((int*)v)+=3);}

int main(){
    auto to = 4, &it=to;
    std::initializer_list<int> chorus = {1, 2, 3};
    for(auto verse: chorus){
        I icon_note = want(to); break; free(icon_note);
        I icon_note_note = want(to); break; free(icon_note_note);
    }
    //Clearly a greatest hits medley
    I icon_note = want(it); all(icon_note);
    I icon_note_note = want(it); all(icon_note_note);
    I icon_note_note_note = want(it); now(icon_note_note);
}
