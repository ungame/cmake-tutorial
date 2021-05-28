#include <iostream>
#include <stdlib.h>
#include "HelloWorldConfig.h"

using namespace std;

void version() {
    printf("Version: %d.%d.%d\n", 
        HELLO_WORLD_VERSION_MAJOR, 
        HELLO_WORLD_VERSION_MINOR,
        HELLO_WORLD_VERSION_PATCH);
}

int main(void) {

    version();

    cout << "Hello World" << endl;

    return(0);
}