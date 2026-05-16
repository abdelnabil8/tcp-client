# TCP Client — Qt/C++

A functional TCP client application built in C++ using the Qt framework.  
The client connects to a remote server, sends an authentication token, and reads the server's response.

## Features

- Connects to a TCP server via IP and port
- Sends an authentication token to the server
- Reads and displays the server's response
- Handles connection errors and timeouts gracefully

## Tech Stack

- **Language:** C++
- **Framework:** Qt (QTcpSocket, QCoreApplication)
- **Tools:** Qt Creator, Wireshark (for traffic analysis)

## How It Works

1. A `QTcpSocket` is created and connects to the target server (`141.100.51.201:5454`)
2. An authentication token is sent to the server
3. The client waits for a response and prints it to the console
4. The connection is then cleanly closed

## Getting Started

### Prerequisites
- Qt 5 or Qt 6 installed
- C++ compiler (MinGW / MSVC / GCC)

### Build & Run
```bash
# Clone the repo
git clone https://github.com/abdelnabil8/tcp-client
cd tcp-client

# Open in Qt Creator and build, or use qmake:
qmake
make
./tcp-client
```

## What I Learned

- TCP socket programming with Qt
- Network communication and client-server architecture
- Debugging with Wireshark to analyze data packets
- Error handling for network timeouts and connection failures

## Author

**Abdellah Nabil**  
CS Student @ Hochschule Darmstadt  
[GitHub](https://github.com/abdelnabil8) 
