// Title: Philosophy Behind Constructor
// Author: Inam Ul Haq
// Description:

// Imagine you have a class called Car, and color is one of its properties.
// Now, when you create an object of this class, it’s like buying a car from a company. 
// Imagine that when you buy the car, you do not specify the color. You just accept the car 
// from the manufacturer without knowing what color it is. If the car is handed to you 
// and the color was never specified, what do you think would happen? 
// Would it be acceptable for the car’s color to be some random, uninitialized value — 
// something like "garbage"? Obviously not, because that would be unprofessional and illogical.
// This would be an issue of poor design in the manufacturing process.

// This analogy illustrates the role of constructors in object-oriented programming (OOP).
// A constructor is like a special function provided by the company (the class), which is automatically 
// called during the manufacturing process (when the object is created). This constructor allows 
// the customer (the programmer) to specify important details (such as the `color`) during the creation 
// of the object, ensuring that all objects are initialized properly and that no "garbage" values exist.

// Without a constructor, objects would not have their properties properly initialized,
// which could lead to undefined behavior, making the program unpredictable and error-prone. 
// The constructor provides the **opportunity to specify essential properties** right when 
// the object is created, ensuring that it is in a valid state.

