#include <iostream>
#include <stdlib.h>
#include "include/HelloWorldConfig.h"
#include "include/hello.hpp"

using namespace std;

void version() {
    printf("Version: %d.%d.%d\n", 
        HELLO_WORLD_VERSION_MAJOR, 
        HELLO_WORLD_VERSION_MINOR,
        HELLO_WORLD_VERSION_PATCH);
}

int main(void) {

    version();

    hello::say_hello();

    return(0);
}