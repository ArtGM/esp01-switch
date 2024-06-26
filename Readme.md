# ESP01-Switch

This repository contains the necessary files and instructions to flash the ESP-01 module using PlatformIO.

## Prerequisites

Before flashing the ESP-01 module, make sure you have the following prerequisites installed:

- PlatformIO: PlatformIO is an open-source ecosystem for IoT development. You can install it by following the instructions on the [PlatformIO website](https://platformio.org/).

## Before Flashing

You must set you Fai Box SSID (eg: Freebox-XXX) and your wifi password in the main.cpp val

```cpp
const char* ssid = "SSID"; // Freebosx--- 
const char* password = "PASSWORD"; // 1234567890
```

## Flashing the ESP-01

To flash the ESP-01 module with PlatformIO, follow these steps:

1. Clone or download this repository to your local machine.
2. Connect the ESP-01 module to your computer using a USB to Serial adapter.
3. Open a terminal or command prompt and navigate to the project directory.
4. Run the following command to build and upload the firmware to the ESP-01 module:

    ```bash
    platformio run --target upload
    ```

5. Wait for the flashing process to complete. Once done, you should see the success message in the terminal.


## Flashing ESP-01 with PlatformIO Extension for VSCode

To flash the ESP-01 module using the PlatformIO extension for VSCode, follow these steps:

1. Install the PlatformIO extension for VSCode. You can do this by opening VSCode, going to the Extensions view, and searching for "PlatformIO". Click on the "Install" button to install the extension.

2. Clone or download this repository to your local machine.

3. Connect the ESP-01 module to your computer using a USB to Serial adapter.

4. Open the project folder in VSCode.

5. Open the PlatformIO sidebar by clicking on the PlatformIO icon in the activity bar on the side of the VSCode window.

6. In the PlatformIO sidebar, click on "Open Project" and select the project folder.

7. In the PlatformIO sidebar, click on "Project Tasks" and then click on "Build".

8. Once the build process is complete, click on "Upload" in the PlatformIO sidebar.

9. Wait for the flashing process to complete. Once done, you should see the success message in the PlatformIO output.

10. If you encounter any issues during the flashing process, refer to the PlatformIO documentation or seek help from the community.

11. Feel free to contribute to this repository by opening a pull request if you have any improvements or bug fixes.

12. This project is licensed under the MIT License.

# Usage 

You can access the esp-01 web server on your local network using the IP address that your box has automatically assigned to it (you can usually find it in the box management interface in the connected objects section).

If you want to have acces to the web server outside of your local network, you set-up your box with Duck DNS, to open a bridge forwarded to your esp-01 or you can use Ngrok


## Troubleshooting

If you encounter any issues during the flashing process, try the following troubleshooting steps:

- Make sure the ESP-01 module is properly connected to your computer.
- Check that you have selected the correct serial port in the PlatformIO configuration.
- Ensure that you have the necessary permissions to access the serial port.

If the issue persists, refer to the [PlatformIO documentation](https://docs.platformio.org/) or seek help from the community.

