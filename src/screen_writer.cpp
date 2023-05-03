#include "../include/screen_writer.hpp"


namespace FEM
{

void ScreenWriter::clear_and_write(std::stringstream& ss)
{
    this->clear();
    this->write(ss);
}

void ScreenWriter::clear()
{
    system("clear");
}

void ScreenWriter::seperator(char sep)
{
    std::stringstream ss{};

    std::string s{'\n'};
    s.insert(1,this->w-2,sep);
    s.push_back('\n');

    ss<<s;

    this->write(ss);
}

void ScreenWriter::newline()
{
    std::stringstream ss{"\n"};
    this->write(ss);
}

void ScreenWriter::write(std::stringstream& ss)
{
    std::string s = ss.str();
    std::list<char> write_list(s.begin(),s.end());

    int32_t cursor = 0;
    while(write_list.size() > 0)
    {
        while(cursor<this->w && write_list.size() > 0)
        {
            cursor++;
            std::cout<<write_list.front();
            write_list.pop_front();
        }
        std::cout<<'\n';
        cursor = 0;
    }
}

}