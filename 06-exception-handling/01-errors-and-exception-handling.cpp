// Title: Exception Handling
// Author: Inam Ul Haq
// Description:
//	Error:
//	
//	- An error is a problem in a program that makes it incorrect.
//	- It prevents the program from compiling successfully or running
//	 as intended.
//	- Errors may occur at different stages: during writing, compiling,
//	 or execution.
//	
//	Types of Errors:
//	
//	1. Syntax Error
//	   - Violation of the language rules.
//	   - Example: missing semicolon, using an undeclared variable,
//		 wrong keyword spelling.
//	   - Detected at compile time.
//	   - Faced by: Programmer
//	   - Solution: Correct the code according to language grammar
//		 and rules.
//
//	2. Semantic Error
//	   - The code follows syntax rules but the meaning or usage is
//		 incorrect.
//	   - Example: adding integer to a string, mismatched data types.
//	   - Compiler may or may not detect it, but output will not be 
//		as expected.
//	   - Faced by: Programmer
//	   - Solution: Recheck logic, use correct data types, validate
//		 operations.
//
//	3. Logical Error
//	   - The program runs without crashing but produces wrong results.
//	   - Example: using wrong formula, incorrect loop condition.
//	   - Faced by: User (since wrong output is observed)
//	   - Solution: Programmer must debug and test thoroughly to correct
//		 logic.
//
//	4. Runtime Error
//	   - The program compiles and starts correctly, but fails during 
//		 execution 
//	     due to invalid operations or system-related issues.
//	   - Example: divide by zero, accessing invalid memory, file not 
//		 found.
//	   - Some runtime errors can be handled by exception handling 
//		 (like divide by zero, bad input).
//	   - Some runtime errors cannot be caught by exceptions (like 
//		 segmentation fault, hardware failure).
//	   - Faced by: User (while running the program)
//	   - Solution: Programmer must add input validation, resource 
// 		 checks, and where possible, exception handling.
//
//	Exception:
//	- An exception is a special category of runtime error that can be
//	  caught and managed in the program.
//	- Examples: divide by zero, invalid user input, missing file, 
//	  network failure.
//	- Unlike general runtime errors, exceptions can be handled using
//	  try, throw, and catch.
//	- Purpose: To prevent the program from crashing and allow safe 
// 	  recovery or user-friendly messages.
//	- Faced by: User (at runtime) but controlled by: Programmer 
//	  (through handling code).
//	- Solution: Programmer writes robust exception handling to manage
// 	  invalid inputs 
//	  or unavailable resources, ensuring the program continues safely.
//
//	Difference between Runtime Error and Exception:
//	- Runtime Error: A broad category; some are recoverable (exceptions),
//	  some are fatal (segmentation fault).
//	- Exception: A specific type of runtime error that can be caught and
// 	  handled inside the program.
