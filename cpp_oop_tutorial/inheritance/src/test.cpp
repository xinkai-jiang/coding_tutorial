#include <include/shape.h>
#include <include/rectangle.h>

int main(int argc, const char** argv) {
    shape* r1 = new rectangle();
    r1->draw();
    delete r1;
    return 0;
}