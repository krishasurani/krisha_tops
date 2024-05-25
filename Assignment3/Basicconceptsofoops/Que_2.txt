// What is OOP? List OOP concepts

Object-Oriented Programming (OOP) is a programming paradigm that revolves around creating reusable and 
maintainable software by using "objects" to model real-world entities. These objects encapsulate data 
(attributes) and the actions (methods) that can be performed on that data.

Here are the core concepts that define OOP:

Objects and Classes:

An object is an instance of a class. It represents a specific entity with its own attributes (data) and 
methods (functions) that define its behavior.
A class is a blueprint that defines the properties and behavior of its objects. It acts as a template 
for creating objects. Imagine a class as a cookie cutter shape that you use to create individual cookies 
(objects) with the same basic form but potentially different attributes (like chocolate chips or sprinkles).

Encapsulation:

Encapsulation is the bundling of data (attributes) and methods that operate on that data within a single 
unit (class). This restricts direct access to the data from outside the class, promoting data integrity 
and security. Imagine a capsule containing medicine (data) and instructions for use (methods). You can't 
directly access the medicine, but you can follow the instructions to interact with it safely.

Inheritance:

Inheritance allows creating new classes (subclasses) based on existing classes (superclasses). The 
subclass inherits the properties and methods of the superclass, and can add its own specific 
functionalities. This promotes code reusability and creates hierarchical relationships between classes. 
Think of a class Animal with common attributes like name and age. You can create subclasses like Dog and 
Cat that inherit these attributes and add specific methods like bark() or purr().

Polymorphism:

Polymorphism allows objects of different classes to respond differently to the same method call. This 
enables flexible and dynamic behavior based on the object type at runtime. There are two main types:
Compile-time polymorphism (method overloading): Occurs when multiple methods have the same name but 
different parameters, allowing the compiler to choose the correct method based on the arguments provided 
at compile time. Imagine having a print() method that can handle different data types (e.g., print(int) 
or print(string)).
Runtime polymorphism (method overriding): Occurs when a subclass redefines a method inherited from its 
superclass. The specific method executed depends on the object's type at runtime. Think of a makeSound() 
method in the Animal class that might be overridden in Dog to be bark() and in Cat to be meow().

Abstraction:

Abstraction focuses on exposing essential details about an object while hiding its internal implementation. 
It allows users to interact with objects without worrying about the underlying complexities. Imagine a 
remote control for a TV. It exposes functions like turnOn() and changeChannel() without you needing to 
know the intricate electronic workings of the TV itself. This promotes code maintainability and 
reusability.