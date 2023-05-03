#ifndef SCREEN_WRITER_HPP
#define SCREEN_WRITER_HPP

#include <string>
#include <list>
#include <sstream>
#include <iostream>

namespace FEM
{
class ScreenWriter
{
public:
    ScreenWriter() = default;
    ~ScreenWriter() = default;

    void clear();
    void seperator(char);
    void newline();
    void clear_and_write(std::stringstream&);
    void write(std::stringstream&);

private:
    const int32_t w = 80; // 80 Characters wide

};
}

#endif
