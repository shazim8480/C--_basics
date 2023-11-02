// Namespace = provides a solution for preventing name conflicts in large projects. Each entity(variable) needs a unique name within the same namespace. But in different namespaces, variable uniqueness does not matter.

#include<iostream>

namespace firstScope{
    int x = 1;
}

namespace secondScope{
    int x = 10;
}

int main(){

    // int x = 0;

    // std::cout << x; // we aren't defining the namespace

    // ** to access a specific namespace with (prefix + ::) => it is called Scope resolution operator //

    // std::cout << secondScope::x;

    // alternate method => using namespace "...",
    using namespace firstScope;

    std::cout << x;


    return 0;
}