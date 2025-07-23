# From Functions to Objects – C++ System Design (Video 2)

In this episode, we transition from basic functions to the building blocks of real machine intelligence.  
We explore how C++ functions represent a machine’s behavior — and why modular thinking is crucial as systems grow more complex.

---

## What You’ll Learn

- How C++ functions simulate machine actions
- Why real systems can't rely on isolated logic
- A live example: `adjustMotor()` function with hover thrust logic
- The transition from functions to modular thinking

---

## Core Concept

> Machines don’t just run functions.  
> They **organize logic** into **modules**.  
> Subsystems.  
> Brains made of brains.  
> That’s how we move from _functions_ to _objects_.

---

## Code Preview

```cpp
void adjustMotor(int thrust) {
    if (thrust < 0) thrust = 0;
    if (thrust > 100) thrust = 100;
    // Simulate setting motor power
    cout << "Motor thrust adjusted to: " << thrust << "%" << endl;
}

## Watch the Full Video
https://www.youtube.com/watch?v=oU_GoxJMu8c&t=2s&ab_channel=NeuroMech


## Next Episode
Video 3: “From Modules to Machines”
We go beyond functions and introduce the class — giving our components memory, identity, and logic.

## Repo Structure
/Video2_FunctionsToObjects
├── main.cpp
├── README.md



