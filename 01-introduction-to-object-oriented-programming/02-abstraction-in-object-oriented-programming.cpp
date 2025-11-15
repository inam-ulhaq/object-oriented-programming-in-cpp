// Title: Abstraction in Object-Oriented Programming (OOP)
// Author: Inam Ul Haq
// Description:
// 1. **What is Abstraction?**
// Abstraction in OOP is the concept of **hiding the implementation
// details** of a class and exposing only the **essential 
// functionalities** to the **developer writing the client code**.
// This allows the **developer** to focus on **what the object does**,
// without worrying about **how** it does it.

// 2. **Simplifies Interaction for the Developer**:
// By using abstraction, the **developer writing the client code** 
// interacts with objects through a simple, well-defined interface. 
// This interaction hides the **complexity** of the object's internal
// workings, so the **developer** does not need to know how the object
// is implemented. Example: A `Car` class might have a `start()` method,
// and the **developer** only needs to call `start()`.

// 3. **Hides Internal Complexity**:
// Abstraction hides the **implementation details** of a class. This 
// means the **developer writing the client code** can use a class 
// without knowing about the internal workings, logic, or data structures
// used in its implementation. Example: The **developer** can call 
// `car.start()` without knowing how the car engine works internally.

// 4. **Abstract Classes and Abstraction**:
// An **abstract class** is a class that **defines what needs to be done**
// (by declaring abstract methods), but leaves the **implementation 
// details** to its subclasses. The **developer writing the client 
// code** can interact with the abstract class's interface, but doesn't
// need to know how the methods are implemented in the derived classes.
// Example: An abstract class `Shape` defines an abstract method `draw()`,
// but it does not implement how drawing is done.

// 5. **Enforcing Consistency Across Subclasses**:
// One of the key reasons to use abstract classes is to **enforce 
// consistency**. When a **developer writing the client code** 
// uses an abstract class (e.g., `Shape`), they are guaranteed that
// all derived classes (e.g., `Circle`, `Rectangle`) will have the
// `draw()` method. The **developer** doesn't need to worry about the
// specifics of each subclass's implementation, just that they all 
// provide the `draw()` method, allowing for a **uniform interface**.

// 6. **Hiding Complexity from the Developer Writing Client Code**:
// The goal of abstraction is to **hide complexity from the developer**
// writing the client code. This separates the **interface** (what the 
// object does) from the **implementation** (how it does it). The 
// **developer** is only concerned with interacting through the 
// interface, not the internal workings of the class.

// 7. **Abstract Classes vs. Regular Classes**:
// - **Regular classes** abstract complexity by providing an interface
// (methods), but the implementation details are still hidden. 
//   - Example: The **developer writing the client code** uses methods
// like `start()` or `draw()` without needing to know how they work 
// internally.
// - **Abstract classes** go further by defining an interface (e.g., 
// abstract methods) and **forcing subclasses to implement certain 
// behaviors**.
//   - The **developer writing the client code** doesn't know how each
// subclass implements these methods, just that they exist.

// 8. **What Does the Developer Writing Client Code Know?**
// The **developer writing the client code** interacts with the 
// **interface** of a class or abstract class. They only know 
// **what methods** are available and **what they do** (e.g., `start()`, 
// `draw()`). They **don't need to know how** those methods are implemented.
// This is what makes abstraction powerful: The **developer** can use 
// the object without dealing with the complexity of the implementation.

// 9. **Summary of Abstraction in OOP**:
// - **Abstraction** allows the **developer writing the client code**
// to use an object or class by interacting with its **public 
// interface**.
// - The **developer** doesn't need to know the internal implementation
// of the class or object; they just need to understand the **interface**.
// - Whether using **regular classes** or **abstract classes**,
// abstraction hides implementation details and provides a **clean 
// interface**.
// - **Abstract classes** enforce a contract on subclasses, ensuring
// that they provide specific functionality (like `draw()`),
// but leave the implementation of those functions to the subclasses
// themselves, which are hidden from the **developer writing client code**.
