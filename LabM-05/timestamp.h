#ifndef TIMESTAMP_H
#define TIMESTAMP_H
#include <string>


class timeStamp
{
    public:
        timeStamp();
        timeStamp(int);
        timeStamp(int, int,int);
        bool operator == (timeStamp);
        bool operator != (timeStamp);
        friend istream& operator >> (istream&, timeStamp&);
        friend ostream& operator << (ostream&, timeStamp&);

    private:
        int sec, min,hr;
};

#endif // TIMESTAMP_H
