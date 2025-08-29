# 🎤 Voice Activated Smart Home Appliance System

This project is a **Voice Controlled Smart Home Automation System** built with **Arduino UNO, Bluetooth (HC-05), and Relay Modules**.  
It enables users to **control appliances (fan, light, buzzer, etc.) using voice commands** via a smartphone app.

---

## ✨ Features
- Control home appliances (Fan, Light, Buzzer) using **voice commands**.
- Wireless connectivity via **Bluetooth (HC-05)**.
- Works with a simple **Android Bluetooth Voice Control App**.
- Uses **Relay Modules** to safely switch AC appliances.
- Arduino runs commands like:
  - `"fan on"` → Turns Fan ON
  - `"fan off"` → Turns Fan OFF
  - `"light on"` → Turns Light ON
  - `"light off"` → Turns Light OFF
  - `"buzzer on"` → Turns Buzzer ON
  - `"buzzer off"` → Turns Buzzer OFF

---

## 📂 Project Structure
Voice-Activated-Smart-Home/
│── Voice_Activated_Home_Automation.ino # Arduino code
│── circuit_diagram.png # Wiring diagram
│── README.md # Documentation

yaml
Copy code

---

## ⚡ Components Required
- Arduino UNO (or Nano)
- Bluetooth module **HC-05**
- Relay module (2–4 channel, 5V)
- AC appliances (Fan, Bulb/Light, Buzzer)
- Jumper wires & breadboard
- Resistors (1kΩ + 2kΩ) for HC-05 voltage divider
- Android phone with **Bluetooth Voice Control App**

---

## 🔌 Circuit Connections

### 1) Arduino ↔ HC-05 Bluetooth
- **HC-05 VCC** → 5V  
- **HC-05 GND** → GND  
- **HC-05 TXD** → Arduino D10  
- **HC-05 RXD** → Arduino D11 (through voltage divider: 1k + 2k resistors)

### 2) Arduino ↔ Relay Module
- **Relay VCC** → 5V  
- **Relay GND** → GND  
- **Relay IN1** → D2 (Fan)  
- **Relay IN2** → D3 (Light)  
- **Relay IN3** → D4 (Buzzer)

### 3) Relay ↔ Appliances (⚠️ Mains Safety)
- **COM** → Live wire from mains  
- **NO** → Appliance Live input  
- **Neutral (N)** → Direct to appliance Neutral  
- (Earth → Direct to appliance Earth if available)

---

## 🖥️ Arduino Code
Upload the file [`Voice_Activated_Home_Automation.ino`](Voice_Activated_Home_Automation.ino) to Arduino UNO using the Arduino IDE.

---

## 📱 Mobile App Setup
1. Install any **Bluetooth Voice Control App** from Play Store.  
2. Pair with **HC-05** (default PIN: `1234` or `0000`).  
3. Speak commands like:
   - `"fan on"`, `"fan off"`
   - `"light on"`, `"light off"`
   - `"buzzer on"`, `"buzzer off"`

---

## 🚀 How to Run
1. Assemble the circuit as per the diagram.  
2. Upload the Arduino sketch to UNO.  
3. Pair your Android phone with HC-05 via Bluetooth.  
4. Open the Voice Control App → connect to HC-05.  
5. Speak a command → appliance responds instantly.  

---

## ⚠️ Safety Notes
- This project involves **mains AC voltage**. Handle with extreme care.  
- Use **relay modules with opto-isolation** for safety.  
- Place the system inside a **proper insulated enclosure**.  
- If unsure, **get help from a qualified electrician**.  

---

## 📌 Author
👤 **Mohammed Muzammil**  
📧 [muzammil2204@gmail.com](mailto:muzammil2204@gmail.com)  
🔗 [LinkedIn](https://www.linkedin.com/in/mohammed-muzammil-0279862b7/)

---
