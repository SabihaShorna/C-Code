0#include "timestamp.h"

timeStamp::timeStamp()
{

}
timeStamp ::timeStamp(int sec){
    sec=sec;
}
timeStamp ::timeStamp(int sec, int min, int hr){
    sec=sec;
    min=min;
    hr=hr;
}
bool timeStamp::operator == (timeStamp time)
{
    if(sec == time.sec)
        return true;
    else
        return false;
}

bool timeStamp::operator != (timeStamp time)
{
    if(sec != time.sec)
        return true;
    else
        return false;
}

istream& operator >> (istream& is, timeStamp& time)
{
    is >> time.sec >> time.min >> time.hr;
    return is;
}

ostream& operator << (ostream& os, timeStamp& time)
{
    os << time.sec << ", " << time.min << ", " << time.hr;
    return os;
}


