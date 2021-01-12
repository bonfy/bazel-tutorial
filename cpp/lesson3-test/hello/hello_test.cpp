#include "hello.h"
#include<assert.h>
int main() {
    Hello h;
    assert(h.SayHi() == "hello bazel");
}