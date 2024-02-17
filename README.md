# ocr
=============================XOR=============================

-Aller dans neural network/Soutenance 1/

-Utiliser 'make' pour compiler le code

-Taper ./main puis :
	-t : entrainer le réseau de neurones
	 x x : où x est 0 ou 1 pour obtenir le résultat

============================Solver===========================

-Se placer dans le dossier 'solver/'

-Compiler le code avec 'make'

-Lancer le binaire avec './solver' puis les paramètres voulus.

-L'argument '-h' permet d'afficher les possibilités d'arguments pour le programme, à savoir:

 	-./solver loadpath savepath : le programme chargera le sudoku stocké sous loadpath, le résoudra si possible et enregistrera le résultat dans savepath.
	
 	-./solver loadpath : Le programme chargera le sudoku stocké sous loadpath, le résoudra si possible et l'enregistrera sous le même chemin auquel est ajouté '_solved'.
	
 	-Si des mauvais arguments sont mal renseignés, le programme affichera un message d'erreur ainsi que le conseil d'utiliser l'argument '-h'.

============================Application===========================

-Aller dans Application

-Compiler le code avec 'make'

-Lancer le binaire avec './main' avec les paramètres voulus.

	-./main loadpath : Le programme chargera l'image sudoku stocké sous loadpath, le résoudra si possible et l'enregistrera.
