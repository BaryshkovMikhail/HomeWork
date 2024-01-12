#include "Counter.h"

Counter::Counter(int num): num(num) {}
int Counter::get_num() const{return num;}
int Counter::minus() {return --num;}
int Counter::plus() {return ++num;}