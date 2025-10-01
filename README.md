# 🚀 C++ Inheritance and Object-Oriented Programming Examples

## 🎯 Aim
To study and implement the concepts of inheritance in C++, including single, multilevel, and multiple inheritance, and understand their practical applications in real-world scenarios.

## 🧰 Apparatus
- VS Code or any C++ IDE
- Online C++ Compiler (e.g., cpp.sh, OnlineGDB)

---

## 📚 Theory

Inheritance is a key feature of object-oriented programming in C++. It allows one class (child/derived) to inherit properties and behaviors from another class (parent/base). This promotes code reuse and logical hierarchy.

### 🔑 Key Concepts

- **Single Inheritance**: One class inherits from one base class.
- **Multilevel Inheritance**: A class inherits from a derived class which itself inherits from another base class.
- **Multiple Inheritance**: A class inherits from more than one base class.

---

## 🧮 Programs and Algorithms

### 1️⃣ School System – Hierarchical Inheritance

**Description**: Demonstrates hierarchical inheritance where multiple classes (Teacher, Student, Staff) inherit from a common base class (School).

**Algorithm**:
- Create a base class `School` with a school name.
- Create derived classes `Teacher`, `Student`, and `Staff` with their own attributes.
- Display information using respective objects.

**Output**:
Teacher Info: School: K.B.C New English School Teaches: Mathematics

Student Info: School: K.B.C New English School Grade: 10th Grade

Staff Info: School: K.B.C New English School Role: Librarian


---

### 2️⃣ College System – Multilevel Inheritance

**Description**: Demonstrates multilevel inheritance where `Lab` inherits from `Department`, which inherits from `College`.

**Algorithm**:
- Create base class `College`.
- Create derived class `Department` and further derived class `Lab`.
- Display college, department, and lab details.

**Output**:
College Name: Symbiosis Institue Of Technology 

Department: Electronics & Communication

Lab Name: DCLD Lab


### 3️⃣ Mountain Bike – Multiple Inheritance

**Description**: Demonstrates multiple inheritance where `MountainBike` inherits from both `Vehicle` and `Equipment`.

**Algorithm**:
- Create base classes `Vehicle` and `Equipment`.
- Create derived class `MountainBike` that inherits both.
- Display type, category, and description.

**Output**:

This is a vehicle.

This is an outdoor equipment.

This is a mountain bike.


---

### 4️⃣ Car Details – Single Inheritance with Constructor

**Description**: Demonstrates single inheritance with constructors to initialize brand and model.

**Algorithm**:
- Create base class `Vehicle` with a constructor.
- Create derived class `Car` with its own constructor.
- Display color, brand, model, and speed.

**Output**:

Colour: Red

Brand: Ford

Model: Mustang 

Max speed: 200 km/h


---

### 5️⃣ Car Details – Single Inheritance (Simplified)

**Description**: Demonstrates single inheritance with direct initialization of variables.

**Algorithm**:
- Create base class `Vehicle` with brand and color.
- Create derived class `Car` with model and speed.
- Display all details using one object.

**Output**:

Brand: Toyota 

Color: Blue

Model: Corolla 

Speed: 180 km/h

## 🎯 Key Learning Outcomes

- Understand different types of inheritance in C++.
- Learn how to structure classes for real-world modeling.
- Practice accessing base and derived class members.
- Apply constructors for initializing object data.

## 🧠 Applications

- **School and College Systems**: Modeling organizational hierarchy.
- **Vehicle Systems**: Representing product features and categories.
- **Real-World Projects**: Building scalable and reusable class structures.


## ✅ Code Execution Status
All programs compiled and executed successfully with expected outputs.




