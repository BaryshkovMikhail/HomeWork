#pragma once

class Counter
{
private:
    int num = 0;

public:
    Counter(int num);
    int get_num() const;
    int minus();
    int plus();
};