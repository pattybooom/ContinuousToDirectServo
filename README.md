# 🎮 Arduino Continuous Rotation Servo Controller

This project demonstrates how to control a **continuous rotation servo** as if it were a positional servo, by implementing custom functions to handle angular movement.  

Instead of directly setting angles with `Servo.write()`, this project uses incremental pulses and a conversion factor to simulate precise degree-based control.

---

## ✨ Features
- ✅ Control a continuous rotation servo with **absolute angles** (`goToDegree()`).
- ✅ Custom **conversion factor (1.6071428)** to map servo increments to degrees.
- ✅ Functions:
  - `turn(degrees)` → Rotate servo by a relative number of degrees.
  - `goToDegree(degree)` → Move servo to an absolute target angle.
- ✅ Serial output for debugging current vs target positions.

---

## 🛠️ Hardware Requirements
- Arduino Uno (or compatible board)
- Continuous rotation servo motor
- USB cable
- (Optional) External power supply for servo
