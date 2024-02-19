# OCR
This is the OCR project carried out as part of the 3rd semester at EPITA.
It consists of an application capable of solving a photographed sudoku and displaying the solved grid with the result.

## XOR

- Go to `neural network/Soutenance 1/`
- Use `make` to compile
- Launch: `./main` with either :
  
	- `-t` : to train the model
   
	- `x x` : where x is either 0 or 1 to gain the xor result

## Solver

- Got to `solver/`
- Use `make` to compile
- Launch: `./solver` with either:
  
	- `-h` : help
   
 	- `loadpath savepath` : load the content in loadpath file and save the result in savepath file
    
 	- `loadpath` : load the content of loadpath file, solve it and save in the same file with '_solved' suffix.
    

## Application

- Go to `Application/`
- Use `make` to compile
- Launch `./main x` where `x` is the picture of the sudoku to solve
