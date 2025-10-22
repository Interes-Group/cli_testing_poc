# SumCLI

A simple command-line calculator that adds two numbers together.

## Description

SumCLI is a lightweight C-based command-line tool that performs addition of two numbers. It accepts two numeric
arguments and returns their sum with two decimal places precision.

## Features

- ✅ Add two numbers (integers or decimals)
- ✅ Input validation and error handling
- ✅ Help documentation
- ✅ Automated testing with TUI Test framework
- ✅ CI/CD pipeline with compliance checks

## Installation

### Prerequisites

- C compiler (GCC or Clang)
- CMake (for building)
- Node.js and npm (for running tests)

### Build from Source

1. Clone the repository:
   ```bash
   git clone https://github.com/Interes-Group/cli_testing_poc
   cd cli_testing_poc
   ```

2. Create build directory and compile:
   ```bash
   mkdir build
   cd build
   cmake ..
   make
   ```
   
It can be compiled with only gcc compiler
```bash
gcc -std=c17 -o sumcli -Wall -Wextra main.c 
```

3. The executable `sumcli` will be created in the build directory.

## Usage

```bash
sumcli <first_number> <second_number>
```

### Examples

```bash
# Add two integers
./sumcli 5 3
# Output: The sum is 8.00

# Add decimal numbers
./sumcli 2.5 1.7
# Output: The sum is 4.20

# Add negative numbers
./sumcli -10 15
# Output: The sum is 5.00
```

### Help

```bash
./sumcli
# Shows usage information and help text
```

## Error Handling

The application provides clear error messages for common issues:

- **Too few arguments**: Displays error message and help when less than 2 numbers are provided
- **Too many arguments**: Displays error message and help when more than 2 numbers are provided
- **Invalid input**: Uses `atof()` which handles invalid numeric input gracefully

## Testing

This project uses the Microsoft TUI Test framework for automated testing.

### Run Tests

```bash
cd test
npm install
npm test
```

The test suite includes:

- Snapshot testing for output verification
- Various input scenarios validation
- Error condition testing

### Test Configuration

Tests are configured in `test/tui-test.config.js` and test cases are defined in `test/sumcli.test.js`.

## Development

### Project Structure

```
poc_for_testing_cli_app/
├── main.c                  # Main source code
├── CMakeLists.txt          # Build configuration
├── test/                   # Test directory
│   ├── sumcli.test.js     # Test cases
│   ├── tui-test.config.js # Test configuration
├── .github/workflows/     # CI/CD configuration
└── README.md              # This file
```

### Contributing

1. Fork the repository
2. Create a feature branch
3. Make your changes
4. Run tests to ensure they pass
5. Submit a pull request

## CI/CD

The project includes GitHub Actions workflow for:

- Automated compliance checks
- Build verification
- Test execution

## License

See `LICENSE.txt` for license information.

## Requirements

- C99 compatible compiler
- Standard C library
- CMake 3.0 or higher (for building)
- Node.js 16+ (for testing)