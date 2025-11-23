// Title: Constant Qualifier
// Author: Inam Ul Haq
// Description:
//    The `const` qualifier in C++ is used to define entities whose values 
//    cannot be modified after initialization. It ensures immutability 
//    and helps prevent accidental changes. 
//
// Key Points:
//    -> const variable -> value cannot change after initialization
//    -> const pointer -> pointer itself or the value it points to can be constant
//    -> const function parameter -> function cannot modify the argument
//    -> const member function -> function cannot modify class data members
//    -> const object -> object cannot modify its members (except mutable)
//
// Purpose:
//    -> Improves code safety by avoiding unintended modifications
//    -> Makes APIs clearer about intent (read-only vs. modifiable)
//    -> Enables compiler optimizations
//
