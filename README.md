# Smart Traffic Light System

## Overview
This project aims to address traffic congestion issues in India by implementing an AI-based Smart Traffic Light System. The system utilizes computer vision techniques, particularly object detection using YOLOv5, along with IoT components such as LEDs and Arduino UNO to manage traffic flow effectively.
It will redirect the traffic light according to the nuber of vehicles and in future according to the type of vehicle in emergency like ambulance.
## Features
- Real-time object detection using YOLOv5 to identify vehicles and their positions on the road.
- Implementation of a tracking algorithm to monitor vehicle movement and manage traffic accordingly.
- Integration with IoT components like Arduino UNO and LEDs to control traffic lights based on detected vehicle presence.
- Two-lane traffic monitoring to identify congestion and optimize traffic flow.

## How It Works
1. The system captures live traffic footage using a camera.
2. YOLOv5 model detects vehicles in the footage and tracks their movements.
3. A tracking algorithm assigns IDs to detected vehicles and monitors their positions.
4. Based on the vehicle positions and traffic conditions, the system controls traffic lights using IoT components.
5. LED indicators signal traffic light changes to manage traffic flow and reduce congestion.

## Usage
1. Install necessary dependencies: OpenCV, NumPy, PyTorch, etc.
2. Connect IoT components (Arduino UNO, LEDs) for traffic light control.
3. Run the Python script `smart_traffic_light.py` to initiate the Smart Traffic Light System.
4. Monitor the system's performance and traffic management through the output display.
