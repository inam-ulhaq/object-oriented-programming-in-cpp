// Polymorphism is a fundamental concept in Object-Oriented Programming (OOP).
// It allows objects of different classes to respond to the same method 
// in different ways. The key idea behind polymorphism is that a single 
// method call can behave differently depending on the object that invokes it.

// In short, polymorphism allows for one interface to represent multiple 
// underlying forms (or classes), providing flexibility and reusability in code.

// Key Concepts of Polymorphism:

// 1. **Method Overloading**:
// Method overloading refers to defining multiple methods with the same name 
// but with different parameters (different number, types, or order of parameters).
// The correct method is chosen at compile-time based on the method signature.

// Example: A `print()` method can be overloaded to accept a string, an integer, 
// or a float, each producing a different output based on the parameter passed.

// 2. **Method Overriding**:
// Method overriding allows a subclass to provide a specific implementation of a method 
// that is already defined in its superclass. The overridden method in the subclass 
// is called instead of the method in the parent class, providing more specific behavior.

// Example: A superclass `Animal` might have a `makeSound()` method, 
// but the `Dog` subclass can override `makeSound()` to return "Bark" instead of a generic sound.

// 3. **Dynamic Method Dispatch**:
// Polymorphism enables dynamic method dispatch, where the method that gets called is determined 
// at runtime based on the actual object type. This allows a program to call the method of 
// a subclass even if the reference is of the superclass type.

// Example: A reference to the `Animal` class can point to a `Dog` object. When the `makeSound()` 
// method is called, the `Dog`'s implementation is executed, not the `Animal`'s method.

// 4. **Code Reusability**:
// Polymorphism improves code reusability by allowing developers to write code 
// that works with objects of various classes. The same method can be used 
// to interact with objects of different classes that share a common interface.

// Example: A `draw()` method can be called on a `Shape` reference, whether it’s pointing to 
// a `Circle`, `Rectangle`, or any other shape. This helps to avoid code duplication.

