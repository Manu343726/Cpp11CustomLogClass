/* 
 * File:   main.cpp
 * Author: manu343726
 *
 * Created on 12 de julio de 2013, 11:57
 */

#include <ostream>
#include <thread>
#include <chrono>

#include "Log.h"

struct Foo
{
    int x = 0;
    
    friend std::ostream& operator<<(std::ostream& os , const Foo& foo)
    {
        os << foo.x;
        
        return os;
    }
};

int main() {

    Log log;
    Foo foo;
    
    foo.x = 31415;    
    log << "Foo value is: " << foo << std::endl;
    
    std::this_thread::sleep_for( std::chrono::seconds(1) );
    
    foo.x = 27182;   
    log << "Foo value is: " << foo << std::endl;
    
    //Note that log header is printed only after a std::endl
    
    return 0;
}

